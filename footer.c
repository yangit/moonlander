
//Footer start
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
        layer_off(1);
        SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
      }
      smart_rus_disable_counter++;
    }
    else
    {
      smart_rus_disable_counter--;
      if ((smart_rus_disable_counter == 0) & !smart_rus_osm)
      {
        layer_on(1);
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
      layer_off(1);
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
    xprintf("smart_rus_first_after\n");
    SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
    layer_on(1);
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
      smart_rus_osm = false;
      smart_rus_first_after = false;
      layer_off(1);
      layer_on(12);
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
      smart_rus_osm = false;
      smart_rus_first_after = false;
      layer_off(1);
      layer_off(12);
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
      smart_rus_osm = false;
      smart_rus_first_after = false;
      layer_on(1);
      layer_off(12);
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
// Footer end