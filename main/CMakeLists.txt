set(
    COMPONENT_REQUIRES
        PLC
        lvgl_esp32_drivers
        nvs_flash
)

set(COMPONENT_SRCS "app_main.c")
set(COMPONENT_ADD_INCLUDEDIRS ".")

register_component()         