#pragma once

// Add custom KC_NO keycode
#define ___X___ KC_NO

// Win and tab switches
#define TABLEFT LAG(KC_LEFT)
#define TABRGHT LAG(KC_RGHT)
#define NEXTWIN G(SE_RABK)
#define PREVWIN G(SE_LABK)

// Thumb keys
#define LTHUMB2 LGUI_T(KC_ESC)
#define LTHUMB1 MO(TYPE)
#define RTHUMB1 LT(MISC, KC_SPC)
#define RTHUMB2 LGUI_T(KC_ENT)

// Misc keys
#define SCRNCAP LSG(KC_4)
#define WINMNGR MEH(SE_C)
#define ZOOMIN G(KC_PPLS)
#define ZOOMOUT G(SE_MINS)
#define PASSWRD G(SE_QUOT)
#define MUTEDISC LCAG(SE_M)

// QWER layer keys row 1
#define QWER_Q SE_Q
#define QWER_W SE_W
#define QWER_E SE_E
#define QWER_R SE_R
#define QWER_T SE_T
#define QWER_Y SE_Y
#define QWER_U SE_U
#define QWER_I SE_I
#define QWER_O SE_O
#define QWER_P SE_P

// QWER layer keys row 2
#define QWER_A LSFT_T(SE_A)
#define QWER_S LT(FUNC,SE_S)
#define QWER_D LT(NUMB,SE_D)
#define QWER_F LT(SYM1,SE_F)
#define QWER_G SE_G
#define QWER_H SE_H
#define QWER_J LT(SYM2,SE_J)
#define QWER_K LT(NAV1,SE_K)
#define QWER_L SE_L
#define QWER_ODIA LSFT_T(SE_ODIA)

//  QWER layer keys row 3
#define QWER_Z LCAG_T(SE_Z)
#define QWER_X LCTL_T(SE_X)
#define QWER_C LALT_T(SE_C)
#define QWER_V SE_V
#define QWER_B SE_B
#define QWER_N SE_N
#define QWER_M SE_M
#define QWER_COMM LALT_T(SE_COMM)
#define QWER_DOT LCTL_T(SE_DOT)
#define QWER_MINS SE_MINS

