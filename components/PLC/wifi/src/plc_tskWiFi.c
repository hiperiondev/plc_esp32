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

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <esp_log.h>
#include <esp_err.h>

#include "plc_globals.h"
//#include "plc_tskWiFi.h"
#include "plc_wifi_plsi.h"
#include "plc_disk.h"

//static const char *TAG = "plc_tskWiFi";
//--------------------------------------------------------------------------------
// WiFi Task 
// Setup WiFi network service
// Running on Core 0
//--------------------------------------------------------------------------------

void TaskWiFi(void *pvParameters) {
    (void) pvParameters;

    //----------------------------------------------------
    // Task lock / unlock
    // Delay needed to Wait Program load from Ffat
    //   before to try to connect to Network (?)
    //----------------------------------------------------

    /*
    wifiWaitSettings();
    vTaskDelay(2000 / portTICK_RATE_MS);

    //----------------------------------------------------
    // Force first evaluation of WiFi Action to execute (connect or disconnect)
    //----------------------------------------------------

    uint16_t WiFiPreviousStatus = !settings.wifi.enabled;

    //--------------------------------------------------
    // Web server for OTA updates. Two pages:
    //    serverIndex - For *.bin file selection and Update
    //--------------------------------------------------

    server.on("/", HTTP_GET, []() {
                server.sendHeader("Connection", "close");
                server.send(200, "text/html", serverIndex);
            });

    //--------------------------------------------------
    // Web server for OTA updates
    // handling uploading firmware file
    //--------------------------------------------------

    server.on("/update", HTTP_POST, []() {
                server.sendHeader("Connection", "close");
                server.send(200, "text/plain", (Update.hasError()) ? "FAIL" : "OK");
            }, []() {

                HTTPUpload& upload = server.upload();

                if (!configFirmwareEnabled) {
                    Update.abort();
                }
                else {
                    firmwareUpdateSize = Update.size();
                    firmwareUpdateProgress = Update.progress();

                    if (upload.status == UPLOAD_FILE_START) {
                        if(upload.filename == "") {
                            firmwareUpdateStatus = "No File Selected";
                            firmwareUpdateFilename = "Restarting PLsi...";
                            delay(3000);
                            ESP.restart();
                        }
                        else {
                            disableCore0WDT();

                            // Start with max available size
                            if (!Update.begin(UPDATE_SIZE_UNKNOWN)) {
                                firmwareUpdateStatus = "Error: " + String(Update.errorString());
                                firmwareUpdateFilename = "Restarting PLsi...";
                                delay(3000);
                                ESP.restart();
                            }
                        }
                    }
                    else if (upload.status == UPLOAD_FILE_WRITE) {
                        // Flashing firmware to ESP
                        firmwareUpdateStatus = "Writing PLC Firmware...";
                        firmwareUpdateFilename = upload.filename;

                        if (Update.write(upload.buf, upload.currentSize) != upload.currentSize) {
                            firmwareUpdateStatus = "Error: " + String(Update.errorString());
                            firmwareUpdateFilename = "Restarting PLsi...";
                            delay(3000);
                            ESP.restart();
                        }
                    }
                    else if (upload.status == UPLOAD_FILE_END) {
                        if (Update.end(true)) { // True to set the size to the current progress
                            firmwareUpdateStatus = "Update OK - Restarting...";
                            settings.general.firmware = FIRMWARE_UPDATED;
                            saveSettings();
                            delay(3000);
                            ESP.restart();
                        }
                        else {
                            Update.printError(Serial);
                            firmwareUpdateStatus = Update.errorString();
                        }
                    }
                }
            });

    //--------------------------------------------------
    // Task Main Loop
    //--------------------------------------------------

    while (1) {

        //--------------------------------------------------
        // Connect or Disconnect to WiFi network
        //--------------------------------------------------

        if (settings.wifi.enabled != WiFiPreviousStatus) {
            if (settings.wifi.enabled) {
                WiFi.config(INADDR_NONE, INADDR_NONE, INADDR_NONE, INADDR_NONE); // required to set hostname properly
                WiFi.setHostname(WIFI_HOSTNAME);
                WiFi.begin(settings.wifi.ssid, settings.wifi.password);
                WiFi.setSleep(false);
                server.begin();

                //mb.server();                       // elpercha
                //mb.addHreg(TEST_HREG, 0, 10);      // elpercha

            } else {
                WiFi.disconnect();
            }
            WiFiPreviousStatus = settings.wifi.enabled;
        }

        //--------------------------------------------------
        // Modbus TCP comm
        // elpercha
        //--------------------------------------------------

        //mb.task();

        //if (I[4]) {
            //unsigned long StartTime = micros();
            //mb.Hreg(100, D[500]);
            // mb.Hreg(101,D[501]);
            // mb.Hreg(102,D[502]);
            // mb.Hreg(103,D[503]);
            // mb.Hreg(104,D[504]);
            // mb.Hreg(105,D[505]);
            // mb.Hreg(106,D[506]);
            // mb.Hreg(107,D[507]);
            unsigned long CurrentTime = micros();

            ESP_LOGI(TAG, "   - Time taken to Perform Local Modbus register WRITE Operation: ");
            ESP_LOGI(TAG, "       %l\n", CurrentTime - StartTime);
        }

        //--------------------------------------------------
        // Firmware update (OTA)
        //--------------------------------------------------

        // Enable Firmware Update Sequence
        if (configFirmwareSequence == 0 && configFirmwareEnabled == 1 && WiFi.isConnected() && settings.ladder.PLCstate == STOPPED) {
            configFirmwareSequence = 1;
            ESP_LOGI(TAG, "TskWiFi - Firmware Update - Server enabled\n");
        }

        // Enable Web access to user
        if (configFirmwareSequence == 1) {
            server.handleClient();
        }

        // Firmware Update Ended by User
        if (configFirmwareEnabled == 0 && configFirmwareMemory == 1) {
            configFirmwareSequence = 0;
            enableCore0WDT();             // It is disabled during OTA
            ESP_LOGI(TAG, "TskWiFi - Firmware Update Ended - Watchdog Core 0 Enabled\n");

            // Status for HMI
            firmwareUpdateStatus = "Update not started";
            firmwareUpdateFilename = "No file selected";
            firmwareUpdateSize = 0;
            firmwareUpdateProgress = 0;

            configFirmwareMemory = 0;
        }

        // Firmware Update Enabled - Reset Memory
        if (configFirmwareEnabled) {
            configFirmwareMemory = 1;
        }

        delay(1);
    }
    */
}
