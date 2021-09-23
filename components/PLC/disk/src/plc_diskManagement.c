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

#include <stdbool.h>
#include <string.h>
#include <sys/unistd.h>
#include <sys/stat.h>

#include <esp_log.h>
#include <esp_err.h>
#include <esp_vfs_fat.h>
#include <sdmmc_cmd.h>

#include "plc_disk.h"
#include "plc_globals.h"
#include "plc_tskDisk.h"
#include "PLC.h"

static const char *TAG = "plc_diskManagement";
#define SPI_DMA_CHAN    1

//--------------------------------------------------------------------------------
// Mount Disk
//    If it is the first boot of PLC: Format SPIFSS memory
//    On fail: Send PLC to ERROR
//--------------------------------------------------------------------------------
void mountDisk(void) {
    esp_err_t ret;
    // Options for mounting the filesystem.
    // If format_if_mount_failed is set to true, SD card will be partitioned and
    // formatted in case when mounting fails.
    esp_vfs_fat_sdmmc_mount_config_t mount_config = {
#ifdef PLC_FORMAT_IF_MOUNT_FAILED
            .format_if_mount_failed = true,
#else
            .format_if_mount_failed = false,
#endif // EXAMPLE_FORMAT_IF_MOUNT_FAILED
            .max_files = 5,
            .allocation_unit_size = 16 * 1024
    };
    sdmmc_card_t *card;
    const char mount_point[] = PLC_SD_MOUNT_POINT;
    ESP_LOGI(TAG, "Initializing SD card");

    // Use settings defined above to initialize SD card and mount FAT filesystem.
    // Note: esp_vfs_fat_sdmmc/sdspi_mount is all-in-one convenience functions.
    // Please check its source code and implement error recovery when developing
    // production applications.

    ESP_LOGI(TAG, "Using SPI peripheral");

    sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    //spi_bus_config_t bus_cfg = {
    //        .mosi_io_num = PIN_NUM_MOSI,
    //        .miso_io_num = PIN_NUM_MISO,
    //        .sclk_io_num = PIN_NUM_CLK,
    //        .quadwp_io_num = -1,
    //        .quadhd_io_num = -1,
    //        .max_transfer_sz = 4000,
    //};
    //ret = spi_bus_initialize(host.slot, &bus_cfg, SPI_DMA_CHAN);
    //if (ret != ESP_OK) {
    //    ESP_LOGE(TAG, "Failed to initialize bus.");
    //    bootSequence = BOOT_DISK_ERROR;
    //    return;
    //}

    // This initializes the slot without card detect (CD) and write protect (WP) signals.
    // Modify slot_config.gpio_cd and slot_config.gpio_wp if your board has these signals.
    sdspi_device_config_t slot_config = SDSPI_DEVICE_CONFIG_DEFAULT();
    slot_config.gpio_cs = PIN_NUM_CS;
    slot_config.host_id = host.slot;

    ret = esp_vfs_fat_sdspi_mount(mount_point, &host, &slot_config, &mount_config, &card);

    if (ret != ESP_OK) {
        if (ret == ESP_FAIL) {
            ESP_LOGE(TAG, "Failed to mount filesystem. " "If you want the card to be formatted, set the EXAMPLE_FORMAT_IF_MOUNT_FAILED menuconfig option.");
        } else {
            ESP_LOGE(TAG, "Failed to initialize the card (%s). " "Make sure SD card lines have pull-up resistors in place.", esp_err_to_name(ret));
        }
        bootSequence = BOOT_DISK_ERROR;
        return;
    }

    // Card has been initialized, print its properties
    sdmmc_card_print_info(stdout, card);
    bootSequence = BOOT_DISK_LOADED;
    sd_available = true;
}

//--------------------------------------------------------------------------------
// Load user settings at boot
//--------------------------------------------------------------------------------

