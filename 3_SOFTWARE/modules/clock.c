#include "clock.h"

static const char* TAG = "CLOCK";

void clock_task(void *pvParameter){
    time_t now;
    struct tm timeinfo;

    setenv("TZ", "EST+5", 1); // DEV: Needs to be adjusted for daylight savings time, EST-5 for Winter, EST-4 for Summer. Recode this.
    tzset();

	while(1)
	{   
        time(&now);
        localtime_r(&now, &timeinfo);

        update_ui(&timeinfo);
	    vTaskDelay(1000 / portTICK_PERIOD_MS);
	}
    
}


void clock_init_offline(void){
    struct timeval tv_now;
    tv_now.tv_sec = get_timestamp();
    tv_now.tv_usec = 0;
    settimeofday(&tv_now, NULL);
}

void clock_init_sntp(void){
    esp_sntp_config_t config = ESP_NETIF_SNTP_DEFAULT_CONFIG("pool.ntp.org");
    esp_netif_sntp_init(&config);

    int retry = 0;
    const int retry_count = 15;
    while (esp_netif_sntp_sync_wait(2000 / portTICK_PERIOD_MS) == ESP_ERR_TIMEOUT && ++retry < retry_count) {
        ESP_LOGI(TAG, "Waiting for system time to be set... (%d/%d)", retry, retry_count);
    }
}

// DEV: Can update this so that we only perform an operation when a value changes, versus always.
static void update_ui(struct tm * timeinfo_ptr){
    ui_str* ui_str_data_ptr = &ui_str_data;


    strftime(ui_str_data_ptr->date_buf, sizeof(ui_str_data_ptr->date_buf), "%B %d %Y", timeinfo_ptr);
    strftime(ui_str_data_ptr->day_name_buf, sizeof(ui_str_data_ptr->day_name_buf), "%A", timeinfo_ptr);
    strftime(ui_str_data_ptr->AMPM_buf, sizeof(ui_str_data_ptr->AMPM_buf), "%p", timeinfo_ptr);
    strftime(ui_str_data_ptr->time_buf, sizeof(ui_str_data_ptr->time_buf), "%I:%M", timeinfo_ptr);

    ESP_LOGI(TAG, "%s %s %s %s", ui_str_data_ptr->day_name_buf, ui_str_data_ptr->date_buf, ui_str_data_ptr->time_buf, ui_str_data_ptr->AMPM_buf);
}

uint64_t get_posix_s(void){
    struct timeval tv_now;
    gettimeofday(&tv_now, NULL);
    return tv_now.tv_sec;
}