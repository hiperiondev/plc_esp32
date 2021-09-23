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

#include <esp_log.h>

#include "plc_globals.h"

//static const char *TAG = "plc_globals";

//--------------------------------------------------------------------------------
// Type definition for Networks and global declarations
//--------------------------------------------------------------------------------

     Network execNetwork;        // Network in execution
     Network onlineNetwork;      // Network for Online animation and program visualization
     Network editingNetwork;     // Intermediate Network for editing
     Network copyMemoryNetwork;  // Used To Copy and Paste Networks
     Network emptyNetwork;       // Empty Network
memoryColumn copyMemoryColumn;   // Struct to copy and paste columns
   memoryRow copyMemoryRow;      // Struct to copy and paste rows

//--------------------------------------------------------------------------------
// PLC Memory types definitions 
// uint8_t is used for Bits for increased performance of Scan time
//--------------------------------------------------------------------------------

// Bits declarations
uint8_t M[QTY_M];   // Regular flags
uint8_t I[QTY_I];   // Digital Inputs
uint8_t Q[QTY_Q];   // Digital Outputs
uint8_t Cr[QTY_C];  // Counter running
uint8_t Cd[QTY_C];  // Counter done
uint8_t Tr[QTY_T];  // Timer running
uint8_t Td[QTY_T];  // Timer done

// Bits Previous Scan Values (history) for FE and RE instructions
uint8_t Mh[QTY_M];
uint8_t Ih[QTY_I];
uint8_t Qh[QTY_Q];
uint8_t Crh[QTY_C];
uint8_t Cdh[QTY_C];
uint8_t Trh[QTY_T];
uint8_t Tdh[QTY_T];

// Registers declaration
uint16_t IW[QTY_IW];     // Analog Inputs  (word)
uint16_t QW[QTY_QW];     // Analog Outputs (word)
uint16_t C[QTY_C];       // Counter registers (16 bits)
 int16_t D[QTY_D];       // Regular registers (signed 16 bits)
   float R[QTY_R];       // Floating point registers
   Timer Timers[QTY_T];  // Timers

//--------------------------------------------------------------------------------
// User settings structure global declaration
//--------------------------------------------------------------------------------

userSettings settings;

//--------------------------------------------------------------------------------
// Manage the boot sequence between tasks.
// Booting state = 0
// User config loaded = 1
//--------------------------------------------------------------------------------

uint16_t bootSequence = BOOT_INIT;

//--------------------------------------------------------------------------------
// Sync between taskLadder and others
//--------------------------------------------------------------------------------

uint16_t loadSelectedProgram = 1; // Force to load user program on boot
uint16_t updateSelectedProgramRAM = 0;
uint16_t updateSelectedProgramDisk = 0;
uint16_t moveNetworksInsert = 0;
uint16_t moveNetworksDelete = 0;

uint16_t showingNetwork = 0;      // Network to show under Online animation

Network Networks[TOTAL_NETWORKS];
bool sd_available = false;
bool programLoaded = false;
//--------------------------------------------------------------------------------
// Mask for "Bars vs Flags" analysis
//--------------------------------------------------------------------------------

const uint16_t FlagsMask[NET_ROWS]    = { 0x0001, 0x0002, 0x0004, 0x0008, 0x0010 };
const uint16_t FlagsMaskAnd[NET_ROWS] = { 0xFFFE, 0xFFFD, 0xFFFB, 0x0007, 0xFFEF };

//--------------------------------------------------------------------------------
// Firmware Update status
//--------------------------------------------------------------------------------

size_t firmwareUpdateSize = 0;
size_t firmwareUpdateProgress = 0;
  char firmwareUpdateFilename[] = "No file selected";
  char firmwareUpdateStatus[] = "Update not started";

