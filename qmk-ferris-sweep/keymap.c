#include QMK_KEYBOARD_H

//------------------------------------------------------------------------------
// Layers
//------------------------------------------------------------------------------
enum{
  _COLEMAKDH, // Base Colemak Mod-DH
  _SYMB, // Symbols
  _NAVI, // Navigation
  _NUMB, // Numbers
  _FUNC, // Functions keys
  _MOUS, // Mouse
  _WSPC, // Workspace
  _ADJUST // Adjust
};

//------------------------------------------------------------------------------
// Custom keycodes
//------------------------------------------------------------------------------

// - Home row modifiers:
#define KH_A LSFT_T(KC_A)          // A / Left Shift
#define KH_R LCTL_T(KC_R)          // S / Left Ctrl
#define KH_S LALT_T(KC_S)          // R / Left Alt
#define KH_T LGUI_T(KC_T)          // T / Left Gui
#define KH_O RSFT_T(KC_O)          // O / Right Shift
#define KH_E RALT_T(KC_E)          // I / Right Alt
#define KH_I RCTL_T(KC_I)          // E / Left Ctrl
#define KH_N RGUI_T(KC_N)          // N / Right Gui
#define KH_X RALT_T(KC_X)          // X / Right Alt
#define KH_DOT RALT_T(KC_DOT)      // . / Right Alt

// - Thumbs keys/modifiers:
#define CC_SYSP LT(_SYMB, KC_SPC)     // Space / _symbols
#define CC_NUTA LT(_NUMB, KC_TAB)     // Tab / _numbers
#define CC_NABS LT(_NAVI, KC_BSPC)    // Backspace / _navigation
#define CC_MOEN LT(_MOUS, KC_ENT)			// Enter / _mouse

// - Layers
#define CC_LFUN OSL(_FUNC)
#define CC_LWSP OSL(_WSPC)
#define CC_LADJ OSL(_ADJUST)

// - Tap dance keys:
#define TD_SCLN TD(DANCE_2)

// - Awesome WM macros:
#define KC_AW1 LGUI(KC_1)
#define KC_AW2 LGUI(KC_2)
#define KC_AW3 LGUI(KC_3)
#define KC_AW4 LGUI(KC_4)
#define KC_AW5 LGUI(KC_5)
#define KC_AW6 LGUI(KC_6)
#define KC_AW7 LGUI(KC_7)
#define KC_AW8 LGUI(KC_8)
#define KC_AW9 LGUI(KC_9)

// - Clipboard, Undo/Redo and "select all"
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND LCTL(KC_Z)
#define U_RDO LCTL(LSFT(KC_Z))

// - Macros
#define CC_BTAB RCS(KC_TAB)
#define CC_NTAB C(KC_TAB)
#define CC_WLSEL RCS(KC_LEFT)
#define CC_WLMOV C(KC_LEFT)
#define CC_WRSEL RCS(KC_RGHT)
#define CC_WRMOV C(KC_RGHT)

// - Tap dance codes
enum tap_dance_codes {
  DANCE_2 // Semicolon (single), Colon (double)
};

