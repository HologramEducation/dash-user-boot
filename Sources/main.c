/*
  main.c - check for boot mode vs run mode based on
  external inputs

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
#if CPU_INIT_CONFIG
#include "Init_Config.h"
#endif
#include "jump.h"
#include "flash.h"
#include "hid1_hid.h"
#include "ipc_i2c_master.h"
#include "printd.h"

//#define STAY_IN_BOOT

int main(void)
{

    GPIO_DRV_Init(gpio1_InpConfig0, NULL);
    bool m1 = GPIO_DRV_ReadPinInput(WAKE_M1);
    bool m2 = GPIO_DRV_ReadPinInput(WAKE_M2);
    //TODO Turn off port clocks for WAKE_M1 and WAKE_M2
    bool jump = true;
#if !defined(STAY_IN_BOOT)
    if(m1 == 0 || m2 == 1) jump = JUMP_ToApp();
#endif

    typedef struct
    {
        __IO uint32_t CESR; /*Control/Error Status Register */
    } MPU_Type;
#define MPU_BASE                                (0x4000D000u)
#define MPU                                     ((MPU_Type *)MPU_BASE)

    //disable MPU
    MPU->CESR = 0xF8000000;

    load_usb_strings();

    PE_low_level_init();

    hid1_init();

    flash_init_ram();
    PRINTD("\r\nHID Loader  (%d%d%d)\r\n", m1, m2, jump);
    PRINTD("User Boot Version:       %d.%d.%d\r\n", hid1_get_version(0,0), hid1_get_version(0,1), hid1_get_version(0,2));
    PRINTD("System Boot Version:     %d.%d.%d\r\n", hid1_get_version(2,0), hid1_get_version(2,1), hid1_get_version(2,2));
    PRINTD("System Firmware Version: %d.%d.%d\r\n", hid1_get_version(3,0), hid1_get_version(3,1), hid1_get_version(3,2));

    (void)USB_Class_HID_Init(USBFMW1_USB_CONTROLLER_ID, &hid1_HidConfigStructure, &hid1_HidHandle);

    for(;;)
    {
        if(g_do_reset)
        {
            OSA_TimeDelay(1500);
            NVIC_SystemReset();
        }
    }

#ifdef PEX_RTOS_START
    PEX_RTOS_START(); /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
#endif

    for(;;)
    {
    }
}
