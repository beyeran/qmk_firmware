#pragma once
#ifdef OLED_DRIVER_ENABLE
#include QMK_KEYBOARD_H

oled_rotation_t oled_init_user(oled_rotation_t rotation);
void render_kyria_logo(void);
void render_qmk_logo(void);
void render_status(void);
void oled_task_user(void);

#endif