// - Custom symbols
enum custom_keycodes {
  COLEMAKDH = SAFE_RANGE,
  ASC_SAR,
  ASC_DAR,
  ASC_SQT,
  ASC_DQT,
  ASC_CIRC,
  ASC_TILD,
  ASC_HAP,
  ASC_SAD,
  ASC_BKT,
  ASC_COP,
  ASC_CCL,
  ASC_DDS,
  ASC_SSL,
  ASC_CEQ
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// TODO: change thumb keys
// -----------------------------------------------------------------------------
// Colemak Mod-DH
// -----------------------------------------------------------------------------
  [_COLEMAKDH] = LAYOUT_split_3x5_2(
    KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,              KC_J    ,KC_L    ,KC_U    ,KC_Y    ,TD_SCLN ,
    KH_A    ,KH_R    ,KH_S    ,KH_T    ,KC_G    ,              KC_M    ,KH_N    ,KH_E    ,KH_I    ,KH_O    ,
    KC_Z    ,KH_X    ,KC_C    ,KC_D    ,KC_V    ,              KC_K    ,KC_H    ,KC_COMM ,KH_DOT  ,KC_SLSH ,
                                   CC_SYSP ,CC_NUTA ,      CC_MOEN ,CC_NABS
  ),

// -----------------------------------------------------------------------------
// Symbols
// -----------------------------------------------------------------------------
  [_SYMB] = LAYOUT_split_3x5_2(
    KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,              ASC_CIRC ,KC_AMPR ,KC_ASTR ,ASC_COP ,ASC_CCL ,
    KC_PIPE ,KC_PMNS ,ASC_SQT ,ASC_DQT ,KC_GRV  ,              KC_QUOT  ,KC_COLN ,ASC_TILD,ASC_SAR ,ASC_DAR ,
    KC_BSLS ,KC_UNDS ,KC_LCBR ,KC_LBRC ,KC_EQL  ,              ASC_BKT  ,KC_RBRC ,KC_RCBR ,ASC_CEQ ,ASC_SSL ,
                                   _______ ,XXXXXXX ,      KC_RPRN, KC_LPRN
  ),

// -----------------------------------------------------------------------------
// Navigation
// -----------------------------------------------------------------------------
  [_NAVI] = LAYOUT_split_3x5_2(
    XXXXXXX ,KC_TAB  ,CC_BTAB ,CC_NTAB ,KC_SPC  ,              XXXXXXX ,CC_WLSEL,CC_WLMOV,CC_WRMOV,CC_WRSEL,
    KC_LSFT ,KC_LCTL ,KC_LALT ,KC_LGUI ,KC_ENT  ,              KC_TAB  ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT ,
    U_UND   ,U_CUT   ,U_CPY   ,U_PST   ,U_RDO   ,              _______ ,KC_HOME ,KC_PGDN ,KC_PGUP ,KC_END  ,
                                   CC_LFUN , CC_LWSP ,     XXXXXXX ,_______
  ),

// -----------------------------------------------------------------------------
// Mouse
// -----------------------------------------------------------------------------

  [_MOUS] = LAYOUT_split_3x5_2(
    C(KC_Q) ,C(KC_W) ,C(KC_F) ,C(KC_P) ,C(KC_B) ,                XXXXXXX ,XXXXXXX ,KC_MS_U ,XXXXXXX ,XXXXXXX,
    C(KC_A) ,C(KC_R) ,C(KC_S) ,C(KC_T) ,C(KC_G) ,                KC_BTN3 ,KC_MS_L ,KC_MS_D ,KC_MS_R ,XXXXXXX,
    U_UND   ,U_CUT   ,U_CPY   ,U_PST   ,U_RDO   ,                XXXXXXX ,KC_WH_L ,KC_WH_D ,KC_WH_U ,KC_WH_R,
                                  KC_BTN1 ,KC_BTN2,       _______ ,CC_LADJ
  ),
// -----------------------------------------------------------------------------
// Numeric keypad layer
// -----------------------------------------------------------------------------
  [_NUMB] = LAYOUT_split_3x5_2(
    KC_PMNS ,KC_7    ,KC_8    ,KC_9    ,KC_PPLS,                XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,
    KC_DOT  ,KC_4    ,KC_5    ,KC_6    ,KC_PAST,                XXXXXXX ,KC_RGUI ,KC_LALT ,KC_RCTL ,KC_RSFT,
    KC_PSLS ,KC_1    ,KC_2    ,KC_3    ,KC_EQL ,                XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_RALT ,XXXXXXX,
                                    CC_LADJ ,_______,     KC_COMM ,KC_0
  ),
// -----------------------------------------------------------------------------
// Function layer and some extra keys on right hand
// -----------------------------------------------------------------------------
  [_FUNC] = LAYOUT_split_3x5_2(
    KC_F12  ,KC_F7   ,KC_F8   ,KC_F9   ,KC_CAPS,                XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,
    KC_F11  ,KC_F4   ,KC_F5   ,KC_F6   ,KC_PSCR,                XXXXXXX ,KC_RGUI ,KC_LALT ,KC_RCTL ,KC_RSFT,
    KC_F10  ,KC_F1   ,KC_F2   ,KC_F3   ,KC_INS ,                XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_RALT ,XXXXXXX,
                                    XXXXXXX ,XXXXXXX,       XXXXXXX ,XXXXXXX
  ),

// -----------------------------------------------------------------------------
// Workspace (AwesomeWM navigation)
// -----------------------------------------------------------------------------
  [_WSPC] = LAYOUT_split_3x5_2(
    XXXXXXX ,KC_AW7  ,KC_AW8  ,KC_AW9  ,XXXXXXX,                XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,
    XXXXXXX ,KC_AW4  ,KC_AW5  ,KC_AW6  ,XXXXXXX,                XXXXXXX ,KC_RGUI ,KC_LALT ,KC_RCTL ,KC_RSFT,
    XXXXXXX ,KC_AW1  ,KC_AW2  ,KC_AW3  ,XXXXXXX,                XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_RALT ,XXXXXXX,
                                    XXXXXXX ,XXXXXXX,       XXXXXXX ,XXXXXXX
  ),

// -----------------------------------------------------------------------------
// Adjust layer (Reset and base layer switch)
// -----------------------------------------------------------------------------
  [_ADJUST] = LAYOUT_split_3x5_2(
    QK_BOOT ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,                XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,QK_BOOT,
    XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,                XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,
    XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,                XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,
                                    _______ ,_______,       _______ ,_______
  )
};



