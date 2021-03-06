/*
 * Akela -- Animated Keyboard Extension Library for Arduino
 * Copyright (C) 2016  Gergely Nagy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

enum {
  KC_NO = 0,
  KC_A = 0x04,
  KC_B,
  KC_C,
  KC_D,
  KC_E,
  KC_F,
  KC_G,
  KC_H,
  KC_I,
  KC_J,
  KC_K,
  KC_L,
  KC_M,
  KC_N,
  KC_O,
  KC_P,
  KC_Q,
  KC_R,
  KC_S,
  KC_T,
  KC_U,
  KC_V,
  KC_W,
  KC_X,
  KC_Y,
  KC_Z,

  KC_1 = 0x1E,
  KC_2,
  KC_3,
  KC_4,
  KC_5,
  KC_6,
  KC_7,
  KC_8,
  KC_9,
  KC_0,

  KC_ENT,
  KC_ESC,
  KC_BSPC,
  KC_TAB,
  KC_SPC,
  KC_MINS,
  KC_EQL,
  KC_LBRC,
  KC_RBRC,
  KC_BSLS,

  KC_SCLN = 0x033,
  KC_QUOT,
  KC_GRV,
  KC_COMM,
  KC_DOT,
  KC_SLSH,

  KC_CAPS,

  KC_F1,
  KC_F2,
  KC_F3,
  KC_F4,
  KC_F5,
  KC_F6,
  KC_F7,
  KC_F8,
  KC_F9,
  KC_F10,
  KC_F11,
  KC_F12,

  KC_PRSCR,
  KC_SCLK,
  KC_PAUSE,
  KC_INS,
  KC_HOME,
  KC_PGUP,
  KC_DEL,
  KC_END,
  KC_PGDN,
  KC_RGHT,
  KC_LEFT,
  KC_DOWN,
  KC_UP,

  KC_KPSLSH = 0x54,
  KC_KPSTAR,
  KC_KPMINS,
  KC_KPPLUS,
  KC_KPENT,
  KC_KP1,
  KC_KP2,
  KC_KP3,
  KC_KP4,
  KC_KP5,
  KC_KP6,
  KC_KP7,
  KC_KP8,
  KC_KP9,
  KC_KP0,
  KC_KPDOT,

  KC_RET = 0x9E,

  KC_LCTL = 0xE0,
  KC_LSFT,
  KC_LALT,
  KC_LGUI,
  KC_RCTL,
  KC_RSFT,
  KC_RALT,
  KC_RGUI,

  KC_TRNS = 0xffff
};

enum {
  MOD_LCTL   = 0x0100,
  MOD_LSFT   = 0x0200,
  MOD_LALT   = 0x0400,
  MOD_LGUI   = 0x0800,

  MOD_RCTL   = 0x1000,
  MOD_RSFT   = 0x2000,
  MOD_RALT   = 0x4000,

  MOD_FN     = 0x8000,
  MOD_FN_SYS = 0x4000,
};

#define LCTL(kc) (kc | MOD_LCTL)
#define LSFT(kc) (kc | MOD_LSFT)
#define LALT(kc) (kc | MOD_LALT)
#define LGUI(kc) (kc | MOD_LGUI)
#define RCTL(kc) (kc | MOD_RCTL)
#define RSFT(kc) (kc | MOD_RSFT)
#define RALT(kc) (kc | MOD_RALT)
#define FN(kc)   (kc | MOD_FN)

#define KEYCODE(kc) (kc & ~0xff00)

#define IS_LCTL(kc) (kc & MOD_LCTL)
#define IS_LSFT(kc) (kc & MOD_LSFT)
#define IS_LALT(kc) (kc & MOD_LALT)
#define IS_LGUI(kc) (kc & MOD_LGUI)
#define IS_RCTL(kc) (kc & MOD_RCTL)
#define IS_RSFT(kc) (kc & MOD_RSFT)
#define IS_RALT(kc) (kc & MOD_RALT)
#define IS_FN(kc)   (kc & MOD_FN)

#define IS_FNSYS(kc) ((kc & MOD_FN) && (kc & MOD_FN_SYS))

// ---------------
#define KC_PIPE  LSFT(KC_BSLS)
#define KC_LCBRC LSFT(KC_LBRC)
#define KC_RCBRC LSFT(KC_RBRC)
