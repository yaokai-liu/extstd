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
 * Filename: allocator.h
 * Creator: Yaokai Liu
 * Create Date: 2026-11-16
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef EXTSTD_ALLOCATOR_H
#define EXTSTD_ALLOCATOR_H
#include <extvisibility.h>
#include <stddef.h>

#define REFER(T) /*VirtAddr*/ T *

typedef struct Allocator {
  void *(* const malloc)(size_t size);
  void *(* const realloc)(void *ptr, size_t size);
  void *(* const calloc)(size_t count, size_t size);
  void *(* const aligned_alloc)(size_t alignment, size_t size);
  void  (* const free)(void *ptr);
  void *(* const memcpy)(void * restrict dest, const void * restrict src, size_t size);
  void *(* const memset)(void *dest, int value, size_t size);
} Allocator;

extern _SHARED_API const Allocator STDAllocator;

typedef void destruct_t(void *, const Allocator *);

#endif  // EXTSTD_ALLOCATOR_H
