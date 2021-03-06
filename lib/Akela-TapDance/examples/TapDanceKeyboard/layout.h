/* -*- mode: c++ -*-
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

#define KC_NIY KC_NO

enum {
  _BASE,
  _FN,
};

static const uint16_t keymap[][64] PROGMEM = {
  [_BASE] = KEYMAP (
  // left hand

   KC_NIY     ,KC_1       ,KC_2       ,KC_3       ,KC_4       ,KC_5       ,TD(0)
  ,KC_GRV     ,KC_Q       ,KC_W       ,KC_E       ,KC_R       ,KC_T
  ,KC_PGUP    ,KC_A       ,KC_S       ,KC_D       ,KC_F       ,KC_G       ,KC_TAB
  ,KC_PGDN    ,KC_Z       ,KC_X       ,KC_C       ,KC_V       ,KC_B       ,KC_ESC

                   ,OSM(LCTL)  ,KC_BSPC    ,OSM(LGUI)  ,OSM(LSFT)
                               ,OSL(_FN)

   // right hand

   ,KC_NO      ,KC_6       ,KC_7       ,KC_8       ,KC_9       ,KC_0       ,KC_NO
               ,KC_Y       ,KC_U       ,KC_I       ,KC_O       ,KC_P       ,KC_EQL
   ,KC_ENT     ,KC_H       ,KC_J       ,KC_K       ,KC_L       ,KC_SCLN    ,KC_QUOT
   ,KC_NO      ,KC_N       ,KC_M       ,KC_COMM    ,KC_DOT     ,KC_SLSH    ,KC_MINS

                   ,OSM(RSFT)  ,OSM(RALT)  ,KC_SPC     ,OSM(RCTL)
                               ,OSL(_FN)
  ),
  [_FN] = KEYMAP (
    KC_NIY     ,KC_F1      ,KC_F2      ,KC_F3      ,KC_F4      ,KC_F5      ,KC_NO
   ,KC_TAB     ,MB_MID     ,MM_UP      ,KC_NO      ,MW_NW      ,MW_NE
   ,KC_HOME    ,MM_L       ,MM_DN      ,MM_R       ,MW_SW      ,MW_SE      ,KC_NO
   ,KC_END     ,KC_Z       ,KC_X       ,KC_C       ,KC_V       ,MW_END     ,CC_NXT

   ,KC_LCTL    ,MB_LFT     ,KC_LGUI    ,KC_LSFT
   ,L(0)

   ,KC_NO      ,KC_F6      ,KC_F7      ,KC_F8      ,KC_F9      ,L(0)       ,KC_NO
               ,CC_PLPS    ,KC_LCBRC   ,KC_RCBRC   ,KC_LBRC    ,KC_RBRC    ,SC_SLP
   ,KC_DEL     ,KC_LEFT    ,KC_DOWN    ,KC_UP      ,KC_RGHT    ,KC_F11     ,KC_F12
   ,KC_NO      ,CC_VDN     ,CC_VUP     ,KC_BLDN    ,KC_BLUP    ,KC_BSLS    ,KC_PIPE

   ,KC_RSFT    ,KC_RALT    ,MB_RGT     ,KC_RCTL
   ,L(0)
  ),
};
