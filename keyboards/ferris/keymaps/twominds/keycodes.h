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

enum keycodes {
	CAPSWORD = SAFE_RANGE,

	SW_APP,  // Switch to next app         (cmd-tab)
};
