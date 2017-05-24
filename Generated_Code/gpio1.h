/*
  gpio1.h - define GPIO pins

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
#ifndef __gpio1_H
#define __gpio1_H

#include "clockMan1.h"
#include "fsl_gpio_driver.h"

extern const gpio_input_pin_user_config_t gpio1_InpConfig0[];

enum _gpio1_pinNames{
  WAKE_M1 = GPIO_MAKE_PIN(GPIOC_IDX, 5U),
  WAKE_M2 = GPIO_MAKE_PIN(GPIOC_IDX, 9U),
  EZP_CS = GPIO_MAKE_PIN(GPIOA_IDX, 4U),
};

  
#endif

