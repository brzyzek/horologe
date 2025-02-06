idf_component_register(SRCS "wifi.c" "persistence.c" "clock.c" "task.c" "gui.c"
                    INCLUDE_DIRS "."
                    REQUIRES driver lvgl lvgl_esp32_drivers nvs_flash esp_wifi)
