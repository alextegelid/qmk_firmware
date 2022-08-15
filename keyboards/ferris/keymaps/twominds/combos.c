enum combos {
  QWER_ESC,
  QWER_ENT,
  QWER_BOOT,
};

const uint16_t PROGMEM qwer_esc[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM qwer_ent[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM qwer_boot[] = {KC_V, KC_B, KC_N, KC_M, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [QWER_ESC] = COMBO(qwer_esc, KC_ESC),
  [QWER_ENT] = COMBO(qwer_ent, KC_ENT),
  [QWER_BOOT] = COMBO(qwer_boot, QK_BOOT),
};