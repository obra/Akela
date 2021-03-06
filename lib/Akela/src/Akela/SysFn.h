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

#define SYSFN(n) (n + (MOD_FN | MOD_FN_SYS))

namespace Akela {
  enum {
    SYSFN_LAYER_MOMENTARY     = SYSFN(0x0000),
    SYSFN_LAYER_MOMENTARY_MAX = SYSFN(0x000f),
    SYSFN_LAYER_MOVE          = SYSFN(0x0010),
    SYSFN_LAYER_MOVE_MAX      = SYSFN(0x001f),

    SYSFN_FNMACRO             = SYSFN(0x0020),
    SYSFN_FNMACRO_MAX         = SYSFN(0x0050),

    SYSFN_SAFE,
  };
};
