// Friendly layer names
enum layers {
  QWER,
  COLE,
  TYPE,
  NAV1,
  SYM1,
  SYM2,
  FUNC,
  NUMB,
  MOUS,
  MISC,
  MNCR,
  DOTA
};

enum keycodes {
	CAPSWORD = SAFE_RANGE,

	SW_APP,  // Switch to next app         (cmd-tab)
};

// Win and tab switches
#define TABL LAG(KC_LEFT)
#define TABR LAG(KC_RGHT)
#define NEXTWIN G(SE_RABK)
#define PREVWIN G(SE_LABK)

// Thumb keys
#define LTHUMB2 LGUI_T(KC_ESC)
#define LTHUMB1 LT(TYPE, KC_NO)
#define RTHUMB1 LT(MISC, KC_SPC)
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
#define QWER_D LT(NUMB,SE_D)
#define QWER_F LT(SYM1,SE_F)
#define QWER_G SE_G
#define QWER_H SE_H
#define QWER_J LT(SYM2,SE_J)
#define QWER_K LT(NAV1,SE_K)
#define QWER_L LT(MOUS, SE_L)
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

// COLE layer keys row 1
#define COLE_Q SE_Q
#define COLE_W SE_W
#define COLE_F SE_F
#define COLE_P SE_P
#define COLE_G SE_G
#define COLE_J SE_J
#define COLE_L SE_L
#define COLE_U SE_U
#define COLE_Y SE_Y
#define COLE_ODIA SE_ODIA

// COLE layer keys row 2
#define COLE_A LSFT_T(SE_A)
#define COLE_R LT(FUNC,SE_R)
#define COLE_S LT(NUMB,SE_S)
#define COLE_T LT(SYM1,SE_T)
#define COLE_D SE_D
#define COLE_H SE_H
#define COLE_N LT(SYM2,SE_N)
#define COLE_E LT(NAV1,SE_E)
#define COLE_I LT(MOUS, SE_I)
#define COLE_O LSFT_T(SE_O)

//  QWER layer keys row 3
#define COLE_Z LCAG_T(SE_Z)
#define COLE_X LCTL_T(SE_X)
#define COLE_C LALT_T(SE_C)
#define COLE_V SE_V
#define COLE_B SE_B
#define COLE_K SE_K
#define COLE_M SE_M
#define COLE_COMM LALT_T(SE_COMM)
#define COLE_DOT LCTL_T(SE_DOT)
#define COLE_MINS SE_MINS
