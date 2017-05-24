/*
  hid1_hid.h - handle HID implementation definitions

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

#ifndef __hid1_hid_H
#define __hid1_hid_H

#include "fsl_device_registers.h"
#include "clockMan1.h"
#include "pin_init.h"
#include "osa1.h"
#include "DbgCs1.h"
#include "hid1.h"
#include "usbDsc1.h"
#include "usbFmw1.h"
#include "gpio1.h"
#include "flash1.h"
#include "i2cCom1.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HID_REQUEST_VERSIONS                    (0x40)
#define HID_OUTPUT_BLOCK                        (0x33)
#define HID_PACKET_USER                         (0x18)
#define HID_PACKET_SYSTEM                       (0x3C)
#define HID_PACKET_USER_RESET                   (0xF8)
#define HID_PACKET_SYSTEM_RESET                 (0xF4)
#define HID_PACKET_FULL_RESET                   (0xFC)

typedef struct
{
    uint8_t output_id;
    uint8_t packet_id;
    uint16_t block_id;
    uint8_t block[1024];
}update_block_t;

void hid1_init(void);
uint8_t hid1_get_version(uint32_t source, uint32_t part);

void hid1_application_callback(uint8_t event_type, void * val, void * arg);

uint8_t hid1_class_specific_callback(uint8_t request, uint16_t value,
        uint8_t ** data, uint32_t * size, void * arg);

extern volatile bool g_do_reset;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