void loadSettings(void) {
    FILE *f;
    if (!sd_available) {
        ESP_LOGI(TAG, "TaskDisk - SD not available. Loading default settings...");
        loadDefaultSettings();
        bootSequence = BOOT_SETTINGS_LOADED;
        return;
    }

    if (bootSequence == BOOT_DISK_LOADED) {
        struct stat st;
        if (stat(PLC_SD_MOUNT_POINT FILENAME_SETTINGS, &st) == 0) {
            ESP_LOGI(TAG, "TaskDisk - File settings.bin exists.");
            f = fopen(PLC_SD_MOUNT_POINT FILENAME_SETTINGS, "r");
            if (f == NULL) {
                ESP_LOGE(TAG, "Failed to open file for reading");
                return;
            }
            if (st.st_size == sizeof(settings)) {
                ESP_LOGI(TAG, "TaskDisk - File settings.bin exists with same size. Settings to be loaded from Disk...");

                while (fread((uint8_t*) &settings, sizeof(settings), 1, f))
                    ;
                fclose(f);

                bootSequence = BOOT_SETTINGS_LOADED;
            } else {
                ESP_LOGI(TAG, "TaskDisk - File settings.bin exists but has different size. Loading default settings...");
                fclose(f);
                loadDefaultSettings();
                bootSequence = BOOT_SETTINGS_LOADED;
            }
        } else {
            ESP_LOGI(TAG, "TaskDisk - File settings.bin does not exist. Creating file and loading default settings...");
            loadDefaultSettings();
            bootSequence = BOOT_SETTINGS_LOADED;
        }
    }
}

//--------------------------------------------------------------------------------
// Load user default settings at first boot.
// Creates "Settings.PLsi" file
// Loads the default settings on his structure
//--------------------------------------------------------------------------------

void loadDefaultSettings(void) {
    settings.general.firstRun = 0;
    settings.general.verbosityLevel = 0;
    settings.general.firmware = FIRMWARE_ACCEPTED;

    settings.ladder.NetworksQuantity = TOTAL_NETWORKS;
    settings.ladder.PLCstate = STOPPED;
    settings.ladder.UserProgram = DEMO_PROGRAM_SLOT;

    settings.io.localInputs[0]  = IO_TYPE_DIGITAL;
    settings.io.localInputs[1]  = IO_TYPE_DIGITAL;
    settings.io.localInputs[2]  = IO_TYPE_DIGITAL;
    settings.io.localInputs[3]  = IO_TYPE_DIGITAL;
    settings.io.localInputs[4]  = IO_TYPE_DIGITAL;
    settings.io.localInputs[5]  = IO_TYPE_DIGITAL;
    settings.io.localInputs[6]  = IO_TYPE_DIGITAL;
    settings.io.localInputs[7]  = IO_TYPE_DIGITAL;
    settings.io.localOutputs[0] = IO_TYPE_DIGITAL;
    settings.io.localOutputs[1] = IO_TYPE_DIGITAL;
    settings.io.localOutputs[2] = IO_TYPE_DIGITAL;
    settings.io.localOutputs[3] = IO_TYPE_DIGITAL;
    settings.io.localOutputs[4] = IO_TYPE_DIGITAL;
    settings.io.localOutputs[5] = IO_TYPE_DIGITAL;

    settings.wifi.enabled = 0;

    saveSettings();
}

//--------------------------------------------------------------------------------
// Save user settings to non volatile memory FFAT Disk 
//--------------------------------------------------------------------------------

void saveSettings(void) {
    if (bootSequence == BOOT_DISK_LOADED) {
        FILE *f;

        f = fopen(PLC_SD_MOUNT_POINT FILENAME_SETTINGS, "w");
        if (f == NULL) {
            ESP_LOGE(TAG, "Failed to open file for writing");
            return;
        }
        fwrite((uint8_t*) &settings, sizeof(settings), 1, f);
        fclose(f);
    } else {
        ESP_LOGI(TAG, "Disk not mounted");
    }
}
