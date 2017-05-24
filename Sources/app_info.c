/*
  app_info.c - Application version stucture in const memory location

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

#include "app_info.h"
#include "usbDsc1.h"

hologram_flash_id_t __attribute__((section (".idSection"))) id __attribute__ ((aligned (4))) = {
    0x544F4F42, //BOOT
    0x314D5044, //DPM1 for DashPro M1
    VERSION_MAJOR,
    VERSION_MINOR,
    VERSION_REVISION,
    0,
    0,
    "hologram.io",
    PRODUCT_STRING,
    ROLE_STRING,
    "User Module",
    "HID Bootloader"
};
