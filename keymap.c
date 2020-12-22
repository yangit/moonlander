#include QMK_KEYBOARD_H
#include "version.h"
#include "debug.h"
// #include "keymap_german.h"
// #include "keymap_nordic.h"
// #include "keymap_french.h"
// #include "keymap_spanish.h"
// #include "keymap_hungarian.h"
// #include "keymap_swedish.h"
// #include "keymap_br_abnt2.h"
// #include "keymap_canadian_multilingual.h"
// #include "keymap_german_ch.h"
// #include "keymap_jp.h"
// #include "keymap_bepo.h"
// #include "keymap_italian.h"
// #include "keymap_slovenian.h"
// #include "keymap_danish.h"
// #include "keymap_norwegian.h"
// #include "keymap_portuguese.h"
// #include "keymap_contributions.h"
// #include "keymap_czech.h"
// #include "keymap_romanian.h"
// #include "keymap_russian.h"
// #include "keymap_uk.h"
// #include "keymap_estonian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes
{
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_LANG7, KC_LANG8, KC_LANG9, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(6), KC_TRANSPARENT,
        KC_TRANSPARENT, KC_Q, KC_D, KC_R, KC_W, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F, KC_U, KC_P, KC_J, KC_TRANSPARENT,
        KC_ESCAPE, KC_A, KC_S, KC_H, KC_T, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_N, KC_E, KC_O, KC_I, MO(4),
        KC_TAB, KC_Z, KC_X, KC_M, KC_C, KC_TRANSPARENT, KC_TRANSPARENT, KC_L, KC_V, KC_K, KC_B, KC_TRANSPARENT,
        KC_BSPACE, KC_LCTRL, KC_LALT, KC_LGUI, LGUI(KC_SPACE), KC_LSHIFT, MO(10), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        MO(7), MO(2), KC_SPACE, KC_BSPACE, MO(3), KC_RSHIFT),
    [1] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_Z, KC_X, KC_V, KC_C, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_QUOTE, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLASH, KC_LBRACKET, KC_RBRACKET, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(
        KC_BRIGHTNESS_UP, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_NO, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_BRIGHTNESS_DOWN, LGUI(KC_Q), LGUI(KC_W), KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_TRANSPARENT,
        KC_TRANSPARENT, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_TRANSPARENT,
        LSFT(KC_TAB), LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT,
        KC_DELETE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_ENTER, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_SLASH, KC_LPRN, KC_RPRN, KC_MINUS, KC_PLUS, KC_TRANSPARENT, KC_TRANSPARENT, KC_EXLM, KC_QUES, KC_COLN, KC_SCOLON, KC_BSLASH, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_LBRACKET, KC_RBRACKET, KC_LCBR, KC_RCBR, KC_ASTR, KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD, KC_DOT, KC_COMMA, KC_DQUO, KC_QUOTE, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_DLR, KC_LABK, KC_EQUAL, KC_RABK, KC_AT, KC_PIPE, KC_HASH, KC_UNDS, KC_AMPR, KC_GRAVE, KC_NO,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(11), KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC, KC_PERC, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [4] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_7, KC_8, KC_9, KC_KP_SLASH, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_C, KC_4, KC_5, KC_6, KC_KP_ASTERISK, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_ENTER, KC_1, KC_2, KC_3, KC_KP_MINUS, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_DOT, KC_0, KC_KP_EQUAL, KC_KP_PLUS, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [5] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LSFT(KC_Q), LSFT(KC_D), LSFT(KC_R), LSFT(KC_W), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_F), LSFT(KC_U), LSFT(KC_P), LSFT(KC_J), KC_TRANSPARENT,
        KC_TRANSPARENT, LSFT(KC_A), LSFT(KC_S), LSFT(KC_H), LSFT(KC_T), LSFT(KC_G), KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_Y), LSFT(KC_N), LSFT(KC_E), LSFT(KC_O), LSFT(KC_I), KC_TRANSPARENT,
        KC_TRANSPARENT, LSFT(KC_Z), LSFT(KC_X), LSFT(KC_M), LSFT(KC_C), KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_L), LSFT(KC_V), LSFT(KC_K), LSFT(KC_B), KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [6] = LAYOUT_moonlander(
        KC_TRANSPARENT, RGB_SLD, RGB_MOD, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, TOGGLE_LAYER_COLOR, RGB_TOG, RGB_SPD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, AU_OFF, AU_ON, AU_TOG, WEBUSB_PAIR, RESET, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        TO(13), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [7] = LAYOUT_moonlander(
        KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Z))), LALT(LCTL(LGUI(LSFT(KC_X)))), LALT(LCTL(LGUI(LSFT(KC_M)))), LALT(LCTL(LGUI(LSFT(KC_C)))), LALT(LCTL(LSFT(KC_B))), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(KC_LBRACKET), LCTL(KC_TAB), LGUI(KC_GRAVE), LCTL(KC_G), LCTL(KC_KP_0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, KC_KP_9, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_ENTER, KC_TRANSPARENT, MO(8), KC_TRANSPARENT, KC_TRANSPARENT),
    [8] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(KC_RBRACKET), LCTL(LSFT(KC_TAB)), LGUI(LSFT(KC_GRAVE)), LCTL(LSFT(KC_G)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [9] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [10] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(11), KC_TRANSPARENT),
    [11] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(KC_SLASH), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [12] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLASH, KC_LBRACKET, KC_RBRACKET, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [13] = LAYOUT_moonlander(
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(14), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(13), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15)),
    [14] = LAYOUT_moonlander(
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), KC_TRANSPARENT, MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        TO(0), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15), MO(15),
        MO(15), MO(15), MO(15), MO(15), MO(15), MO(15)),
    [15] = LAYOUT_moonlander(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void)
{
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{0, 0, 0}, {0, 0, 0}, {134, 255, 213}, {134, 255, 213}, {134, 255, 213}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {105, 255, 255}, {31, 255, 255}, {146, 224, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {249, 228, 255}, {146, 224, 255}, {249, 228, 255}},

    [1] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}},

    [2] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 255, 255}, {31, 255, 255}, {35, 255, 255}, {31, 255, 255}, {31, 255, 255}, {31, 255, 255}, {0, 0, 0}, {35, 255, 255}, {31, 255, 255}, {31, 255, 255}, {31, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 255, 255}, {31, 255, 255}, {0, 0, 0}, {31, 255, 255}, {0, 0, 0}, {31, 255, 255}, {31, 255, 255}, {0, 0, 0}, {31, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 255, 255}, {31, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {32, 255, 234}, {146, 224, 255}, {32, 255, 234}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {85, 203, 158}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {32, 255, 234}, {0, 0, 0}, {0, 0, 0}, {0, 183, 238}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [6] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 183, 238}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 255, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {141, 255, 233}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {141, 255, 233}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {141, 255, 233}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {10, 225, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [7] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {0, 0, 0}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {0, 0, 0}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {0, 0, 0}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {0, 0, 0}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [8] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {105, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {105, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {105, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {105, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [11] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {105, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [12] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}},

};

void set_layer_color(int layer)
{
  for (int i = 0; i < DRIVER_LED_TOTAL; i++)
  {
    HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][i][0]),
        .s = pgm_read_byte(&ledmap[layer][i][1]),
        .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v)
    {
      rgb_matrix_set_color(i, 0, 0, 0);
    }
    else
    {
      RGB rgb = hsv_to_rgb(hsv);
      float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
      rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
    }
  }
}

