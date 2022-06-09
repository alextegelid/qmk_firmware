#include QMK_KEYBOARD_H
#include "keymap_swedish_pro_osx_iso.h"
#include "g/keymap_combo.h"

#include "swapper.h"
#include "keycodes.h"
#include "capsword.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWER] = LAYOUT_split_3x5_2(
    QWER_Q, QWER_W, QWER_E, QWER_R,  QWER_T,             QWER_Y,  QWER_U, QWER_I,    QWER_O,   QWER_P,
    QWER_A, QWER_S, QWER_D, QWER_F,  QWER_G,             QWER_H,  QWER_J, QWER_K,    QWER_L,   QWER_ODIA,
    QWER_Z, QWER_X, QWER_C, QWER_V,  QWER_B,             QWER_N,  QWER_M, QWER_COMM, QWER_DOT, QWER_MINS,
                            LTHUMB2, LTHUMB1,            RTHUMB1, RTHUMB2
  ),
  [COLE] = LAYOUT_split_3x5_2(
    COLE_Q, COLE_W, COLE_F, COLE_P,  COLE_G,             COLE_J,  COLE_L, COLE_U,    COLE_Y,   COLE_ODIA,
    COLE_A, COLE_R, COLE_S, COLE_T,  COLE_D,             COLE_H,  COLE_N, COLE_E,    COLE_I,   COLE_O,
    COLE_Z, COLE_X, COLE_C, COLE_V,  COLE_B,             COLE_K,  COLE_M, COLE_COMM, COLE_DOT, COLE_MINS,
                            LTHUMB2, LTHUMB1,            RTHUMB1, RTHUMB2
  ),
  [TYPE] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______, _______,         _______, _______,  _______, KC_DEL,  KC_BSPC,
    _______, _______, _______, _______, _______,         KC_PGUP, CAPSWORD, KC_HOME, _______, _______,
    _______, _______, _______, _______, _______,         KC_PGDN, _______,  KC_END,  _______, _______,
                               _______, XXXXXXX,         _______, _______
  ),
  [NAV1] = LAYOUT_split_3x5_2(
    _______, _______, KC_UP,   _______, _______,         _______, _______, _______, _______,    _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,         _______, KC_LGUI, XXXXXXX, G(KC_LALT), A(KC_LSFT),
    _______, XXXXXXX, XXXXXXX, XXXXXXX, _______,         _______, _______, _______, _______,    _______,
                               _______, _______,         _______, _______
  ),
  [SYM1] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______, _______,         _______, SE_UNDS, SE_PIPE, SE_QUOT, _______,
    SE_CIRC, SE_ASTR, SE_AMPR, XXXXXXX, _______,         SE_HASH, SE_TILD, SE_SLSH, SE_DQUO, SE_DLR,
    _______, _______, _______, _______, _______,         _______, SE_MINS, SE_BSLS, SE_GRV,  _______,
                               _______, _______,         _______, _______
  ),
  [SYM2] = LAYOUT_split_3x5_2(
    SE_SLSH, SE_COLN, SE_LABK, SE_RABK, SE_SCLN,         _______, _______, _______, SE_ARNG, SE_ADIA,
    SE_LCBR, SE_RCBR, SE_LPRN, SE_RPRN, SE_AT,           _______, XXXXXXX, SE_EQL,  SE_PLUS, SE_PERC,
    _______, SE_EXLM, SE_LBRC, SE_RBRC, SE_QUES,         _______, _______, _______, _______, _______,
                               _______, _______,         _______, _______
  ),
  [FUNC] = LAYOUT_split_3x5_2(
    _______, _______, TABL,       TABR,    _______,        _______, KC_F7, KC_F8, KC_F9, KC_F10,
    _______, XXXXXXX, C(KC_LALT), SW_APP,  _______,        _______, KC_F4, KC_F5, KC_F6, KC_F11,
    _______, _______, PREVWIN,    NEXTWIN, _______,        _______, KC_F1, KC_F2, KC_F3, KC_F12,
                                  _______, _______,        _______, _______
  ),
  [NUMB] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______, _______,           KC_PPLS, SE_7, SE_8, SE_9, KC_PAST,
    _______, _______, XXXXXXX, _______, _______,           KC_PMNS, SE_4, SE_5, SE_6, SE_0,
    _______, _______, _______, _______, _______,           KC_PEQL, SE_1, SE_2, SE_3, KC_PSLS,
                               _______, _______,           _______, _______
  ),
  [MOUS] = LAYOUT_split_3x5_2(
    _______, _______,       KC_MS_UP,    _______,       _______,               _______, _______,    _______,    _______, _______,
    _______, KC_MS_LEFT,    KC_MS_DOWN,  KC_MS_RIGHT,   _______,               _______, KC_MS_BTN1, KC_MS_BTN1, XXXXXXX, _______,
    _______, KC_MS_WH_LEFT, KC_MS_WH_UP, KC_MS_WH_DOWN, KC_MS_WH_RIGHT,        _______, _______,    _______,    _______, _______,
                                         _______,       _______,               _______, _______
  ),
  [NAV2] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______,  _______,          DF(GAME), _______, _______, _______, KC_VOLU,
    _______, _______, _______, _______,  _______,          DF(COLE), _______, _______, _______, KC_VOLD,
    _______, _______, _______, _______,  _______,          DF(QWER), _______, _______, _______, KC_MPLY,
                               S(KC_TAB), KC_TAB,          XXXXXXX,  _______
  ),
  [GAME] = LAYOUT_split_3x5_2(
    KC_ESC,  KC_1,   KC_2, KC_3,    KC_4,             KC_5,     KC_6,    KC_7,    KC_8,    KC_9,
    XXXXXXX, KC_Q,   KC_W, KC_E,    KC_R,             XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_LSFT, KC_A,   KC_S, KC_D,    KC_F,             KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,
                           KC_ESC,  KC_SPC,           DF(QWER), XXXXXXX
  )
};

bool sw_app_active = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  update_swapper(
    &sw_app_active, KC_LGUI, KC_TAB, SW_APP,
    keycode, record
  );

  switch (keycode) {
  case CAPSWORD:
    if (record->event.pressed) {
      return false;
    } else {
      caps_word_toggle();
      return false;
    }
  }
  process_caps_word(keycode, record);

  return true;
}

// Specify combos that must be held for the duration of COMBO_TERM before
// triggering (to prevent misfires when typing quickly):
bool get_combo_must_hold(uint16_t index, combo_t *combo) {
  return false;
}

// Tune timings for combos
uint16_t get_combo_term(uint16_t index, combo_t *combo) {
  switch(index) {
    default:
      return COMBO_TERM;
  }
}
