/*
  gpio1.c - define GPIO pin configurations

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

#include "gpio1.h"
#include <stdbool.h>
const gpio_input_pin_user_config_t gpio1_InpConfig0[] = {
  {
    .pinName = WAKE_M1,
    .config.isPullEnable = true,
    .config.pullSelect = kPortPullDown,
    .config.isPassiveFilterEnabled = true,
    .config.isDigitalFilterEnabled = false,
    .config.interrupt = kPortIntDisabled
  },
  {
    .pinName = WAKE_M2,
    .config.isPullEnable = true,
    .config.pullSelect = kPortPullUp,
    .config.isPassiveFilterEnabled = true,
    .config.isDigitalFilterEnabled = false,
    .config.interrupt = kPortIntDisabled
  },
  {
    .pinName = EZP_CS,
    .config.isPullEnable = true,
    .config.pullSelect = kPortPullDown,
    .config.isPassiveFilterEnabled = true,
    .config.isDigitalFilterEnabled = false,
    .config.interrupt = kPortIntDisabled
  },
  {
    .pinName = GPIO_PINS_OUT_OF_RANGE,
  }
};