// -----------------------------------------------------------------------------
// Combos
// -----------------------------------------------------------------------------
enum combos {
  BG_DEL,
  JM_ENT
};

const uint16_t PROGMEM bg_combo[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM jm_combo[] = {KC_J, KC_M, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [BG_DEL] = COMBO(bg_combo, KC_DEL),
  [JM_ENT] = COMBO(jm_combo, KC_ENT)
};



// -----------------------------------------------------------------------------
// Tap dance
// -----------------------------------------------------------------------------
//extern bool g_suspend_state;
//#define GET_TAP_KC(dual_role_key) dual_role_key & 0xFF
//uint16_t last_keycode = KC_NO;
//uint8_t last_modifier = 0;

/* // Define "tap" structure */
/* typedef struct { */
/*     bool is_press_action; */
/*     uint8_t step; */
/* } tap; */

/* // Tap combinations */
/* enum { */
/*     SINGLE_TAP = 1, */
/*     SINGLE_HOLD, */
/*     DOUBLE_TAP, */
/*     DOUBLE_HOLD, */
/*     DOUBLE_SINGLE_TAP, */
/*     MORE_TAPS */
/* }; */

/* static tap dance_state = { */
/*     .is_press_action = true, */
/*     .step = 0 */
/* }; */

/* // Dance 1: Del / Gui / _Mouse */
/* void on_dance_1(qk_tap_dance_state_t *state, void *user_data) { */
/*   if(state->count == 3) { */
/*     tap_code16(KC_DEL); */
/*     tap_code16(KC_DEL); */
/*     tap_code16(KC_DEL); */
/*   } */
/*   if(state->count > 3) { */
/*     tap_code16(KC_DEL); */
/*   } */
/* } */

/* uint8_t dance_1_dance_step(qk_tap_dance_state_t *state) { */
/*   if (state->count == 1) { */
/*     if (state->interrupted || !state->pressed) return SINGLE_TAP; */
/*     else return SINGLE_HOLD; */
/*   } else if (state->count == 2) { */
/*     if (state->interrupted) return DOUBLE_SINGLE_TAP; */
/*     else if (state->pressed) return DOUBLE_HOLD; */
/*     else return DOUBLE_TAP; */
/*   } */
/*   return MORE_TAPS; */
/* } */
/* void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) { */
/*   dance_state.step = dance_1_dance_step(state); */
/*   switch (dance_state.step) { */
/*   case SINGLE_TAP: register_code16(KC_DEL); break; */
/*   case SINGLE_HOLD: register_mods(MOD_BIT(KC_LGUI)); break; */
/*   case DOUBLE_TAP: register_code16(KC_DEL); register_code16(KC_DEL); break; */
/*   case DOUBLE_HOLD: layer_on(_MOUS); break; */
/*   case DOUBLE_SINGLE_TAP: tap_code16(KC_DEL); register_code16(KC_DEL); */
/*   } */
/* } */

/* void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) { */
/*   wait_ms(10); */
/*   switch (dance_state.step) { */
/*   case SINGLE_TAP: unregister_code16(KC_DEL); break; */
/*   case SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LGUI)); break; */
/*   case DOUBLE_TAP: unregister_code16(KC_DEL); break; */
/*   case DOUBLE_HOLD: layer_off(_MOUS); break; */
/*   case DOUBLE_SINGLE_TAP: unregister_code16(KC_DEL); break; */
/*   } */
/*   dance_state.step = 0; */
/* } */

// Dance 2: Semicolon to Colon
void dance_2_finished (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code (KC_SCLN);
  } else {
    register_code (KC_RSFT);
    register_code (KC_SCLN);
  }
}
void dance_2_reset (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code (KC_SCLN);
  } else {
    unregister_code (KC_RSFT);
    unregister_code (KC_SCLN);
  }
}

