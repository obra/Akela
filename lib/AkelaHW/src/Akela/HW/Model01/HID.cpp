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

#include "Akela/HW/Model01.h"

M01HID::M01HID () {
}

void
M01HID::press (uint8_t code) {
  kb.press (code);
}

void
M01HID::release (uint8_t code) {
  kb.release (code);
}

void
M01HID::setup () {
  kb.begin ();
}

void
M01HID::loop () {
  kb.sendReport ();
}