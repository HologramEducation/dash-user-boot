/*
  ipc_i2c_master.h - define I2C master functions

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

#ifndef SOURCES_IPC_I2C_MASTER_H_
#define SOURCES_IPC_I2C_MASTER_H_

i2c_status_t i2cCom0_GetData(uint8_t cmd, uint8_t len, uint8_t *data);
uint32_t i2cCom0_GetStatus(void);
i2c_status_t i2cCom0_GetSystemBootVersion(uint8_t *data);
i2c_status_t i2cCom0_GetSystemFirmwareVersion(uint8_t *data);
bool i2cCom0_SendReset(void);
bool i2cCom0_SendNotify(void);
bool i2cCom0_SendBlock(uint16_t block, uint8_t *data, uint32_t blocksize);

#endif /* SOURCES_IPC_I2C_MASTER_H_ */
