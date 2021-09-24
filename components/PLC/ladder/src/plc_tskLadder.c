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
#include <sys/stat.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_log.h>
#include <esp_task_wdt.h>

#include "plc_globals.h"
#include "plc_disk.h"
#include "plc_ladder.h"
#include "plc_tskLadder.h"

//static const char *TAG = "plc_tskLadder";

//--------------------------------------------------------------------------------
// Ladder logic execution Task 
// Running on Core 1 
//--------------------------------------------------------------------------------

void TaskLadder(void *pvParameters) {
    //FILE *f;
    (void) pvParameters;

    //----------------------------------------------------
    // Task lock / unlock
    //----------------------------------------------------

    ladderWaitSettings();

    //----------------------------------------------------
    // Ladder Logic initializations
    //----------------------------------------------------

    //Network Networks[TOTAL_NETWORKS];
    //clearProgram(Networks);

    configureLocal_IO();

    //--------------------------------------------------
    // Task Main Loop
    //--------------------------------------------------

    while (1) {

        //----------------------------------------------------------------
        // Load saved program indicated in settings.ladder.UserProgram
        //    If file doesn't exist creates the empty file
        //    If User Program number is 0, load Demo to this slot
        //    assuming that it is the first boot or FFat was formatted
        //
        //    Issue #19 : to validate the size of program file before to load it to RAM
        //                if size is invalid, re-generate file and send PLC to error
        //----------------------------------------------------------------

        loadProgram();

        //----------------------------------------------------------------
        // Update RAM Networks image with DiskLoad saved program indicated in settings.ladder.UserProgram
        //    If file doesn't exist creates the empty file
        //    If User Program number is 0, load Demo to this slot
        //    this assumes that is the first boot
        //----------------------------------------------------------------

        if (updateSelectedProgramRAM) {
            Networks[showingNetwork] = onlineNetwork;
            updateSelectedProgramRAM = 0;
        }

        //----------------------------------------------------------------
        // Shift All networks down on RAM and SPIFSS
        // Creates an empty Network in the selected Network by shifting the rest up (number)
        // The last network has to be checked empty before enable this code
        // 1 - Performs the RAM shift in one scan (all required networks)
        // 2 - Delete showingNetwork Network because it gets duplicated
        // 3 - Save the complete program to SPIFSS
        //----------------------------------------------------------------

        if (moveNetworksInsert > 0) {
            uint16_t startNetwork = moveNetworksInsert - 1;

            for (uint16_t net = settings.ladder.NetworksQuantity - 1; net > startNetwork; net--) {
                Networks[net] = Networks[net - 1];
            }
            Networks[startNetwork] = emptyNetwork;

            writeInProgram((uint8_t*) &Networks);
            moveNetworksInsert = 0;
        }

        //----------------------------------------------------------------
        // Shift All networks up on RAM and SPIFSS
        // Delete the current selected Network and shift the rest down (number)
        // 1 - Performs the RAM shift in one scan (all required networks)
        // 2 - Delete last Network because it gets duplicated
        // 3 - Save the complete program to SPIFSS
        //----------------------------------------------------------------

        if (moveNetworksDelete > 0) {
            uint16_t startNetwork = moveNetworksDelete - 1;

            for (uint16_t net = startNetwork; net < settings.ladder.NetworksQuantity - 1; net++) {
                Networks[net] = Networks[net + 1];
            }
            Networks[settings.ladder.NetworksQuantity - 1] = emptyNetwork;
            editingNetwork = Networks[startNetwork]; // It is already shifted

            writeInProgram((uint8_t*) &Networks);
            moveNetworksDelete = 0;
        }

        //------------------------------------------------------
        // PLC ladder Program SCAN
        //     Read Inputs
        //     Evaluate Logic
        //     Write Outputs
        //------------------------------------------------------

        scanTime();

        readInputsLocal();
        readInputsRemote();

        execScanPLC(Networks);
        savePreviousValues();

        writeOutputsLocal();
        writeOutputsRemote();

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
