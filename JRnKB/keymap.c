#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_245_245,
  HSV_74_255_206,
  HSV_152_255_255,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           DE_ACUT,                                        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DE_SS,          KC_BSPC,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           DE_Z,                                           KC_T,           DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_PLUS,
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           DE_HASH,        KC_ENTER,
    KC_LEFT_SHIFT,  DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,
    KC_LEFT_CTRL,   DE_LESS,        KC_LEFT_GUI,    KC_LEFT_ALT,    KC_SPACE,       LT(3, DE_HASH),                                                                                                 KC_SPACE,       KC_RIGHT_ALT,   KC_RIGHT_SHIFT, MO(1),          KC_RIGHT_GUI,   KC_RIGHT_CTRL,
    LT(4, KC_SPACE),KC_BSPC,        LT(1, KC_SPACE),                TG(2),          KC_DELETE,      LT(1, KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    DE_CIRC,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F12,                                         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_F5,          KC_NO,          KC_NO,                                          KC_NO,          KC_WWW_BACK,    KC_PAUSE,       KC_INSERT,      KC_WWW_FORWARD, KC_PSCR,        KC_DELETE,
    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_UP,KC_NO,          KC_NO,                                          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NUM,         KC_KP_EQUAL,    KC_KP_SLASH,    KC_KP_ASTERISK, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_DELETE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT,
    KC_TRANSPARENT, TOGGLE_LAYER_COLOR,HSV_0_245_245,  HSV_74_255_206, HSV_152_255_255,RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_KP_COMMA,    KC_KP_0,        KC_KP_DOT,      KC_NO,          KC_TRANSPARENT,
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                KC_TRANSPARENT, RGB_HUD,        RGB_HUI
  ),
  [3] = LAYOUT_moonlander(
    AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 MOON_LED_LEVEL, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    MU_NEXT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_NO,          DE_UE,          KC_NO,          DE_OE,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, DE_AE,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {43,94,255}, {43,94,255}, {43,94,255}, {243,208,249}, {139,218,205}, {43,94,255}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {43,94,255}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {43,94,255}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {43,94,255}, {43,94,255}, {43,94,255}, {243,208,249}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {139,218,205}, {243,208,249}, {139,218,205}, {243,208,249}, {139,218,205}, {243,208,249}, {139,218,205}, {243,208,249}, {43,94,255}, {243,208,249}, {243,208,249}, {139,218,205}, {139,218,205}, {41,255,255}, {43,94,255}, {243,208,249}, {139,218,205}, {139,218,205}, {41,255,255}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {41,255,255}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {43,94,255}, {43,94,255}, {43,94,255}, {139,218,205}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {0,0,0}, {139,218,205} },

    [1] = { {243,208,249}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {43,94,255}, {243,208,249}, {43,94,255}, {43,94,255}, {139,218,205}, {243,208,249}, {243,208,249}, {43,94,255}, {43,94,255}, {139,218,205}, {43,94,255}, {243,208,249}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {0,0,0}, {243,208,249}, {243,208,249}, {0,0,0}, {139,218,205}, {43,94,255}, {243,208,249}, {243,208,249}, {139,218,205}, {139,218,205}, {43,94,255}, {243,208,249}, {243,208,249}, {139,218,205}, {139,218,205}, {0,0,0}, {243,208,249}, {243,208,249}, {139,218,205}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {0,0,0}, {139,218,205} },

    [2] = { {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {43,94,255}, {43,94,255}, {43,94,255}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {74,255,206}, {243,208,249}, {74,255,206}, {139,218,205}, {0,0,0}, {243,208,249}, {0,0,255}, {0,0,255}, {0,0,255}, {139,218,205}, {139,218,205}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,208,249}, {0,0,255}, {0,0,255}, {0,0,255}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {43,94,255}, {0,0,0}, {43,94,255} },

    [3] = { {243,208,249}, {243,208,249}, {243,208,249}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,208,249}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,208,249}, {0,0,0}, {0,0,0}, {243,208,249}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,94,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_245_245:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,245,245);
        }
        return false;
    case HSV_74_255_206:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(74,255,206);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
  }
  return true;
}



// Custom QMK here
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
	NULL
};
