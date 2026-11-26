cmake_minimum_required(VERSION 4.3)
project(extstd VERSION 0.0.1 LANGUAGES C)

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
add_library(${PROJECT_NAME} SHARED ${EXTSTD_SRC})
target_compile_definitions(${PROJECT_NAME} PRIVATE "_SHARED_LIB_")
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
include(${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules/InstallCLibrary.cmake)
setup_c_library_install(${PROJECT_NAME})
