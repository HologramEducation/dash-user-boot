/*
  app_info.h - Application version stucture in const memory location

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

#include <stdint.h>

typedef struct
{
    uint32_t id;
    uint32_t device;
    uint8_t  major;
    uint8_t  minor;
    uint8_t  revision;
    uint8_t  pad;
    uint32_t extra;
    char     manuf[16];
    char     product[16];
    char     role[16];
    char     proc[16];
    char     desc[32];
}hologram_flash_id_t;

extern hologram_flash_id_t id;