/* // Dance 3: Square braket to curly bracket (left) */
/* void dance_3_finished (qk_tap_dance_state_t *state, void *user_data) { */
/*   if (state->count == 1) { */
/*     register_code (KC_LBRC); */
/*   } else { */
/*     register_code (KC_RSFT); */
/*     register_code (KC_LBRC); */
/*   } */
/* } */
/* void dance_3_reset (qk_tap_dance_state_t *state, void *user_data) { */
/*   if (state->count == 1) { */
/*     unregister_code (KC_LBRC); */
/*   } else { */
/*     unregister_code (KC_RSFT); */
/*     unregister_code (KC_LBRC); */
/*   } */
/* } */

/* // Dance 4: Square braket to curly bracket (right) */
/* void dance_4_finished (qk_tap_dance_state_t *state, void *user_data) { */
/*   if (state->count == 1) { */
/*     register_code (KC_RBRC); */
/*   } else { */
/*     register_code (KC_RSFT); */
/*     register_code (KC_RBRC); */
/*   } */
/* } */
/* void dance_4_reset (qk_tap_dance_state_t *state, void *user_data) { */
/*   if (state->count == 1) { */
/*     unregister_code (KC_RBRC); */
/*   } else { */
/*     unregister_code (KC_RSFT); */
/*     unregister_code (KC_RBRC); */
/*   } */
/* } */

// Match tap dance actions with the corresponding index
tap_dance_action_t tap_dance_actions[] = {
  /* [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset), */
  [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset)
  /* [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset), */
  /* [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset) */
};



// -----------------------------------------------------------------------------
// Enable tapping_force_hold only for home row mods
// -----------------------------------------------------------------------------
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case KH_T:
  case KH_S:
  case KH_R:
  case KH_A:
  case KH_N:
  case KH_E:
  case KH_I:
  case KH_O:
    return true;
  default:
    return false;
  }
}

// - Send custom strings or change default base layer
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Process caps_word
  if (!process_caps_word(keycode, record)) { return false; }

  if (record->event.pressed) {
    switch(keycode) {
      case ASC_SAR:
        SEND_STRING("->");
        return false;
      case ASC_DAR:
        SEND_STRING("=>");
        return false;
      case ASC_SQT:
        SEND_STRING(SS_RALT("'"));
        return false;
      case ASC_DQT:
        SEND_STRING(SS_RALT(SS_LSFT("\"")));
        return false;
      case ASC_CIRC:
        SEND_STRING(SS_RALT("^"));
        return false;
      case ASC_TILD:
        SEND_STRING(SS_RALT(SS_LSFT("~")));
        return false;
      case ASC_BKT:
        SEND_STRING(SS_RALT("`"));
        return false;
      case ASC_COP:
        SEND_STRING("/*");
        return false;
      case ASC_CCL:
        SEND_STRING("*/");
        return false;
      case ASC_DDS:
        SEND_STRING("../");
        return false;
      case ASC_SSL:
        SEND_STRING("//");
        return false;
      case ASC_CEQ:
        SEND_STRING(":=");
        return false;
      case COLEMAKDH:
        if (record->event.pressed) {
          set_single_persistent_default_layer(_COLEMAKDH);
        }
        return false;
        break;
    }
  }
  return true;
}

//------------------------------------------------------------------------------
// TAPPING_TERM fine tuning
//------------------------------------------------------------------------------
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  // Ring fingers
  case KH_I:
  case KH_R:
  case KH_X:
  case KH_DOT:
    return TAPPING_TERM + 200;
  // Pinkies
  case KH_O:
    return TAPPING_TERM + 200;
  case KH_A:
    return TAPPING_TERM + 200;
  // Middle fingers
  case KH_S:
  case KH_E:
    return TAPPING_TERM - 30;
  // Right thumbs
  case CC_SYSP:
    return TAPPING_TERM - 50;
  case CC_NUTA:
    return TAPPING_TERM - 20;
  // All other keys
  default:
    return TAPPING_TERM;
  }
}
