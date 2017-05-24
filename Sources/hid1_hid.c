/*
  hid1_hid.c - handle HID callback events

  https://hologram.io

  Copyright (c) 2016 Konekt, Inc.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "Cpu.h"
#include "Events.h"
#include "hid1_hid.h"
#include "app_info.h"
#include "printd.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "jump.h"
#include "flash.h"
#include "ipc_i2c_master.h"

static volatile bool HidInitialized = FALSE;
volatile bool g_do_reset = FALSE;

static uint8_t version_report[13];

void hid1_init(void)
{
    memset(version_report, 0, 13);
    //load the version numbers
    version_report[0] = HID_REQUEST_VERSIONS;
    memcpy(&version_report[1], &id.major, 3);
    i2c_status_t status = i2cCom0_GetSystemBootVersion(&version_report[7]);
    //PRINTD("SysBoot: %d\r\n", status);
    if(status != kStatus_I2C_Success)
    {
        memset(&version_report[7], 0 , 3);
        return;
    }
    status = i2cCom0_GetSystemFirmwareVersion(&version_report[10]);
    //PRINTD("SysFirm: %d\r\n", status);
    if(status != kStatus_I2C_Success)
    {
        memset(&version_report[10], 0 , 3);
    }
}

uint8_t hid1_get_version(uint32_t source, uint32_t part)
{
    uint32_t index = 0;
    if(source > 3) return 0;
    if(part > 2) return 0;
    return version_report[1+ source*3 + part];
}

/******************************************************************************
 **
 **    @name        hid1_application_callback
 **
 **    @brief       This function handles the callback
 **
 **    @param       handle : handle to Identify the controller
 **    @param       event_type       : value of the event
 **    @param       val              : gives the configuration value
 **    @param       arg      :  user parameter
 **
 **    @return      None
 **
 ******************************************************************************/
void hid1_application_callback(uint8_t event_type, void * val, void * arg)
{
    PRINTD("A %d\r\n", event_type);
    switch(event_type)
    {
    case USB_DEV_EVENT_BUS_RESET:
        HidInitialized = FALSE;
        break;

    case USB_DEV_EVENT_ENUM_COMPLETE:
        HidInitialized = TRUE;
        break;

    case USB_DEV_EVENT_ERROR:
        break;

    default:
        break;
    }
}

/******************************************************************************
 **
 **    @name        hid1_class_specific_callback
 **
 **    @brief       This function handles USB-HID Class callback
 **
 **    @param       request  :  request type
 **    @param       value    :  give report type and id
 **    @param       data     :  pointer to the data
 **    @param       size     :  size of the transfer
 **    @param       arg      :  user parameter
 **
 **    @return      status
 **                  USB_OK  :  if successful
 **                  else return error
 **
 ******************************************************************************/
uint8_t hid1_class_specific_callback(uint8_t request, uint16_t value,
        uint8_t ** data, uint32_t * size, void * arg)
{
    uint8_t error = USB_OK;
    update_block_t * packet;
    PRINTD("C %d 0x%X\r\n", request, value);
    /* Handle the class request */
    switch(request)
    {
    case USB_HID_GET_REPORT_REQUEST:
        PRINTD("Report Requested: 0x%02X\r\n", value&0xFF);
        switch(value&0xFF)
        {
        case HID_REQUEST_VERSIONS:
            *data = (uint8_t*)version_report;
            *size = sizeof(version_report);
            break;
        default:
            *size = 0;
            break;
        }
        break;

    case USB_HID_SET_REPORT_REQUEST:
        *size = 0; //don't send anything back...
        packet = (update_block_t*) (*data);
        PRINTD("Received Packet: 0x%02X 0x%02X\r\n", packet->output_id, packet->packet_id);
        if(packet->output_id == HID_REQUEST_VERSIONS)
        {
            PRINTD("Got a Set Version Report\r\n");
            break;
        }
        else if(packet->output_id != HID_OUTPUT_BLOCK)
        {
            PRINTD("Invalid Set Report Request\r\n");
        }
        if(packet->packet_id == HID_PACKET_USER)
        {
            if(packet->block_id == 0) i2cCom0_SendNotify();
            uint32_t block_address = packet->block_id * 1024 + APP_ADDRESS;
            PRINTD("Upload block %d @ 0x%08X\r\n", packet->block_id,
                    packet->block_id * 1024 + APP_ADDRESS);
            if(packet->block_id % 4 == 0)
            {
                PRINTD("Start of sector, erase 0x%02X to 0x%02X\r\n",
                        block_address, block_address + FTFx_PSECTOR_SIZE - 1);
                if(flash_erase_sector(block_address))
                    PRINTD("Sector Erased\r\n");
                else
                {
                    PRINTD("Sector Erase Failed\r\n");
                    *size = 1;
                    break;
                }

            }
            PRINTD("Writing...\r\n");
            if(flash_write_block(block_address, packet->block, 1024))
                PRINTD("Block written successfully\r\n");
            else
            {
                PRINTD("Block write failed");
                *size = 1;
                break;
            }
        }
        else if(packet->packet_id == HID_PACKET_SYSTEM)
        {
            if(i2cCom0_SendBlock(packet->block_id, packet->block, 1024))
                PRINTD("Sent block %d to System\r\n", packet->block_id);
            else
            {
                PRINTD("Block %d to System Failed\r\n", packet->block_id);
                *size = 1;
            }
        }
        else if(packet->packet_id == HID_PACKET_USER_RESET)
        {
            PRINTD("All done, resetting...\r\n\r\n\r\n");
            g_do_reset = TRUE;
        }
        else if(packet->packet_id == HID_PACKET_SYSTEM_RESET)
        {
            PRINTD("Request System Reset\r\n");
            if(i2cCom0_SendReset())
                PRINTD("Reset System\r\n");
            else
            {
                PRINTD("Failed to reset System\r\n");
                *size = 1;
            }
        }
        else if(packet->packet_id == HID_PACKET_FULL_RESET)
        {
            if(i2cCom0_SendReset())
                PRINTD("Reset System\r\n");
            else
            {
                PRINTD("Failed to reset System\r\n");
                *size = 1;
            }
            PRINTD("All done, resetting...\r\n\r\n\r\n");
            g_do_reset = TRUE;
        }
        else
        {
            PRINTD("Unknown packet: %d\r\n", packet->packet_id);
        }
        break;

    default:
        break;
    }
    return error;
}

#ifdef __cplusplus
} /* extern "C" */
#endif
