#include "gui.h"
#include "clock.h"
#include "task.h"
#include "wifi.h"
#include "persistence.h"

/* Global Variables */
static const char *TAG = "MAIN";
ui_str ui_str_data;

void app_main()
{
    // Startup Routine:
    ESP_LOGI(TAG, "Startup Routine from Main");
    clock_init_offline();

    xTaskCreatePinnedToCore(&guiTask, "gui", 4096*2, NULL, 0, NULL, 1);
    xTaskCreate(&wifi_init_task, "wifi_init", 4096, NULL, 2, NULL);
    xTaskCreate(&update_flash_task, "flash_task", 2048, NULL, 3, NULL);
    xTaskCreate(&clock_task, "clock", 4096, NULL, 5, NULL);
}
