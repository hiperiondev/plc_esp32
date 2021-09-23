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

#ifndef LADDER_H
#define LADDER_H

#include <stdint.h>

//--------------------------------------------------------------------------------
// Globals variables for Ladder 
//--------------------------------------------------------------------------------

extern      uint16_t NetworkFlags[NET_COLUMNS - 1];
extern unsigned long actualScanTime;
extern unsigned long startTime;
extern      uint16_t analogInFilter[IO_LOCAL_IN_ANALOG_QTY][ANALOG_FILTER_SAMPLES];
extern      uint16_t analogInFilterPointer[IO_LOCAL_IN_ANALOG_QTY];

//--------------------------------------------------------------------------------
// Globals variables from other tasks
//--------------------------------------------------------------------------------

extern uint16_t NetworkFlagsOnline[NET_COLUMNS - 1];
extern uint16_t editionMode;

//--------------------------------------------------------------------------------
// PLC Scan main functions
//--------------------------------------------------------------------------------

    void ladderWaitSettings(void);

    void configureLocal_IO(void);
uint16_t analogInfilter(uint16_t index, uint16_t value);
    void clearMemory(void);

    void readInputsLocal(void);
    void readInputsRemote(void);

    void scanTime(void);
    void execScanPLC(Network Networks[]);
    void savePreviousValues(void);

    void writeOutputsLocal(void);
    void writeOutputsRemote(void);

//--------------------------------------------------------------------------------
// Ladder logic instructions prototypes
// Parameters must match because they are used as array of functions
//--------------------------------------------------------------------------------

void execNop  (int c, int r, int f);
void execConn (int c, int r, int f);
void execNeg  (int c, int r, int f);
void execNO   (int c, int r, int f);
void execNC   (int c, int r, int f);
void execRE   (int c, int r, int f);
void execFE   (int c, int r, int f);
void execCoil (int c, int r, int f);
void execCoilL(int c, int r, int f);
void execCoilU(int c, int r, int f);
void execTON  (int c, int r, int f);
void execTOFF (int c, int r, int f);
void execTP   (int c, int r, int f);
void execCTU  (int c, int r, int f);
void execCTD  (int c, int r, int f);
void execMOVE (int c, int r, int f);
void execSUB  (int c, int r, int f);
void execADD  (int c, int r, int f);
void execMUL  (int c, int r, int f);
void execDIV  (int c, int r, int f);
void execMOD  (int c, int r, int f);
void execSHL  (int c, int r, int f);
void execSHR  (int c, int r, int f);
void execROL  (int c, int r, int f);
void execROR  (int c, int r, int f);
void execAND  (int c, int r, int f);
void execOR   (int c, int r, int f);
void execXOR  (int c, int r, int f);
void execNOT  (int c, int r, int f);
void execEQ   (int c, int r, int f);
void execGT   (int c, int r, int f);
void execGE   (int c, int r, int f);
void execLT   (int c, int r, int f);
void execLE   (int c, int r, int f);
void execNE   (int c, int r, int f);

//--------------------------------------------------------------------------------
// Aux functions for ladder logic instructions data management
//--------------------------------------------------------------------------------

 int GetDataValue    (int r, int c);
 int GetPreviousValue(int r, int c);
void SetDataValue    (int r, int c, int Value);

//--------------------------------------------------------------------------------
// PLC program management functions
//--------------------------------------------------------------------------------

void clearProgram      (Network Networks[]);
void loadDemoUserProgram(Network Networks[]);

//--------------------------------------------------------------------------------
// PLC reverse function names
//--------------------------------------------------------------------------------

extern char *nameFnLadder[];

#endif
