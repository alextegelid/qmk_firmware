#include QMK_KEYBOARD_H

#include "keymap_swedish_pro_osx_iso.h"

#include "users/callum/oneshot.h"
#include "users/callum/swapper.h"

#define HOME G(KC_LEFT)
#define END G(KC_RGHT)
#define FWD G(KC_RBRC)
#define BACK G(KC_LBRC)
#define TABL LAG(KC_LEFT)
#define TABR LAG(KC_RGHT)
#define SPCL LCTL(KC_LEFT)
#define SPC_R LCTL(KC_RGHT)
#define LA_SYM MO(SYM)
#define LA_NAV MO(NAV)
#define CUST_Z LCAG_T(SE_Z)

enum layers {
    DEF,
    SYM,
    NAV,
    NUM,
    GAME
};

enum keycodes {
    // Custom oneshot mod implementation with no timers.
    OS_SHFT = SAFE_RANGE,
    OS_CTRL,
    OS_ALT,
    OS_CMD,

    SW_WIN,  // Switch to next window         (cmd-tab)
    SW_LANG, // Switch to next input language (ctl-spc)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEF] = LAYOUT_split_3x5_2(
        SE_Q,    SE_W,    SE_E,    SE_R,    SE_T,    SE_Y,    SE_U,    SE_I,    SE_O,   SE_P,
        SE_A,    SE_S,    SE_D,    SE_F,    SE_G,    SE_H,    SE_J,    SE_K,    SE_L,   SE_ODIA,
        CUST_Z,  SE_X,    SE_C,    SE_V,    SE_B,    SE_N,    SE_M,    SE_COMM, SE_DOT, SE_MINS,
                                   LA_NAV,  KC_LSFT, KC_SPC,  LA_SYM
    ),

    [SYM] = LAYOUT_split_3x5_2(
        KC_ESC,  SE_LBRC, SE_LCBR, SE_LPRN, SE_TILD, SE_CIRC, SE_RPRN, SE_RCBR, SE_RBRC, SE_GRV,
        KC_PMNS, SE_ASTR, KC_PEQL, SE_UNDS, SE_DLR,  SE_HASH, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT,
        KC_PPLS, SE_PIPE, SE_AT,   SE_BSLS, SE_PERC, SE_QUOT, SE_SLSH, SE_AMPR, SE_QUES, SE_EXLM,
                                   _______, _______, _______, _______
    ),

    [NAV] = LAYOUT_split_3x5_2(
        KC_TAB,  SW_WIN,  TABL,    TABR,    KC_VOLU, QK_BOOT, KC_DEL,  KC_UP,   SE_ARNG, SE_ADIA,
        OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  KC_VOLD, KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,
        SPCL,    SPC_R,   KC_MPRV, KC_MNXT, KC_MPLY, DF(GAME),KC_PGDN, KC_PGUP, SW_LANG, KC_ENT,
                                   _______, _______, _______, _______
    ),

    [NUM] = LAYOUT_split_3x5_2(
        SE_1,    SE_2,    SE_3,    SE_4,    SE_5,    SE_6,    SE_7,    SE_8,    SE_9,    SE_0,
        OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  KC_F11,  KC_F10,  OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT,
        KC_F7,   KC_F5,   KC_F3,   KC_F1,   KC_F9,   KC_F8,   KC_F12,  KC_F2,   KC_F4,   KC_F6,
                                   _______, _______, _______, _______
    ),

    [GAME] = LAYOUT_split_3x5_2(
		KC_ESC, KC_1, KC_2, KC_3, KC_4,                                     KC_5, KC_6, KC_7, KC_8, KC_9,
		KC_NO, KC_Q, KC_W, KC_E, KC_R,                                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_LSFT, KC_A, KC_S, KC_D, KC_F,                                    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
		KC_ESC, KC_SPC,                                                     DF(DEF), KC_NO
	)
};

bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
    case KC_LSFT:
    case OS_SHFT:
    case OS_CTRL:
    case OS_ALT:
    case OS_CMD:
        return true;
    default:
        return false;
    }
}

bool sw_win_active = false;
bool sw_lang_active = false;

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_swapper(
        &sw_win_active, KC_LGUI, KC_TAB, SW_WIN,
        keycode, record
    );
    update_swapper(
        &sw_lang_active, KC_LCTL, KC_SPC, SW_LANG,
        keycode, record
    );

    update_oneshot(
        &os_shft_state, KC_LSFT, OS_SHFT,
        keycode, record
    );
    update_oneshot(
        &os_ctrl_state, KC_LCTL, OS_CTRL,
        keycode, record
    );
    update_oneshot(
        &os_alt_state, KC_LALT, OS_ALT,
        keycode, record
    );
    update_oneshot(
        &os_cmd_state, KC_LCMD, OS_CMD,
        keycode, record
    );

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, SYM, NAV, NUM);
}
