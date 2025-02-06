#ifndef PERSISTENCE_H
#define PERSISTENCE_H

// includes 
#include <inttypes.h> //DEVC: Remove?
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h" //DEVC: Needed?
#include "esp_log.h"
#include "nvs_flash.h"
#include "nvs.h"

#include "clock.h"
// defines
#define SET_FLASH_TIME_MS 60000

// functions
void update_flash_task(void *pvParameter);
uint64_t get_timestamp(void);
void set_timestamp(uint64_t);
void init_nvs_flash(esp_err_t * errptr);


#endif