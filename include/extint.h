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
 * Filename: extint.h
 * Creator: Yaokai Liu
 * Create Date: 2026-11-01
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef EXTSTD_EXTINT_H
#define EXTSTD_EXTINT_H
#include <stdint.h>

#ifndef INT128_T_DEFINED
typedef _BitInt(128) int128_t;
#define INT128_T_DEFINED  "_BitInt(128)"
#endif
#ifndef UINT128_T_DEFINED
typedef unsigned _BitInt(128) uint128_t;
#define UINT128_T_DEFINED  "unsigned _BitInt(128)"
#endif

#ifndef INT256_T_DEFINED
typedef _BitInt(256) int256_t;
#define INT256_T_DEFINED  "_BitInt(256)"
#endif
#ifndef UINT256_T_DEFINED
typedef unsigned _BitInt(256) uint256_t;
#define UINT256_T_DEFINED  "unsigned _BitInt(256)"
#endif

#ifndef UINT128_MAX
#define UINT128_MAX ((((uint128_t)UINT64_MAX) << 64) | UINT64_MAX)
#endif
#ifndef INT128_MAX
#define INT128_MAX  ((((int128_t)INT64_MAX) << 64) | UINT64_MAX)
#endif
#ifndef INT128_MIN
#define INT128_MIN  ((int128_t)((uint128_t)1 << 127))
#endif
#ifndef UINT256_MAX
#define UINT256_MAX ((((uint256_t)UINT128_MAX) << 128) | UINT128_MAX)
#endif
#ifndef INT256_MAX
#define INT256_MAX  ((((int256_t)INT128_MAX) << 128) | UINT128_MAX)
#endif
#ifndef INT256_MIN
#define INT256_MIN  ((int256_t)((uint256_t)1 << 255))
#endif

#endif //EXTSTD_EXTINT_H
