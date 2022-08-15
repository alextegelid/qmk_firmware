#include QMK_KEYBOARD_H
#include "keymap_swedish_pro_osx_iso.h"

#include "swapper.h"
#include "keycodes.h"
#include "capsword.c"

#include "g/keymap_combo.h"

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
    _______, _______, _______, _______, LSG(KC_7),       _______,  _______, _______, KC_DEL,  KC_BSPC,
    _______, _______, _______, _______, _______,         CAPSWORD, KC_HOME, KC_END,  _______, KC_PGUP,
    _______, _______, _______, _______, _______,         _______,  _______, _______, _______, KC_PGDN,
                               _______, ___X___,         KC_TAB,   S(KC_TAB)
  ),
  [NAV1] = LAYOUT_split_3x5_2(
    ___X___, ___X___, KC_UP,   ___X___, ___X___,         ___X___, ___X___, ___X___, ___X___,    ___X___,
    KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT, ___X___,         ___X___, KC_LGUI, ___X___, C(KC_LGUI), A(KC_LSFT),
    ___X___, ___X___, ___X___, ___X___, ___X___,         ___X___, ___X___, ___X___, ___X___,    ___X___,
                               ___X___, ___X___,         ___X___, ___X___
  ),
  [SYM1] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______, _______,         _______, SE_UNDS, SE_PIPE, SE_QUOT, _______,
    SE_CIRC, SE_ASTR, SE_AMPR, ___X___, _______,         SE_HASH, SE_TILD, SE_SLSH, SE_DQUO, SE_DLR,
    _______, _______, _______, _______, _______,         _______, SE_MINS, SE_BSLS, SE_GRV,  _______,
                               _______, _______,         _______, _______
  ),
  [SYM2] = LAYOUT_split_3x5_2(
    SE_SLSH, SE_COLN, SE_LABK, SE_RABK, SE_SCLN,         _______, _______, _______, SE_ARNG, SE_ADIA,
    SE_LCBR, SE_RCBR, SE_LPRN, SE_RPRN, SE_AT,           _______, ___X___, SE_EQL,  SE_PLUS, SE_PERC,
    _______, SE_EXLM, SE_LBRC, SE_RBRC, SE_QUES,         _______, _______, _______, _______, _______,
                               _______, _______,         _______, _______
  ),
  [FUNC] = LAYOUT_split_3x5_2(
    _______, _______, TABL,    TABR,    _______,         _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,
    _______, ___X___, _______, SW_APP,  _______,         _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,
    _______, _______, PREVWIN, NEXTWIN, _______,         _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,
                               _______, _______,         _______, _______
  ),
  [NUMB] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______, _______,         KC_PAST, SE_7,    SE_8,    SE_9,    KC_PMNS,
    _______, _______, ___X___, _______, _______,         KC_PSLS, SE_4,    SE_5,    SE_6,    KC_PPLS,
    _______, _______, _______, _______, _______,         KC_PEQL, SE_1,    SE_2,    SE_3,    ___X___,
                               _______, _______,         ___X___, SE_0
  ),
  [MOUS] = LAYOUT_split_3x5_2(
    _______, _______, KC_MS_U, _______, _______,         _______, _______, _______, _______, _______,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,         _______, KC_BTN1, KC_BTN2, ___X___, _______,
    _______, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,         _______, _______, _______, _______, _______,
                               _______, _______,         _______, _______
  ),
  [MISC] = LAYOUT_split_3x5_2(
    _______, _______, ZOOMOUT, ZOOMIN,  _______,          DF(GAME), _______, _______, KC_BRIU, KC_VOLU,
    SCRNCAP, _______, _______, PASSWRD, _______,          DF(COLE), _______, _______, KC_BRID, KC_VOLD,
    CLRSNAP, _______, _______, _______, _______,          DF(QWER), _______, _______, _______, KC_MPLY,
                               _______, _______,          ___X___,  _______
  ),
  [GAME] = LAYOUT_split_3x5_2(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,            KC_5,     KC_6,    KC_7,   KC_8,    KC_9,
    ___X___, KC_Q,    KC_W,    KC_E,    KC_R,            KC_TAB,   ___X___, KC_G,   KC_B,    MUTEDISC,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,            KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,
                               KC_ESC,  KC_SPC,          DF(QWER), ___X___
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
  switch(index) {
    case qwerBoot:
    case coleBoot:
    case qwerEscape:
    case coleEscape:
      return true;
    default:
      return false;
  }
}

// Tune timings for combos
uint16_t get_combo_term(uint16_t index, combo_t *combo) {
  switch(index) {
    case qwerEscape:
    case coleEscape:
      return 20;
    default:
      return COMBO_TERM;
  }
}
