/*
   hm_lobbyserver - HearthStone HearthMod lobbyserver
   Copyright (C) 2016 Filip Pancik

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdarg.h>
#include <memory.h>
#include <malloc.h>
#include <stdlib.h>

int step16_0(char *dst, int ndst) {const char src[13] = { 0x00, 0x0B, 0x08, 0xFE, 0x01, 0x18, 0x1F, 0x20, 0x00, 0x28, 0x00, 0x30, 0x00, };
if(ndst >= 13) { memcpy(dst, src, 13); } else { abort(); }
return 13;}
int step16_1(char *dst, int ndst) {const char src[64] = { 0x00, 0x0C, 0x08, 0x05, 0x10, 0x06, 0x18, 0x3F, 0x20, 0x02, 0x28, 0x32, 0x30, 0x00, 0x12, 0x30, 0xAA, 0x06, 0x2D, 0x0A, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x12, 0x17, 0x0A, 0x15, 0x0A, 0x0A, 0x08, 0xC7, 0x86, 0xD1, 0xBA, 0x05, 0x10, 0x02, 0x18, 0x11, 0x12, 0x07, 0x32, 0x05, 0x01, 0x03, 0x00, 0x00, 0x00, };
if(ndst >= 64) { memcpy(dst, src, 64); } else { abort(); }
return 64;}
int step16_2(char *dst, int ndst) {const char src[57] = { 0x00, 0x0B, 0x08, 0xFE, 0x01, 0x18, 0x20, 0x20, 0x00, 0x28, 0x2C, 0x30, 0x00, 0x0D, 0x55, 0x45, 0x00, 0x00, 0x15, 0x73, 0x73, 0x68, 0x00, 0x1A, 0x20, 0xBE, 0xC5, 0x29, 0x22, 0x31, 0xD7, 0x68, 0x6A, 0xF0, 0x0C, 0xE6, 0x4E, 0x0C, 0x58, 0xCC, 0x6E, 0x36, 0x0E, 0xA9, 0x50, 0xAA, 0xFF, 0xAC, 0x6A, 0x11, 0x4F, 0x03, 0xA9, 0x58, 0xE2, 0x75, 0xF3, };
if(ndst >= 57) { memcpy(dst, src, 57); } else { abort(); }
return 57;}
