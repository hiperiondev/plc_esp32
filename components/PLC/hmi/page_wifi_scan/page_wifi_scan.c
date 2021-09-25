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
#include <esp_wifi.h>
#include <esp_log.h>
#include <plc_wifi.h>

#include "plc_globals.h"
#include "page_wifi_scan.h"
#include "hmi.h"

static const char *TAG = "page_wifi_scan";
/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
lv_obj_t *parent;

lv_obj_t* button_1_ev_0;
lv_obj_t* button_2_ev_0;
lv_obj_t* roller_1_ev_0;

void createRoller(void);

enum e_pWifiScan {
    PGWIFI_SCAN_BUTTON1,
    PGWIFI_SCAN_BUTTON2,
    PGWIFI_SCAN_ROLLER1
};

uint8_t max_scan;
char *appStr;
wifi_ap_record_t *ap_info;
char tmpStr[71];
char ssidIdstr[3];
uint8_t ssidId = 0;
bool scan = false;

static void print_auth_mode(int authmode, char* strAuth) {
    switch (authmode) {
        case WIFI_AUTH_OPEN:
            sprintf(strAuth,"OPEN     ");
            break;
        case WIFI_AUTH_WEP:
            sprintf(strAuth,"WEP      ");
            break;
        case WIFI_AUTH_WPA_PSK:
            sprintf(strAuth,"WPA1PSK  ");
            break;
        case WIFI_AUTH_WPA2_PSK:
            sprintf(strAuth,"WPA2PSK  ");
            break;
        case WIFI_AUTH_WPA_WPA2_PSK:
            sprintf(strAuth,"WPA1/2PSK");
            break;
        case WIFI_AUTH_WPA2_ENTERPRISE:
            sprintf(strAuth,"WPA2ENTPR");
            break;
        case WIFI_AUTH_WPA3_PSK:
            sprintf(strAuth,"WPA3PSK  ");
            break;
        case WIFI_AUTH_WPA2_WPA3_PSK:
            sprintf(strAuth,"WPA2/3PSK");
            break;
        default:
            sprintf(strAuth,"AUTH UNKN");
            break;
    }
}

static void hmi_wifi_scan(void) {
    ESP_LOGI(TAG, "hmi_wifi_scan");
    if (ap_info != NULL)
        free(ap_info);
    if(appStr != NULL)
        free(appStr);

    max_scan = plc_wifi_scan(NULL);
    ESP_LOGI(TAG, "max_scan: %d", max_scan);
    ap_info = calloc(max_scan, sizeof(wifi_ap_record_t));
    max_scan = plc_wifi_scan(ap_info);
    appStr = malloc(71 * max_scan * sizeof(char));

    appStr[0] = '\0';
    char strAuth[10];
    for (int i = 0; (i < max_scan); i++) {
        print_auth_mode(ap_info[i].authmode, strAuth);
        sprintf(tmpStr, "%02d: (%2d) [%s] %s\n", i, (int) ap_info[i].rssi, strAuth, (char*) ap_info[i].ssid);
        tmpStr[55] = '\0';
        ESP_LOGI(TAG, "%s", tmpStr);
        strcat(appStr, tmpStr);
    }
}

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    uint8_t id = *((uint8_t*) obj->user_data);
    if (event == LV_EVENT_CLICKED) {
        switch (id) {
            case PGWIFI_SCAN_BUTTON1:
                scan = true;
                hmi_wifi_scan();
                lv_obj_del(roller_1_ev_0);
                createRoller();
                break;
            case PGWIFI_SCAN_BUTTON2:
                if (scan) {
                strcpy(settings.wifi.ssid, (const char*) ap_info[ssidId].ssid);
                } else {
                    settings.wifi.ssid[0] = '\0';
                }
                hmi_switch_page(parent, PWIFI);
                break;
            case PGWIFI_SCAN_ROLLER1:

                break;
        }
    }

    if ((event == LV_EVENT_VALUE_CHANGED) && (id == PGWIFI_SCAN_ROLLER1)) {
        lv_roller_get_selected_str(obj, ssidIdstr, 3);
        ssidIdstr[2] = '\0';
        ssidId = atoi(ssidIdstr);
    }
}

