#include QMK_KEYBOARD_H
#include "keymap_swedish_pro_mac_iso.h"
#include "keycodes.h"

#include "swapper.c"
#include "combos.c"

// Friendly layer names
enum layers {
  QWER,
  TYPE,
  NAV1,
  SYM1,
  SYM2,
  FUNC,
  NUMB,
  MISC,
  GAME,
};

enum keycodes {
  SW_APP = SAFE_RANGE,  // Switch to next app         (cmd-tab)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWER] = LAYOUT_split_3x5_2(
    QWER_Q,  QWER_W,  QWER_E,  QWER_R,  QWER_T,          QWER_Y,  QWER_U, QWER_I,    QWER_O,   QWER_P,
    QWER_A,  QWER_S,  QWER_D,  QWER_F,  QWER_G,          QWER_H,  QWER_J, QWER_K,    QWER_L,   QWER_ODIA,
    QWER_Z,  QWER_X,  QWER_C,  QWER_V,  QWER_B,          QWER_N,  QWER_M, QWER_COMM, QWER_DOT, QWER_MINS,
                               LTHUMB2, LTHUMB1,         RTHUMB1, RTHUMB2
  ),
  [TYPE] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______, LSG(KC_7),       _______, _______, _______, KC_DEL,  KC_BSPC,
    _______, _______, _______, _______, _______,         CW_TOGG, KC_HOME, KC_END,  _______, ___X___,
    C(KC_1), _______, _______, _______, _______,         _______, _______, _______, KC_PGUP, KC_PGDN,
                               _______, ___X___,         KC_TAB,  S(KC_TAB)
  ),
  [NAV1] = LAYOUT_split_3x5_2(
    ___X___, ___X___, KC_UP,   ___X___, ___X___,         ___X___, ___X___, ___X___,    ___X___,    ___X___,
    KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT, ___X___,         ___X___, ___X___, ___X___,    C(KC_LGUI), A(KC_LSFT),
    ___X___, ___X___, ___X___, ___X___, ___X___,         ___X___, ___X___, A(KC_LGUI), ___X___,    ___X___,
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
    SE_Q,    ___X___, TABLEFT, TABRGHT, ___X___,         _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,
    ___X___, ___X___, ___X___, SW_APP,  ___X___,         _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,
    ___X___, ___X___, PREVWIN, NEXTWIN, ___X___,         _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,
                               ___X___, ___X___,         _______, _______
  ),
  [NUMB] = LAYOUT_split_3x5_2(
    _______, _______, _______, _______, _______,         KC_PSLS, SE_7,    SE_8,    SE_9,    KC_PMNS,
    _______, _______, ___X___, SE_COMM, _______,         KC_PAST, SE_4,    SE_5,    SE_6,    KC_PPLS,
    _______, _______, _______, _______, _______,         KC_PEQL, SE_1,    SE_2,    SE_3,    KC_DOT,
                               _______, _______,         ___X___, SE_0
  ),
  [MISC] = LAYOUT_split_3x5_2(
    _______, _______, ZOOMOUT, ZOOMIN,  _______,         DF(GAME), RGB_VAI, RGB_HUI, KC_BRIU, KC_VOLU,
    SCRNCAP, _______, _______, PASSWRD, _______,         _______,  RGB_VAD, RGB_HUD, KC_BRID, KC_VOLD,
    WINMNGR, _______, _______, _______, _______,         DF(QWER), RGB_MOD, RGB_TOG, _______, KC_MPLY,
                               _______, _______,         ___X___,  _______
  ),
  [GAME] = LAYOUT_split_3x5_2(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,            KC_5,     KC_6,    KC_7,   KC_8,    KC_9,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,            KC_TAB,   ___X___, KC_G,   KC_B,    MUTEDISC,
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

  return true;
}

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
};

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
    // Keycodes that continue Caps Word, with shift applied.
    case KC_A ... KC_Z:
    case KC_MINS:
    case SE_MINS:
    case SE_ODIA:
    case SE_ADIA:
    case SE_ARNG:
      add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
      return true;

    // Keycodes that continue Caps Word, without shifting.
    case KC_1 ... KC_0:
    case KC_BSPC:
    case KC_DEL:
    case KC_UNDS:
      return true;

    default:
      return false;  // Deactivate Caps Word.
  }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LT(MISC, KC_SPC):
      return 200;
    default:
      return QUICK_TAP_TERM;
  }
}