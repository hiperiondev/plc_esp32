#include <stdlib.h>

#include "hmi.h"

#include "page_main/page_main.h"
#include "page_configuration/page_configuration.h"
#include "page_wifi/page_wifi.h"
#include "page_wifi_scan/page_wifi_scan.h"
#include "page_io/page_io.h"
#include "page_firmware/page_firmware.h"
#include "page_ladder/page_ladder.h"
#include "page_program/page_program.h"
#include "page_yesno/page_yesno.h"
#include "page_switches/page_switches.h"

void hmi_init(){
	page_main = page_main_create();
	page_configuration = page_configuration_create();
	page_wifi = page_wifi_create();
	page_wifi_scan = page_wifi_scan_create();
	page_io = page_io_create();
	page_firmware = page_firmware_create();
	page_ladder = page_ladder_create();
	page_program = page_program_create();
	page_yesno = page_yesno_create();
	page_switches = page_switches_create();

	lv_scr_load(page_main);
}
