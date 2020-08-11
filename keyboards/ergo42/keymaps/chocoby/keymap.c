#include QMK_KEYBOARD_H

#define BASE 0
#define META 1
#define SYMB 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,------------------------------------------------.   ,------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |      |   |  =   |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
 * | Ctrl |   A  |   S  |   D  |   F  |   G  |  (   |   |  )   |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * |Shift |   Z  |   X  |   C  |   V  |   B  |      |   |      |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | SYMB | LAlt | Left | Right| GUI  |Space | ESC  |   |Back  |Enter | GUI  |      |   [  |   ]  | META |
 * |      |      |      |      |      |      |      |   |Space |      |      |      |      |      |      |
 * `------------------------------------------------'   `------------------------------------------------'
 */

[BASE] = LAYOUT( \
  KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,   XXXXXXX,   KC_EQL,  KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,     KC_MINS, \
  KC_LCTRL, KC_A,    KC_S,    KC_D,     KC_F,    KC_G,   S(KC_9),   S(KC_0), KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, \
  KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,   XXXXXXX,   XXXXXXX, KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, \
  MO(SYMB), KC_LALT, KC_LEFT, KC_RIGHT, KC_LGUI, KC_SPC, KC_ESC,    KC_BSPC, KC_ENT, KC_RGUI, XXXXXXX, KC_LBRC, KC_RBRC,  MO(META) \
),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |  `~  |   1  |   2  |   3  |   4  |   5  |      |   |      |   6  |   7  |   8  |   9  |   0  |  =   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |  Up  |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |Shift |      |      |      |      |      |      |   |      |      |      | Left | Down |Right |Shift |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      | GUI  |      |      |   |      |      | GUI  |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX,  XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, _______, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |Reset |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^  |   &  |   *  |   (  |   )  |   \  |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |   |  |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    RESET,   S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LBRC,  KC_RBRC, S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_BSLS, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
  )
};
