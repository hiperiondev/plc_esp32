#ifndef HMI_H
#define HMI_H

#include "lvgl.h"


#define PG_EVENT(id, name)  static uint8_t ud_##name = id; \
                            name->user_data = &ud_##name; \
                            lv_obj_set_event_cb(name, event_cb);

lv_obj_t *page_main;
lv_obj_t *page_configuration;
lv_obj_t *page_wifi;
lv_obj_t *page_wifi_scan;
lv_obj_t *page_io;
lv_obj_t *page_firmware;
lv_obj_t *page_ladder;
lv_obj_t *page_program;
lv_obj_t *page_yesno;
lv_obj_t *page_switches;

char filename[254];

extern lv_font_t lv_font_123abc_16;

void hmi_init();

#endif
