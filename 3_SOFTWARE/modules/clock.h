#ifndef CLOCK_H
#define CLOCK_H

/* includes */
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "time.h"
#include "esp_sntp.h" 
#include "esp_netif_sntp.h"
#include "esp_log.h"
#include "ui/ui.h"
#include "persistence.h"


/* defines */
#define CLOCK_TIME_MS 1000

void clock_task(void *pvParameter);
void clock_init_offline(void);
void clock_init_sntp(void);
static void update_ui(struct tm * timeinfo);
uint64_t get_posix_s(void);

typedef struct ui_str{
    char day_name_buf[16];
    char date_buf[32];
    char AMPM_buf[3];
    char time_buf[6];
} ui_str;

extern ui_str ui_str_data;


#endif 