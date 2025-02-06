#include "persistence.h"

static const char* TAG = "PERSISTENCE";

// Update Timestamp in NVS Flash every minute.
void update_flash_task(void *pvParameter){
    while(1){
        ESP_LOGI(TAG, "Updating Timestamp in Flash");
        set_timestamp(get_posix_s());
        vTaskDelay(SET_FLASH_TIME_MS / portTICK_PERIOD_MS);
    }

}

uint64_t get_timestamp(void){
    esp_err_t err = ESP_ERR_NVS_NOT_INITIALIZED;
    init_nvs_flash(&err);

    nvs_handle_t my_handle;
    err = nvs_open("timestamp", NVS_READWRITE, &my_handle);
        if (err != ESP_OK) {
        ESP_LOGI(TAG, "Error %s opening NVS Handle.", esp_err_to_name(err));
    }
    else {
        uint64_t timestamp = 0; 
        err = nvs_get_u64(my_handle, "timestamp", &timestamp);
        switch (err) {
            case ESP_OK: 
                return timestamp;

            case ESP_ERR_NVS_NOT_FOUND:
                ESP_LOGI(TAG, "Timestamp not found in Flash, writing to NVS Flash.");
                set_timestamp(get_posix_s());
                timestamp = get_timestamp();
                return timestamp;

            default:
                ESP_LOGI(TAG, "Error %s reading NVS Flash.", esp_err_to_name(err));
                return 0;
        }
    
    }
    return 0;
}

void set_timestamp(uint64_t timestamp){
    // Initialize NVS

    esp_err_t err = ESP_ERR_NVS_NOT_INITIALIZED;
    init_nvs_flash(&err);

    nvs_handle_t my_handle;
    err = nvs_open("timestamp", NVS_READWRITE, &my_handle);
    if (err != ESP_OK) {
        ESP_LOGI(TAG, "Error %s opening NVS Handle.", esp_err_to_name(err));
    }
    else {
        err = nvs_set_u64(my_handle, "timestamp", timestamp);
        if (err != ESP_OK) {
            ESP_LOGI(TAG, "Error %s writing to Flash.", esp_err_to_name(err));
        }
        err = nvs_commit(my_handle);
        if (err != ESP_OK) {
            ESP_LOGI(TAG, "Error %s commiting to Flash.", esp_err_to_name(err));
        }
        nvs_close(my_handle);
        ESP_LOGI(TAG, "FLASH UPDATE DONE");
    }
}

void init_nvs_flash(esp_err_t * errptr){
    esp_err_t err = *errptr;
    err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
      ESP_ERROR_CHECK(nvs_flash_erase());
      err = nvs_flash_init();
    }
    ESP_ERROR_CHECK(err);
}