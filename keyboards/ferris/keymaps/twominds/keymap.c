#include QMK_KEYBOARD_H
#include "keymap_swedish_pro_osx_iso.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
		KC_Q, KC_W, KC_E, KC_R, KC_T,                                       KC_Y, KC_U, KC_I, KC_O, KC_P,
		LSFT_T(KC_A), LT(5,KC_S), LT(1,KC_D), LT(3,KC_F), KC_G,             KC_H, LT(4,KC_J), LT(2,KC_K), LT(6,KC_L), LSFT_T(KC_SCLN),
		KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B,                       KC_N, KC_M, LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH,
		LCAG_T(KC_ESC), KC_BSPC,                                            LT(7,KC_SPC), LGUI_T(KC_ENT)
	),
	[1] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS,
		KC_TRNS, KC_BTN1, KC_NO, KC_BTN2, KC_TRNS,                          KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_TRNS,
		KC_TRNS, KC_TRNS,                                                   KC_TRNS, KC_TRNS
	),
	[2] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS,                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_C,                           KC_TRNS, KC_LGUI, KC_NO, LCTL(KC_LALT), LCA(KC_LSFT),
		KC_TRNS, KC_PGUP, KC_PGDN, KC_HOME, KC_END,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,                                                   KC_TRNS, KC_TRNS
	),
	[3] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, SE_UNDS, SE_PIPE, SE_QUOT, KC_TRNS,
		SE_CIRC, SE_ASTR, SE_AMPR, KC_NO, KC_TRNS,                          SE_HASH, SE_TILD, SE_SLSH, SE_DQUO, SE_DLR,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, SE_MINS, SE_BSLS, SE_GRV, KC_TRNS,
		KC_TRNS, KC_TRNS,                                                   KC_TRNS, KC_TRNS
	),
	[4] = LAYOUT_split_3x5_2(
		KC_TRNS, SE_COLN, SE_LABK, SE_RABK, SE_SCLN,                        KC_TRNS, KC_TRNS, KC_TRNS, SE_ARNG, SE_ADIA,
		SE_LCBR, SE_RCBR, SE_LPRN, SE_RPRN, SE_AT,                          KC_TRNS, KC_NO, SE_EQL, SE_PLUS, SE_PERC,
		KC_TRNS, SE_EXLM, SE_LBRC, SE_RBRC, SE_QUES,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_VOLD,                                                   KC_VOLU, KC_TRNS
	),
	[5] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10,
		KC_TRNS, KC_NO, LCTL(KC_LALT), KC_TRNS, KC_TRNS,                    KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12,
		KC_TRNS, KC_TRNS,                                                   KC_TRNS, KC_TRNS
	),
	[6] = LAYOUT_split_3x5_2(
		KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS,                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_0, KC_4, KC_5, KC_6, KC_PMNS,                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS,
		KC_PAST, KC_1, KC_2, KC_3, KC_PEQL,                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,                                                   KC_TRNS, KC_TRNS
	),
	[7] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_TRNS, SE_COLN, KC_ESC, KC_TRNS,                         RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,
		KC_TRNS, SE_PERC, SE_SLSH, KC_ENT, KC_TRNS,                         DF(1), KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, SE_EXLM, KC_TRNS,                        DF(0), KC_TRNS, RALT_T(KC_COMM), RCTL_T(KC_DOT), KC_TRNS,
		KC_TRNS, KC_TAB,                                                    KC_NO, KC_TRNS
	)
};
