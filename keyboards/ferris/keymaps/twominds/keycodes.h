// Friendly layer names
enum layers {
  QWER,
  TYPE,
  MOUS,
  NAV1,
  SYM1,
  SYM2,
  FUNC,
  NUMB,
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
#define QWER_D LT(MOUS,SE_D)
#define QWER_F LT(SYM1,SE_F)
#define QWER_G SE_G
#define QWER_H SE_H
#define QWER_J LT(SYM2,SE_J)
#define QWER_K LT(NAV1,SE_K)
#define QWER_L LT(NUMB,SE_L)
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

enum keycodes {
	CAPSWORD = SAFE_RANGE,

	SW_APP,  // Switch to next app         (cmd-tab)
};
