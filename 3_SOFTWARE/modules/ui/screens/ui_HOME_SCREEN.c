// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: embd-watch

#include "../ui.h"

void ui_HOME_SCREEN_screen_init(void)
{
ui_HOME_SCREEN = lv_obj_create(NULL);
lv_obj_clear_flag( ui_HOME_SCREEN, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_BACKGROUND = lv_img_create(ui_HOME_SCREEN);
lv_img_set_src(ui_BACKGROUND, &ui_img_background_png);
lv_obj_set_width( ui_BACKGROUND, 240);
lv_obj_set_height( ui_BACKGROUND, 240);
lv_obj_set_align( ui_BACKGROUND, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_BACKGROUND, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_BACKGROUND, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_POWER_BAR = lv_bar_create(ui_HOME_SCREEN);
lv_bar_set_value(ui_POWER_BAR,50,LV_ANIM_OFF);
lv_obj_set_width( ui_POWER_BAR, 100);
lv_obj_set_height( ui_POWER_BAR, 10);
lv_obj_set_x( ui_POWER_BAR, 5 );
lv_obj_set_y( ui_POWER_BAR, -99 );
lv_obj_set_align( ui_POWER_BAR, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_POWER_BAR, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_POWER_BAR, 50, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_POWER_BAR, lv_color_hex(0x399F4E), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_POWER_BAR, 200, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_POWER_INDICATOR = lv_img_create(ui_HOME_SCREEN);
lv_img_set_src(ui_POWER_INDICATOR, &ui_img_flash_g_png);
lv_obj_set_width( ui_POWER_INDICATOR, LV_SIZE_CONTENT);  /// 13
lv_obj_set_height( ui_POWER_INDICATOR, LV_SIZE_CONTENT);   /// 18
lv_obj_set_x( ui_POWER_INDICATOR, -52 );
lv_obj_set_y( ui_POWER_INDICATOR, -99 );
lv_obj_set_align( ui_POWER_INDICATOR, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_POWER_INDICATOR, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_POWER_INDICATOR, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_POWER_INDICATOR,128);

ui_TIMETXT = lv_label_create(ui_HOME_SCREEN);
lv_obj_set_width( ui_TIMETXT, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_TIMETXT, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_TIMETXT, -38 );
lv_obj_set_y( ui_TIMETXT, -4 );
lv_obj_set_align( ui_TIMETXT, LV_ALIGN_CENTER );
lv_label_set_text(ui_TIMETXT,"10:32");
lv_obj_set_style_text_color(ui_TIMETXT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_TIMETXT, 245, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_TIMETXT, &lv_font_montserrat_48, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_DAYTXT = lv_label_create(ui_HOME_SCREEN);
lv_obj_set_width( ui_DAYTXT, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_DAYTXT, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_DAYTXT, -42 );
lv_obj_set_y( ui_DAYTXT, -70 );
lv_obj_set_align( ui_DAYTXT, LV_ALIGN_CENTER );
lv_label_set_text(ui_DAYTXT,"Sunday");
lv_obj_set_style_text_color(ui_DAYTXT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_DAYTXT, 245, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_DAYTXT, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_DATETXT = lv_label_create(ui_HOME_SCREEN);
lv_obj_set_width( ui_DATETXT, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_DATETXT, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_DATETXT, 0 );
lv_obj_set_y( ui_DATETXT, -50 );
lv_obj_set_align( ui_DATETXT, LV_ALIGN_CENTER );
lv_label_set_text(ui_DATETXT,"September 10, 2023");
lv_obj_set_style_text_color(ui_DATETXT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_DATETXT, 245, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_DATETXT, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_AMPMTXT = lv_label_create(ui_HOME_SCREEN);
lv_obj_set_width( ui_AMPMTXT, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_AMPMTXT, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_AMPMTXT, 40 );
lv_obj_set_y( ui_AMPMTXT, -15 );
lv_obj_set_align( ui_AMPMTXT, LV_ALIGN_CENTER );
lv_label_set_text(ui_AMPMTXT,"AM");
lv_obj_set_style_text_color(ui_AMPMTXT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_AMPMTXT, 245, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_AMPMTXT, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SETTINGS = lv_img_create(ui_HOME_SCREEN);
lv_img_set_src(ui_SETTINGS, &ui_img_1899584359);
lv_obj_set_width( ui_SETTINGS, LV_SIZE_CONTENT);  /// 16
lv_obj_set_height( ui_SETTINGS, LV_SIZE_CONTENT);   /// 16
lv_obj_set_x( ui_SETTINGS, -75 );
lv_obj_set_y( ui_SETTINGS, 75 );
lv_obj_set_align( ui_SETTINGS, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SETTINGS, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_SETTINGS, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_ARROWUP = lv_img_create(ui_HOME_SCREEN);
lv_img_set_src(ui_ARROWUP, &ui_img_arrow_png);
lv_obj_set_width( ui_ARROWUP, LV_SIZE_CONTENT);  /// 18
lv_obj_set_height( ui_ARROWUP, LV_SIZE_CONTENT);   /// 12
lv_obj_set_x( ui_ARROWUP, 0 );
lv_obj_set_y( ui_ARROWUP, 110 );
lv_obj_set_align( ui_ARROWUP, LV_ALIGN_CENTER );
lv_obj_add_state( ui_ARROWUP, LV_STATE_PRESSED );     /// States
lv_obj_add_flag( ui_ARROWUP, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ARROWUP, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_ARROWUP, 245, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_SETTINGS, ui_event_SETTINGS, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_ARROWUP, ui_event_ARROWUP, LV_EVENT_ALL, NULL);

}
