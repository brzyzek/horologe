#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_freertos_hooks.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "esp_timer.h"

#include "lvgl/lvgl.h"
#include "lvgl_helpers.h"

#include "ui/ui.h"
#include "clock.h"

// DEFINES
#define LV_TICK_PERIOD_MS 1

// STATIC PROTOTYPES
void lv_tick_task(void *arg);
void guiTask(void *pvParameter);

