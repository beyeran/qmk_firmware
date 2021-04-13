#pragma once
#include QMK_KEYBOARD_H

#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation);
void reset_pomodoro(void);
void init_pomodoro(void);
void render_pomodoro(void);
void oled_task_user(void);

#endif
