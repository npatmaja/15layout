#pragma once

#include QMK_KEYBOARD_H

#include "quantum.h"


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
/* #define KH_G HYPR_T(KC_G)          // G / Hyper */
/* #define KH_M HYPR_T(KC_M)          // M / Hyper */

// left thumbs (left to right): space, tab
// right thumbs (left to right): enter, backspace

// - Thumbs keys/modifiers:
#define CC_SYSP LT(_SYMB, KC_SPC)     // Space / _symbols
/* #define KC_FUEN LT(_FUNC, KC_ENT)     // Enter / _functions */
#define CC_NUTA LT(_NUMB, KC_TAB)     // Tab / _numbers
#define CC_NABS LT(_NAVI, KC_BSPC)    // Backspace / _navigation
// #define CC_MOES LT(_MOUS, KC_ESC)     // Esc / _mouse => Consider not using as I dont use ESC that much. ESC can be put on the _NAVI layer
#define CC_MOEN LT(_MOUS, KC_ENT)			// Enter / _mouse

// - Layers
// OSL => Switch to `layer` for one keypress
#define CC_LFUN OSL(_FUNC)
#define CC_LWSP OSL(_WSPC)
#define CC_LADJ OSL(_ADJUST)

// - Toggle layers:
/* #define TG_NUM TG(_NUMB) */
/* #define TG_NAV TG(_NAVI) */

// - Tap dance keys:
/* #define TD_DCMO TD(DANCE_1) */
/* #define TD_DGMO TD(DANCE_1) */
#define TD_SCLN TD(DANCE_2)
/* #define TD_LBRC TD(DANCE_3) */
/* #define TD_RBRC TD(DANCE_4) */

// - Awesome WM macros:
// LGUI(kc) => Hold Left GUI and press `kc`
#define KC_AW1 LGUI(KC_1)
#define KC_AW2 LGUI(KC_2)
#define KC_AW3 LGUI(KC_3)
#define KC_AW4 LGUI(KC_4)
#define KC_AW5 LGUI(KC_5)
#define KC_AW6 LGUI(KC_6)
#define KC_AW7 LGUI(KC_7)
#define KC_AW8 LGUI(KC_8)
#define KC_AW9 LGUI(KC_9)

// - Clipboard, Undo/Redo and "select all" (should work almost everywhere, including Emacs)
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)                         \
//#define U_UND KC_UNDO
//#define U_RDO KC_AGIN
#define U_UND LCTL(KC_Z) // Doesn't work on Emacs
#define U_RDO LCTL(LSFT(KC_Z)) // Doesn't work on Emacs
/* #define U_ALL C(KC_A) // Emacs need to rebind mark-whole-buffer to: C-a */

// - Macros
#define CC_BTAB RCS(KC_TAB)
#define CC_NTAB C(KC_TAB)
#define CC_WLSEL RCS(KC_LEFT)
#define CC_WLMOV C(KC_LEFT)
#define CC_WRSEL RCS(KC_RGHT)
#define CC_WRMOV C(KC_RGHT)

// - Tap dance codes
enum tap_dance_codes {
  /* DANCE_1, // Tab (single), Ctrl (hold), Mouse layer (double hold) */
  DANCE_2, // Semicolon (single), Colon (double)
  /* DANCE_3, // Left Bracket (single), Left Brace (double) */
  /* DANCE_4  // Right Bracket (single), Left Brace (double) */
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
  ASC_DDS, // consider replace this with ASC_CEQ in the keymap.c
  ASC_SSL,
	ASC_CEQ
};

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
        // SS_RALT(): Avoid sending dead key on software intl layouts
        SEND_STRING(SS_RALT("'"));
        return false;
      case ASC_DQT:
        // SS_RALT(SS_LSFT()): Avoid sending dead key on software intl layouts
        SEND_STRING(SS_RALT(SS_LSFT("\"")));
        return false;
      case ASC_CIRC:
        // SS_RALT(): Avoid sending dead key on software intl layouts
        SEND_STRING(SS_RALT("^"));
        return false;
      case ASC_TILD:
        // SS_RALT(SS_LSFT()): Avoid sending dead key on software intl layouts
        SEND_STRING(SS_RALT(SS_LSFT("~")));
        return false;
      /* case ASC_HAP: */
      /*   SEND_STRING(":-) "); */
      /*   return false; */
      /* case ASC_SAD: */
      /*   SEND_STRING(":-( "); */
      /*   return false; */
      case ASC_BKT:
        // SS_RALT(): Avoid sending dead key on software intl layouts
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
};


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
  /* case KC_FUEN: */
    return TAPPING_TERM - 20;

  // All other keys
  default:
    return TAPPING_TERM;
  }
}
