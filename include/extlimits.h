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
 * Filename: extlimit.h
 * Creator: Yaokai Liu
 * Create Date: 2026-11-28
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef EXTSTD_EXTLIMITS_H
#define EXTSTD_EXTLIMITS_H
#include <extint.h>
#include <limits.h>

#define UINT_TYPE_MAX(x) _Generic((x),      \
    unsigned char:              UCHAR_MAX,  \
    unsigned short:             USHRT_MAX,  \
    unsigned int:                UINT_MAX,  \
    unsigned long:              ULONG_MAX,  \
    unsigned long long:        ULLONG_MAX,  \
    uint128_t:                UINT128_MAX,  \
    uint256_t:                UINT256_MAX   \
)
#define INT_TYPE_MAX(x) _Generic((x),       \
    signed char:                SCHAR_MAX,  \
    short:                       SHRT_MAX,  \
    int:                          INT_MAX,  \
    long:                        LONG_MAX,  \
    long long:                  LLONG_MAX,  \
    int128_t:                  INT128_MAX,  \
    int256_t:                  INT256_MAX   \
)
#define INT_TYPE_MIN(x) _Generic((x),       \
    signed char:                SCHAR_MIN,  \
    short:                       SHRT_MIN,  \
    int:                          INT_MIN,  \
    long:                        LONG_MIN,  \
    long long:                  LLONG_MIN,  \
    int128_t:                  INT128_MIN,  \
    int256_t:                  INT256_MIN   \
)

#endif //EXTSTD_EXTLIMITS_H
