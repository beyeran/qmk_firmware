#pragma once
#include QMK_KEYBOARD_H

#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation);
void oled_task_user(void);

#endif
