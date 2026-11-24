cmake_minimum_required(VERSION 4.3)
project(extstd C)

set(CMAKE_C_STANDARD 23)
if(NOT CMAKE_ARCHIVE_OUTPUT_DIRECTORY)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output)
endif ()
if(NOT CMAKE_LIBRARY_OUTPUT_DIRECTORY)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output)
endif ()
if(NOT CMAKE_RUNTIME_OUTPUT_DIRECTORY)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output)
endif ()
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

add_compile_options("-flto")
add_compile_options("-O3" "-Os")
add_compile_options("-Wall" "-Wextra" "-Werror")

include_directories(include)

file(GLOB_RECURSE EXTSTD_SRC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} src/*.c src/*.h)
add_library(extstd SHARED ${EXTSTD_SRC})
target_compile_definitions(extstd PRIVATE "_SHARED_LIB_")
