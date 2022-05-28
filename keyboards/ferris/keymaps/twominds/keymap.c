#include QMK_KEYBOARD_H
#include "keymap_swedish_pro_osx_iso.h"
#include "g/keymap_combo.h"

#include "swapper.h"
#include "keycodes.h"
#include "capsword.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_split_3x5_2(
		KC_Q,         KC_W,         KC_E,           KC_R,           KC_T,               KC_Y,    KC_U,           KC_I,            KC_O,           KC_P,
		LSFT_T(KC_A), LT(FUN,KC_S), LT(MOUSE,KC_D), LT(SYMB1,KC_F), KC_G,               KC_H,    LT(SYMB2,KC_J), LT(NAV,KC_K),    LT(NUM,KC_L),   LSFT_T(KC_SCLN),
		LCAG_T(KC_Z), LCTL_T(KC_X), LALT_T(KC_C),   KC_V,           KC_B,               KC_N,    KC_M,           LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH,
													LTHUMB1,        LTHUMB2,            RTHUMB1, RTHUMB2
	),
	[TYPE] = LAYOUT_split_3x5_2(
		_______, _______, _______, _______,  _______,                       _______, KC_HOME, KC_END,  KC_DEL,  KC_BSPC,
		_______, _______, _______, CAPSWORD, _______,                       _______, _______, _______, _______, _______,
		_______, _______, _______, _______,  _______,                       _______, _______, _______, _______, _______,
								   _______,  XXXXXXX,                       _______, _______
	),
	[MOUSE] = LAYOUT_split_3x5_2(
		_______, _______, _______, _______, _______,                        _______, KC_BTN1, KC_MS_U, KC_BTN2, _______,
		_______, KC_BTN1, XXXXXXX, KC_BTN2, _______,                        _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,
		_______, _______, _______, _______, _______,                        KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, _______,
								   _______, _______,                        _______, _______
	),
	[NAV] = LAYOUT_split_3x5_2(
		_______, _______, KC_UP,   _______, _______,                        _______, _______, _______, _______,       _______,
		_______, KC_LEFT, KC_DOWN, KC_RGHT, KC_C,                           _______, KC_LGUI, XXXXXXX, LCTL(KC_LALT), LSA(KC_LSFT),
		_______, KC_PGUP, KC_PGDN, KC_HOME, KC_END,                         _______, _______, _______, _______,       _______,
								   _______, _______,                        _______, _______
	),
	[SYMB1] = LAYOUT_split_3x5_2(
		_______, _______, _______, _______, _______,                        _______, SE_UNDS, SE_PIPE, SE_QUOT, _______,
		SE_CIRC, SE_ASTR, SE_AMPR, XXXXXXX, _______,                        SE_HASH, SE_TILD, SE_SLSH, SE_DQUO, SE_DLR,
		_______, _______, _______, _______, _______,                        _______, SE_MINS, SE_BSLS, SE_GRV,  _______,
								   _______, _______,                        _______, _______
	),
	[SYMB2] = LAYOUT_split_3x5_2(
		SE_SLSH, SE_COLN, SE_LABK, SE_RABK, SE_SCLN,                        _______, _______, _______, _______, _______,
		SE_LCBR, SE_RCBR, SE_LPRN, SE_RPRN, SE_AT,                          _______, XXXXXXX, SE_EQL,  SE_PLUS, SE_PERC,
		_______, SE_EXLM, SE_LBRC, SE_RBRC, SE_QUES,                        _______, _______, _______, _______, _______,
								   _______, _______,                        KC_VOLD, KC_VOLU
	),
	[FUN] = LAYOUT_split_3x5_2(
		_______, _______, TABL,          TABR,    _______,                  _______, KC_F7, KC_F8, KC_F9, KC_F10,
		_______, XXXXXXX, LCTL(KC_LALT), SW_APP,  _______,                  _______, KC_F4, KC_F5, KC_F6, KC_F11,
		_______, _______, PREVWIN,       NEXTWIN, _______,                  _______, KC_F1, KC_F2, KC_F3, KC_F12,
										 _______, _______,                  _______, _______
	),
	[NUM] = LAYOUT_split_3x5_2(
		KC_PSLS, KC_7, KC_8, KC_9,    KC_PPLS,                              _______, _______, _______, _______, _______,
		KC_0,    KC_4, KC_5, KC_6,    KC_PMNS,                              _______, _______, _______, XXXXXXX, _______,
		KC_PAST, KC_1, KC_2, KC_3,    KC_PEQL,                              _______, _______, _______, _______, _______,
							 _______, _______,                              _______, _______
	),
	[NAV2] = LAYOUT_split_3x5_2(
		_______, _______, SE_COLN, KC_ESC,  _______,                        DF(GAME),  _______, _______, _______, KC_DEL,
		_______, SE_PERC, SE_SLSH, KC_ENT,  _______,                        DF(MOUSE), KC_LGUI, _______, _______, _______,
		_______, _______, SE_QUES, SE_EXLM, _______,                        DF(BASE),  _______, _______, _______, _______,
								   _______, KC_TAB,                         XXXXXXX,   _______
	),
	[GAME] = LAYOUT_split_3x5_2(
		KC_ESC,  KC_1,   KC_2, KC_3,    KC_4,                               KC_5,     KC_6,    KC_7,    KC_8,    KC_9,
		XXXXXXX, KC_Q,   KC_W, KC_E,    KC_R,                               XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		KC_LSFT, KC_A,   KC_S, KC_D,    KC_F,                               KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,
							   KC_ESC,  KC_SPC,                             DF(BASE), XXXXXXX
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
