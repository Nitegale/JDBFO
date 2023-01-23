/* Copyright 2019 kakunpc
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_NO,       
    KC_CAPS, KC_TAB,  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,  KC_NO,        
    KC_KP_7, KC_KP_8, KC_KP_9, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y, KC_NO,         
    KC_KP_4, KC_KP_5, KC_KP_6, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H, KC_NO,         
    KC_KP_1, KC_KP_2, KC_KP_3, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N, KC_NO,        
    KC_KP_0, KC_COPY, KC_PSTE, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_NO,   KC_NO,  KC_NO),
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
  // Host Keyboard LED Status
  oled_write_P(IS_HOST_LED_ON(USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
  oled_write_P(IS_HOST_LED_ON(USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
  oled_write_P(IS_HOST_LED_ON(USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
    return false;
}
#endif
