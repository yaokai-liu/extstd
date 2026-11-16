/**
* License
 *
 * extstd - Extend Library For Standard C (C23 mainly)
 * Copyright (C) 2026 Yaokai Liu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * Project Name: extstd
 * Module Name:
 * Filename: allocator.c
 * Creator: Yaokai Liu
 * Create Date: 2026-11-16
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#include "../include/allocator.h"
#include <malloc.h>
#include <string.h>

const Allocator STDAllocator = {
  .malloc = malloc,
  .realloc = realloc,
  .calloc = calloc,
  .free = free,
  .memcpy = memcpy,
  .memset = memset
};
