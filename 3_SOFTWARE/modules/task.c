// DEV: To be deleted, for reference only.

#include "task.h"

#include <stdio.h>
#include <time.h>
#include "sys/time.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/gpio.h"


void time_task(void *pvParameter)
{
    struct timeval tv_now;
    int64_t time_us = 0;
	while(1)
	{
        gettimeofday(&tv_now, NULL);
        time_us = (int64_t)tv_now.tv_sec * 1000000L + (int64_t)tv_now.tv_usec;
	    printf("%lli\n", time_us);
	    vTaskDelay(100 / portTICK_PERIOD_MS);
	}
}
void blinky(void *pvParameter)
{
    esp_rom_gpio_pad_select_gpio(BLINK_GPIO);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
    while(1) {
        /* Blink off (output low) */
        gpio_set_level(BLINK_GPIO, 0);
        vTaskDelay(BLINK_TIME_MS / portTICK_PERIOD_MS);
        /* Blink on (output high) */
        gpio_set_level(BLINK_GPIO, 1);
        vTaskDelay(BLINK_TIME_MS / portTICK_PERIOD_MS);
    }
}