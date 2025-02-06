// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: embd-watch

#ifndef _EMBD_WATCH_UI_H
#define _EMBD_WATCH_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "../../components/lvgl/lvgl.h"

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
// SCREEN: ui_HOME_SCREEN
void ui_HOME_SCREEN_screen_init(void);
extern lv_obj_t *ui_HOME_SCREEN;
extern lv_obj_t *ui_BACKGROUND;
extern lv_obj_t *ui_POWER_BAR;
extern lv_obj_t *ui_POWER_INDICATOR;
extern lv_obj_t *ui_TIMETXT;
extern lv_obj_t *ui_DAYTXT;
extern lv_obj_t *ui_DATETXT;
extern lv_obj_t *ui_AMPMTXT;
void ui_event_SETTINGS( lv_event_t * e);
extern lv_obj_t *ui_SETTINGS;
void ui_event_ARROWUP( lv_event_t * e);
extern lv_obj_t *ui_ARROWUP;
// SCREEN: ui_SLEEP_SCREEN
void ui_SLEEP_SCREEN_screen_init(void);
void ui_event_SLEEP_SCREEN( lv_event_t * e);
extern lv_obj_t *ui_SLEEP_SCREEN;
extern lv_obj_t *ui_BACKGROUNDSLP;
extern lv_obj_t *ui_ARROWUPSLP;
extern lv_obj_t *ui_TIMESLPTXT;
extern lv_obj_t *ui_AMPMSLPTXT;
// SCREEN: ui_SETTINGS_SCREEN
void ui_SETTINGS_SCREEN_screen_init(void);
extern lv_obj_t *ui_SETTINGS_SCREEN;
extern lv_obj_t *ui_BACKGROUNDSETTING;
void ui_event_ARROWUPSET( lv_event_t * e);
extern lv_obj_t *ui_ARROWUPSET;
extern lv_obj_t *ui_BLUTOOTHTXT;
extern lv_obj_t *ui_BLUTOOTHSW;
extern lv_obj_t *ui_WIFITXT;
void ui_event_WIFISW( lv_event_t * e);
extern lv_obj_t *ui_WIFISW;
extern lv_obj_t *ui_NTPTXT;
extern lv_obj_t *ui_NTPSW;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_background_png);   // assets/background.png
LV_IMG_DECLARE( ui_img_flash_g_png);   // assets/flash_g.png
LV_IMG_DECLARE( ui_img_1899584359);   // assets/settings-glyph-white.png
LV_IMG_DECLARE( ui_img_arrow_png);   // assets/arrow.png
LV_IMG_DECLARE( ui_img_grid_png);   // assets/grid.png
LV_IMG_DECLARE( ui_img_bg1_png);   // assets/bg1.png
LV_IMG_DECLARE( ui_img_bg2_png);   // assets/bg2.png
LV_IMG_DECLARE( ui_img_bg3_png);   // assets/bg3.png
LV_IMG_DECLARE( ui_img_btn_bg_1_png);   // assets/btn_bg_1.png
LV_IMG_DECLARE( ui_img_btn_bg_2_png);   // assets/btn_bg_2.png
LV_IMG_DECLARE( ui_img_btn_bg_3_png);   // assets/btn_bg_3.png
LV_IMG_DECLARE( ui_img_call1_png);   // assets/call1.png
LV_IMG_DECLARE( ui_img_call2_png);   // assets/call2.png
LV_IMG_DECLARE( ui_img_heart2_png);   // assets/heart2.png
LV_IMG_DECLARE( ui_img_s1_png);   // assets/s1.png
LV_IMG_DECLARE( ui_img_s2_png);   // assets/s2.png
LV_IMG_DECLARE( ui_img_s3_png);   // assets/s3.png
LV_IMG_DECLARE( ui_img_s4_png);   // assets/s4.png
LV_IMG_DECLARE( ui_img_s5_png);   // assets/s5.png
LV_IMG_DECLARE( ui_img_s6_png);   // assets/s6.png
LV_IMG_DECLARE( ui_img_s7_png);   // assets/s7.png
LV_IMG_DECLARE( ui_img_s8_png);   // assets/s8.png
LV_IMG_DECLARE( ui_img_s9_png);   // assets/s9.png
LV_IMG_DECLARE( ui_img_wave1_png);   // assets/wave1.png
LV_IMG_DECLARE( ui_img_wave2_png);   // assets/wave2.png

LV_FONT_DECLARE( ui_font_H1);
LV_FONT_DECLARE( ui_font_Number_big);
LV_FONT_DECLARE( ui_font_Number_extra);
LV_FONT_DECLARE( ui_font_Subtitle);
LV_FONT_DECLARE( ui_font_Title);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
