/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 3500

#undef RGBLIGHT_HUE_STEP
#define RGBLIGHT_HUE_STEP 6

#undef RGBLIGHT_BRI_STEP
#define RGBLIGHT_BRI_STEP 6

#define FIRMWARE_VERSION u8"rOb5l/LpGQL"
#define RGB_MATRIX_STARTUP_SPD 60
