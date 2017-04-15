/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// ************************
// uncomment/comment by adding or removing the "//" only in front of the specific versions you want to choose for upload
// only one version may be active by adding or removing the "//"
#define BW_STOCK
//#define BW_BLT
//#define BW_PROX
// ************************

#ifdef BW_STOCK
#include "Configuration_STOCK.h"
#include "Configuration_adv_STOCK.h"
#endif

#ifdef BW_BLT
#include "Configuration_BLT.h"
#include "Configuration_adv_BLT.h"
#endif

#ifdef BW_PROX
#include "Configuration_PROX.h"
#include "Configuration_adv_PROX.h"
#endif

#ifdef BW_SERVO
#include "Configuration_SERVO.h"
#include "Configuration_adv_SERVO.h"
#endif

#endif // CONFIGURATION_H
