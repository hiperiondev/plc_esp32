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

#ifndef PLC_H
#define PLC_H

#include <stdint.h>

//--------------------------------------------------------------------------------
// Main configurations for PLC CPU
//--------------------------------------------------------------------------------

#define PLC_FORMAT_IF_MOUNT_FAILED
#define PLC_SD_MOUNT_POINT "/sdcard"

//--------------------------------------------------------------------------------
// Firmware version
// History:
//  - Version 0.00.01 - First stable version
//  - Version 0.00.02 - Comparison instructions added (16bit)
//  - Version 0.00.03 - Analog I/O support
//--------------------------------------------------------------------------------

#define FIRMWARE  "Version 0.01.00"

//--------------------------------------------------------------------------------
// Total Networks. 
//     Max quantity tested = 500 (for 6 x 5 matrix)
//     Max stable quantity = 400 (for 6 x 5 matrix)
//--------------------------------------------------------------------------------

#define TOTAL_NETWORKS           400

//--------------------------------------------------------------------------------
// Slot where the Demo Program will be loaded after first boot
//--------------------------------------------------------------------------------

#define DEMO_PROGRAM_SLOT        0

//--------------------------------------------------------------------------------
// PLC Memory Areas quantities (amount)
//--------------------------------------------------------------------------------

#define QTY_M                    2000   // Marks. Regular flags
#define QTY_I                    200    // Digital Inputs
#define QTY_Q                    200    // Digital Outputs
#define QTY_IW                   50     // Analog Inputs
#define QTY_QW                   50     // Analog Outputs
#define QTY_C                    200    // Counter registers (16 bits)
#define QTY_T                    300    // Timers
#define QTY_D                    10000  // Regular registers (16 bit signed)
#define QTY_R                    2000   // Float or Real registers

//--------------------------------------------------------------------------------
// PLC IO Quantities and configurations
//    PLC v0 has
//         8 inputs
//         6 outputs
//--------------------------------------------------------------------------------

#define IO_LOCAL_IN_QTY          8
#define IO_LOCAL_OUT_QTY         6
#define IO_LOCAL_IN_ANALOG_QTY   2
#define IO_LOCAL_OUT_ANALOG_QTY  2

#define ANALOG_RESOLUTION        1024
#define ANALOG_OUT_RESOLUTION    256
#define ANALOG_IN_BITS           10
#define ANALOG_CLOCK_DIVIDER     1
#define ANALOG_IN_ZERO_OFFSET    35    // Offset near 0 volts in ESP32
#define ANALOG_IN_CALIBRATION    850   // Raw value + ZERO_OFFSET when reading 5V/3 = 1.66V on ESP32 pin
#define ANALOG_FILTER_SAMPLES    20    // Samples number for moving average Analog inputs filter
#define ANALOG_OUT_CALIBRATION   970   // It should be: 1024 * ((5v / (1 + R1=3300/R2=5100)) / 3v3) plus DAC deviations

extern const uint8_t configInputCanBeAnalog[IO_LOCAL_IN_QTY];
extern const uint8_t configOutputCanBeAnalog[IO_LOCAL_OUT_QTY];

//--------------------------------------------------------------------------------
// PLC Physical I/O assignment. GPIO number on ESP 32 datasheet
//--------------------------------------------------------------------------------

#define INPUT_00                 34
#define INPUT_01                 35
#define INPUT_02                 32
#define INPUT_03                 13
#define INPUT_04                 04
#define INPUT_05                 00
#define INPUT_06                 39
#define INPUT_07                 36
#define AN_INPUT_00              39
#define AN_INPUT_01              36

#define OUTPUT_00                17
#define OUTPUT_01                16
#define OUTPUT_02                02
#define OUTPUT_03                15
#define OUTPUT_04                26
#define OUTPUT_05                25
#define AN_OUTPUT_00             26
#define AN_OUTPUT_01             25

//--------------------------------------------------------------------------------
// SD Card ChipSelect PIN 
//--------------------------------------------------------------------------------

#define SD_CS                    5

//--------------------------------------------------------------------------------
// Default file names and paths
//--------------------------------------------------------------------------------

#define FILENAME_SETTINGS        "/settings.bin"
#define MAX_PROGRAMS             4

extern const char *FILENAME_USER_PROGRAMS[];

//--------------------------------------------------------------------------------
// SD SPI pins
//--------------------------------------------------------------------------------
#define PIN_NUM_MISO 19
#define PIN_NUM_MOSI 23
#define PIN_NUM_CLK  18
#define PIN_NUM_CS   5
#endif