void createRoller(void) {
    static lv_style_t roller_1_s0;
    lv_style_init(&roller_1_s0);
    lv_style_set_text_font(&roller_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    static lv_style_t roller_1_s1;
    lv_style_init(&roller_1_s1);
    lv_style_set_bg_color(&roller_1_s1, LV_STATE_DEFAULT, LV_COLOR_SILVER);
    lv_style_set_text_font(&roller_1_s1, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s1, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s1, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s1, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s1, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s1, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&roller_1_s1, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *roller_1 = lv_roller_create(parent, NULL);
    lv_obj_add_style(roller_1, 0, &roller_1_s0);
    lv_obj_add_style(roller_1, 3, &roller_1_s1);
    lv_obj_set_hidden(roller_1, false);
    lv_obj_set_click(roller_1, true);
    lv_obj_set_drag(roller_1, false);
    lv_obj_set_pos(roller_1, 6, 6);
    lv_roller_set_auto_fit(roller_1, false);
    lv_obj_set_size(roller_1, 310, 150);
    lv_roller_set_options(roller_1, appStr, LV_ROLLER_MODE_NORMAL);
    lv_roller_set_align(roller_1, LV_LABEL_ALIGN_LEFT);
    lv_roller_set_visible_row_count(roller_1, 4);
    lv_roller_set_visible_row_count(roller_1, 4);
    lv_roller_set_anim_time(roller_1, 200);
    PG_EVENT(PGWIFI_SCAN_ROLLER1, roller_1);
    roller_1_ev_0 = roller_1;
}

lv_obj_t* page_wifi_scan_create(){
    appStr = malloc(2 * sizeof(char));
    sprintf(appStr, " ");

    parent = lv_obj_create(NULL, NULL);

	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	lv_style_set_radius(&button_1_s0,LV_STATE_DEFAULT,10);
	static char* str_6627109 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DEFAULT,str_6627109);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_CHECKED,10);
	static char* str_5c83fa5 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_CHECKED,str_5c83fa5);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_FOCUSED,10);
	static char* str_1ac5d93 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_FOCUSED,str_1ac5d93);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_EDITED,10);
	static char* str_fd907f8 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_EDITED,str_fd907f8);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_HOVERED,10);
	static char* str_07c9862 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_HOVERED,str_07c9862);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_PRESSED,10);
	static char* str_a5e1b27 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_PRESSED,str_a5e1b27);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_DISABLED,10);
	static char* str_e58baae = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DISABLED,str_e58baae);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_hidden(button_1, false);
	lv_obj_set_click(button_1, true);
	lv_obj_set_drag(button_1, false);
	lv_obj_set_pos(button_1, 6, 197);
	lv_obj_set_size(button_1, 100, 35);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);
	PG_EVENT(PGWIFI_SCAN_BUTTON1, button_1);
	button_1_ev_0 = button_1;


	static lv_style_t button_2_s0;
	lv_style_init(&button_2_s0);
	lv_style_set_radius(&button_2_s0,LV_STATE_DEFAULT,10);
	static char* str_86d8d96 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DEFAULT,str_86d8d96);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_CHECKED,10);
	static char* str_e82d282 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_CHECKED,str_e82d282);
	lv_style_set_value_font(&button_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_FOCUSED,10);
	static char* str_5c59882 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_FOCUSED,str_5c59882);
	lv_style_set_value_font(&button_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_EDITED,10);
	static char* str_b5d1c3b = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_EDITED,str_b5d1c3b);
	lv_style_set_value_font(&button_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_HOVERED,10);
	static char* str_db0b5e4 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_HOVERED,str_db0b5e4);
	lv_style_set_value_font(&button_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_PRESSED,10);
	static char* str_7349efa = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_PRESSED,str_7349efa);
	lv_style_set_value_font(&button_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_DISABLED,10);
	static char* str_21648ea = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DISABLED,str_21648ea);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_2 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_2, 0, &button_2_s0);
	lv_obj_set_hidden(button_2, false);
	lv_obj_set_click(button_2, true);
	lv_obj_set_drag(button_2, false);
	lv_obj_set_pos(button_2, 217, 196);
	lv_obj_set_size(button_2, 100, 35);
	lv_btn_set_checkable(button_2, false);
	lv_btn_set_fit(button_2, LV_FIT_NONE);
	PG_EVENT(PGWIFI_SCAN_BUTTON2, button_2);
	button_2_ev_0 = button_2;


	createRoller();
/*
	static lv_style_t roller_1_s0;
	lv_style_init(&roller_1_s0);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	static lv_style_t roller_1_s1;
	lv_style_init(&roller_1_s1);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *roller_1 = lv_roller_create(parent, NULL);
	lv_obj_add_style(roller_1, 0, &roller_1_s0);
	lv_obj_add_style(roller_1, 3, &roller_1_s1);
	lv_obj_set_hidden(roller_1, false);
	lv_obj_set_click(roller_1, true);
	lv_obj_set_drag(roller_1, false);
	lv_obj_set_pos(roller_1, 6, 6);
	lv_obj_set_size(roller_1, 310, 150);
	lv_roller_set_options(roller_1, appStr, LV_ROLLER_MODE_NORMAL);
	lv_roller_set_align(roller_1, LV_LABEL_ALIGN_CENTER);
	lv_roller_set_visible_row_count(roller_1, 4);
	lv_roller_set_visible_row_count(roller_1, 4);
	lv_roller_set_anim_time(roller_1,200);
	lv_roller_set_auto_fit(roller_1, true);
	PG_EVENT(PGWIFI_SCAN_ROLLER1, roller_1);
	roller_1_ev_0 = roller_1;
*/

	return parent;
}
