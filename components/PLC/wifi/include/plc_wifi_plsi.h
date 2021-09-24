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

#ifndef WIFI_PLSI_H
#define WIFI_PLSI_H

#include <esp_wifi.h>

//--------------------------------------------------------------------------------
// Globals variables for WiFi task
//--------------------------------------------------------------------------------

extern uint16_t configFirmwareEnabled;
extern uint16_t configFirmwareSequence;
extern uint16_t configFirmwareMemory;

//--------------------------------------------------------------------------------
// Wifi task main functions
//--------------------------------------------------------------------------------

void wifiWaitSettings(void);
void wifi_init_sta(uint8_t ssid[32], uint8_t password[64]);
uint8_t wifi_scan(wifi_ap_record_t *ap_info);

#endif
