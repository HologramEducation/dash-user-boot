/*
  ipc_i2c_master.c - I2C master driver for communication with system MCU

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
#include "i2cCom1.h"
#include "gpio1.h"
#include "hid1_hid.h"

#define CMDI2C_NONE                     0x00
#define CMDI2C_READ_STATUS              0x01
#define CMDI2C_WRITE_SYSTEM_BLOCK       0x02
#define CMDI2C_USER_NOTIFY              0x22
#define CMDI2C_RESET                    0x55
#define CMDI2C_SYSTEMBOOT_VERSION       0x42
#define CMDI2C_SYSTEMFIRMWARE_VERSION   0x43

typedef struct
{
    uint8_t busy :1;
    uint8_t error :1;
    uint8_t :6;
} i2c_status_reg_t;

typedef struct
{
    uint8_t block_hi;
    uint8_t block_low;
    uint8_t block[1024];
} i2c_block_t;

static volatile uint32_t button_flags_;

i2c_status_t i2cCom0_GetData(uint8_t cmd, uint8_t len, uint8_t *data)
{
    i2c_status_t status = I2C_DRV_MasterSendDataBlocking(FSL_I2CCOM1,
            &i2cCom1_MasterConfig0,
            NULL, 0, &cmd, 1, 100);

    if(status != kStatus_I2C_Success) return status | 0x80;

    status = I2C_DRV_MasterReceiveDataBlocking(FSL_I2CCOM1,
            &i2cCom1_MasterConfig0,
            NULL, 0,
            data, len,
            1000);
    return status;
}

uint32_t i2cCom0_GetStatus(void)
{
    uint8_t rxBuff[1];
    uint32_t s = (uint32_t)i2cCom0_GetData(CMDI2C_READ_STATUS, 1, rxBuff);
    return (s << 8) | rxBuff[0];
}

i2c_status_t i2cCom0_GetSystemBootVersion(uint8_t *data)
{
    return i2cCom0_GetData(CMDI2C_SYSTEMBOOT_VERSION, 3, data);
}

i2c_status_t i2cCom0_GetSystemFirmwareVersion(uint8_t *data)
{
    return i2cCom0_GetData(CMDI2C_SYSTEMFIRMWARE_VERSION, 3, data);
}

bool i2cCom0_SendNotify(void)
{
    uint8_t cmdBuff[1] = { CMDI2C_USER_NOTIFY };

    i2c_status_t status = I2C_DRV_MasterSendDataBlocking(FSL_I2CCOM1,
            &i2cCom1_MasterConfig0,
            NULL, 0, cmdBuff, 1, 100);
    return status == 0;
}

bool i2cCom0_SendReset(void)
{
    uint8_t cmdBuff[1] = { CMDI2C_RESET };

    i2c_status_t status = I2C_DRV_MasterSendDataBlocking(FSL_I2CCOM1,
            &i2cCom1_MasterConfig0,
            NULL, 0, cmdBuff, 1, 100);
    return status == 0;
}

bool i2cCom0_SendBlock(uint16_t block, uint8_t *data, uint32_t blocksize)
{
    uint8_t cmdBuff[3] = {CMDI2C_WRITE_SYSTEM_BLOCK, (block >> 8) & 0xFF, block & 0xFF };
    i2c_status_t status = I2C_DRV_MasterSendDataBlocking(FSL_I2CCOM1,
            &i2cCom1_MasterConfig0, cmdBuff, 3, data, blocksize, 3000);
    if(status != 0) return false;

    //wait for M1_WAKE to be clear, which means done
    uint32_t now = OSA_TimeGetMsec();
    uint32_t timeout = now + 3000;
    while(GPIO_DRV_ReadPinInput(EZP_CS) == 1)
    {
        now = OSA_TimeGetMsec();
        if(now > timeout) break;
    }
    return timeout > now;
}