void rgb_matrix_indicators_user(void)
{
  if (g_suspend_state || keyboard_config.disable_layer_led)
  {
    return;
  }
  switch (biton32(layer_state))
  {
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
  case 6:
    set_layer_color(6);
    break;
  case 7:
    set_layer_color(7);
    break;
  case 8:
    set_layer_color(8);
    break;
  case 11:
    set_layer_color(11);
    break;
  case 12:
    set_layer_color(12);
    break;
  default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

//
#define SHIFT_ANY (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define CTRL_ANY (MOD_BIT(KC_LCTRL) | MOD_BIT(KC_RCTRL))
#define ALT_ANY (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))
#define GUI_ANY (MOD_BIT(KC_LGUI) | MOD_BIT(KC_RGUI))

bool smart_rus_enabled = false;
bool smart_rus_osm = false;
bool smart_rus_first_after = false;
int smart_rus_disable_counter = 0;

void smart_rus_toggle(keyrecord_t *record)
{
  if (smart_rus_enabled)
  {
    if (record->event.pressed)
    {
      if (smart_rus_disable_counter == 0)
      {
        SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
      }
      smart_rus_disable_counter++;
    }
    else
    {
      smart_rus_disable_counter--;
      if ((smart_rus_disable_counter == 0) & !smart_rus_osm)
      {
        SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
      }
    }
    xprintf("A,%d,c%02d,r%02d,%d,%d,%d\n", record->event.pressed, record->event.key.col, record->event.key.row, smart_rus_enabled, smart_rus_disable_counter, smart_rus_osm);
  }
}

void smart_rus_toggle_mod(uint16_t keycode, keyrecord_t *record)
{
  if (record->event.pressed)
  {
    smart_rus_toggle(record);
    register_code(keycode);
  }
  else
  {
    unregister_code(keycode);
    smart_rus_toggle(record);
  }
}

void oneshot_mods_changed_user(uint8_t mods)
{
  if (mods & (GUI_ANY | ALT_ANY | CTRL_ANY | SHIFT_ANY))
  {
    println("Oneshot mods");
    if (smart_rus_enabled)
    {
      smart_rus_osm = true;
    }
  }
  if (!mods)
  {
    println("Oneshot mods off");
    if (smart_rus_enabled)
    {
      smart_rus_osm = false;
      smart_rus_first_after = true;
    }
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  xprintf("B,%d,c%02d,r%02d,%d,%d,%d,%d\n", record->event.pressed, record->event.key.col, record->event.key.row, smart_rus_enabled, smart_rus_disable_counter, smart_rus_osm, smart_rus_first_after);
  if (smart_rus_first_after & !record->event.pressed)
  {
    smart_rus_first_after = false;
    unregister_code(keycode);
    xprintf("smart_rus_first_after");
    SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
    return false;
  }
  switch (keycode)
  {
  case RGB_SLD:
    if (record->event.pressed)
    {
      rgblight_mode(1);
    }
    return false;
  case KC_BSPACE:
    if (record->event.pressed)
    {
      if (get_mods() & SHIFT_ANY)
      {
        register_code(KC_DEL);
      }
      else
      {
        register_code(KC_BSPACE);
      }
    }
    else
    {
      unregister_code(KC_DEL);
      unregister_code(KC_BSPACE);
    }
    return false;
  case KC_LANG9: // QWERTY
    if (record->event.pressed)
    {
      // press
      if (smart_rus_enabled)
      {
        SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
      }
      smart_rus_enabled = false;
      smart_rus_disable_counter = 0;
      layer_off(1);
      layer_on(12);
    }
    else
    {
      // release
    }
    return false; // Skip all further processing of this key
  case KC_LANG7:  // English
    if (record->event.pressed)
    {
      // press
      if (smart_rus_enabled)
      {
        SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
      }
      smart_rus_enabled = false;
      smart_rus_disable_counter = 0;
      layer_off(1);
      layer_off(12);
    }
    else
    {
      // release
    }
    return false; // Skip all further processing of this key
  case KC_LANG8:  // Russian
    if (record->event.pressed)
    {
      // press
      if (!smart_rus_enabled)
      {
        SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
      }
      smart_rus_enabled = true;
      smart_rus_disable_counter = 0;
      layer_on(1);
      layer_off(12);
    }
    else
    {
      // release
    }
    return false; // Skip all further processing of this key
  case MO(2):
    smart_rus_toggle(record);
    return true;
  case MO(3):
    smart_rus_toggle(record);
    return true;
  case MO(4):
    smart_rus_toggle(record);
    return true;
  case MO(7):
    smart_rus_toggle(record);
    return true;
  case KC_LCTRL:
  case KC_RCTRL:
  case KC_LALT:
  case KC_RALT:
  case KC_LGUI:
  case KC_RGUI:
    smart_rus_toggle_mod(keycode, record);
    return false;
  }
  return true;
}
