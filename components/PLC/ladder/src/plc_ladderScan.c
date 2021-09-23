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

#include <stdio.h>

#include <esp_log.h>
#include <esp_task_wdt.h>

#include "plc_disk.h"
#include "plc_globals.h"
#include "plc_ladder.h"

static const char *TAG = "plc_ladderScan";

//--------------------------------------------------------------------------------
// Ladder Logic execution (PLC SCAN)
//--------------------------------------------------------------------------------

void execScanPLC(Network Networks[]) {
    typedef void (*LadderLogic)(int c, int r, int f); //c:code r:? f:flags
    LadderLogic execLadder[] = {
            execNop,    //
            execConn,   //
            execNeg,    //
            execNO,     //
            execNC,     //
            execRE,     //
            execFE,     //
            execCoil,   //
            execCoilL,  //
            execCoilU,  //
            execTON,    //
            execTOFF,   //
            execTP,     //
            execCTU,    //
            execCTD,    //
            execMOVE,   //
            execSUB,    //
            execADD,    //
            execMUL,    //
            execDIV,    //
            execMOD,    //
            execSHL,    //
            execSHR,    //
            execROL,    //
            execROR,    //
            execAND,    //
            execOR,     //
            execXOR,    //
            execNOT,    //
            execEQ,     //
            execGT,     //
            execGE,     //
            execLT,     //
            execLE,     //
            execNE      //
    };

    //ESP_LOGI(TAG, "NetworksQuantity: %d", settings.ladder.NetworksQuantity);
    for (int n = 0; n < settings.ladder.NetworksQuantity; n++) {
        execNetwork = Networks[n];

        //----------------------------------------------------
        // Resets Dynamic Flags before to start each Network
        //----------------------------------------------------

        for (int f = 0; f < NET_COLUMNS - 1; f++) {
            NetworkFlags[f] = 0;
        }

        //----------------------------------------------------
        // Call Ladder Instructions
        //----------------------------------------------------

        for (int c = 0; c < NET_COLUMNS; c++) {
            for (int r = 0; r < NET_ROWS; r++) {

                //----------------------------------------------------
                // Evaluation for an invalid code
                // If the cell is not part of an instruction
                // that uses more than one cell
                // PLC to ERROR state and serial log
                // else, do not process, it was processed before
                //----------------------------------------------------

                if (execNetwork.Cells[r][c].Code >= FIRST_INVALID_CODE) {
                    if ((execNetwork.Cells[r][c].Code & CELL_CODE_MASK) >= FIRST_INVALID_CODE) {
                        ESP_LOGI(TAG, "TASK LADDER - CORE 1 - INSTRUCTION CODE INVALID: \n");
                        ESP_LOGI(TAG, "   - Network: ");
                        ESP_LOGI(TAG, "%d\n", n);
                        ESP_LOGI(TAG, "   - Code: ");
                        ESP_LOGI(TAG, "%d\n", execNetwork.Cells[r][c].Code);
                        ESP_LOGI(TAG, "   - Data: ");
                        ESP_LOGI(TAG, "%d\n", execNetwork.Cells[r][c].Data);
                        ESP_LOGI(TAG, "   - Type: ");
                        ESP_LOGI(TAG, "%d\n", execNetwork.Cells[r][c].Type);
                        settings.ladder.PLCstate = PLCERROR_INVALID_INSTRUCTION;
                        saveSettings();
                    }
                    execNetwork.Cells[r][c].Code = 0;
                }

                //----------------------------------------------------
                // Execute instruction
                //----------------------------------------------------
                //ESP_LOGI(TAG,"instruction: %d", execNetwork.Cells[r][c].Code);
                if (execNetwork.Cells[r][c].Code != 0) {
                    if (c == 0) {
                        if (settings.ladder.PLCstate == RUNNING) {
                            execLadder[execNetwork.Cells[r][c].Code](c, r, 1);
                            //ESP_LOGI(TAG, "exec: %s (%d,%d,1)", nameFnLadder[execNetwork.Cells[r][c].Code], c, r);
                        } else {
                            execLadder[execNetwork.Cells[r][c].Code](c, r, 0);
                            //ESP_LOGI(TAG, "exec: %s (%d,%d,0)", nameFnLadder[execNetwork.Cells[r][c].Code], c, r);
                        }
                    } else {
                        execLadder[execNetwork.Cells[r][c].Code](c, r, (NetworkFlags[c - 1] & FlagsMask[r]));
                        //ESP_LOGI(TAG, "exec: %s (%d,%d,1)", nameFnLadder[execNetwork.Cells[r][c].Code], c, (NetworkFlags[c - 1] & FlagsMask[r]));
                    }
                }
            }

            //----------------------------------------------------
            // Update dynamic Flags vs Bars (not for last column)
            //----------------------------------------------------

            if ((c < NET_COLUMNS - 1) && (NetworkFlags[c] != 0)) {
                for (int i = 0; i < NET_ROWS - 1; i++) {
                    NetworkFlags[c] = NetworkFlags[c] | ((NetworkFlags[c] & execNetwork.Bars[c]) << 1);
                    NetworkFlags[c] = NetworkFlags[c] | ((NetworkFlags[c] & (execNetwork.Bars[c] << 1)) >> 1);
                }
            }
        }

        //----------------------------------------------------
        // Save current processing Network to Online Network
        //----------------------------------------------------

        if (!editionMode) {
            if (n == showingNetwork) {
                onlineNetwork = Networks[n];
                for (int ff = 0; ff < NET_COLUMNS - 1; ff++) {
                    NetworkFlagsOnline[ff] = NetworkFlags[ff];
                }
            }
        } else {
            for (int ff = 0; ff < NET_COLUMNS - 1; ff++) {
                NetworkFlagsOnline[ff] = 0;
            }
        }
    }
    esp_task_wdt_reset();
}
