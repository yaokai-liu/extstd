/**
 * License
 *
 * LMP - A Lite Multiple Precision Arithmetic Library
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
 * Project Name: LMP
 * Module Name:
 * Filename: extvisibility.h
 * Creator: Yaokai Liu
 * Create Date: 2026-11-21
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef EXTSTD_VISIBILITY_H
#define EXTSTD_VISIBILITY_H

#if defined(_WIN32) || defined(__CYGWIN__)
  #ifdef _SHARED_LIB_
    #define _SHARED_API __declspec(dllexport)
  #else
    #define _SHARED_API __declspec(dllimport)
  #endif
  #ifdef _TEST_LOCAL_API_
    #define _LOCAL_API  __declspec(dllexport)
  #else
    #define _LOCAL_API
  #endif
#elif defined(__GNUC__) && __GNUC__ >= 4
  #ifdef _SHARED_LIB_
    #define _SHARED_API  __attribute__((visibility("default")))
    #ifdef _TEST_LOCAL_API_
      #define _LOCAL_API __attribute__((visibility("default")))
    #else
      #define _LOCAL_API __attribute__((visibility("hidden")))
    #endif
  #else
    #define _SHARED_API
    #define _LOCAL_API
  #endif
#else
  #define _SHARED_API
  #define _LOCAL_API
#endif

#endif //EXTSTD_VISIBILITY_H
