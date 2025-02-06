#ifndef WIFI_H
#define WIFI_H

/* includes */
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"          // DEV: Needed?
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"                     // DEV: Needed?

#include "lwip/err.h"
#include "lwip/sys.h"
#include "clock.h"
#include "persistence.h"

/* defines */
#define WIFI_SUCCESS 1 << 0
#define WIFI_FAILURE 1 << 1
//DEVC: Remove hard-coded values for the ability to enter them at some point.
#define ESP_WIFI_SSID      "Fios-5mtYZ_EXT"
#define ESP_WIFI_PASS      "REDACTED"          // REDACT FOR COMMITS.
#define ESP_MAXIMUM_RETRY  5

/* functions */
void wifi_init_task(void *pvParameter);
static void wifi_event_handler(void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data);
static void ip_event_handler(void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data);
esp_err_t connect_wifi(void);


#endif