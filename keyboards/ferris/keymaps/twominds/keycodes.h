// Friendly layer names
enum layers {
  BASE,
  TYPE,
  MOUSE,
  NAV,
  SYMB1,
  SYMB2,
  FUN,
  NUM,
  NAV2,
  GAME,
};


// Win and tab switches
#define TABL LAG(KC_LEFT)
#define TABR LAG(KC_RGHT)
#define NEXTWIN G(SE_RABK)
#define PREVWIN G(SE_LABK)

// Thumb keys
#define LTHUMB2 LGUI_T(KC_ESC)
#define LTHUMB1 LT(TYPE, KC_NO)
#define RTHUMB1 LT(NAV2, KC_SPC)
#define RTHUMB2 KC_LGUI

// Base layer keys row 1
#define BASE_Q SE_Q
#define BASE_W SE_W
#define BASE_E SE_E
#define BASE_R SE_R
#define BASE_T SE_T
#define BASE_Y SE_Y
#define BASE_U SE_U
#define BASE_I SE_I
#define BASE_O SE_O
#define BASE_P SE_P

// Base layer keys row 2
#define BASE_A LSFT_T(SE_A)
#define BASE_S LT(FUN,SE_S)
#define BASE_D LT(MOUSE,SE_D)
#define BASE_F LT(SYMB1,SE_F)
#define BASE_G SE_G
#define BASE_H SE_H
#define BASE_J LT(SYMB2,SE_J)
#define BASE_K LT(NAV,SE_K)
#define BASE_L LT(NUM,SE_L)
#define BASE_ODIA LSFT_T(SE_ODIA)

//  Base layer keys row 3
#define BASE_Z LCAG_T(SE_Z)
#define BASE_X LCTL_T(SE_X)
#define BASE_C LALT_T(SE_C)
#define BASE_V SE_V
#define BASE_B SE_B
#define BASE_N SE_N
#define BASE_M SE_M
#define BASE_COMM LALT_T(SE_COMM)
#define BASE_DOT LCTL_T(SE_DOT)
#define BASE_MINS SE_MINS

enum keycodes {
	CAPSWORD = SAFE_RANGE,

	SW_APP,  // Switch to next app         (cmd-tab)
};
