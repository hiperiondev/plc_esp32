/*
 * Copyright 2021 Emiliano Gonzalez (egonzalez . hiperion @ gmail . com))
 * * Project Site:  *
 *
 * This is based on other projects:
 *    PLsi (https://github.com/ElPercha/PLsi)
 *
 *    please contact their authors for more information.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef DISK_H
#define DISK_H

#include <esp_err.h>

#include "plc_globals.h"

//--------------------------------------------------------------------------------
// Globals variables for Disk 
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// Task functions prototypes
//--------------------------------------------------------------------------------

void mountDisk(void);
void clearEmptyNetwork(void);

//--------------------------------------------------------------------------------
// User Settings management functions
//--------------------------------------------------------------------------------

void loadSettings(void);
void loadDefaultSettings(void);
void saveSettings(void);
esp_err_t loadProgram(void);
esp_err_t writeInProgram(uint8_t* Networks);
esp_err_t listDir(const char *path);

#endif
