cmake_minimum_required(VERSION 3.17)
project(DataTypes C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

###############################################################################
# Set build features
set(CMAKE_BUILD_TYPE Debug)

###############################################################################
include(CheckCSourceCompiles)
include(CheckCSourceRuns)
include(CheckFunctionExists)
include(CheckIncludeFile)
include(CheckIncludeFiles)
include(CheckLibraryExists)
include(CheckSymbolExists)
include(CheckTypeSize)

add_library(DataTypes SHARED
        src/headers/array.h
        src/sdk/headers/assert.h
        src/array.c
        src/sdk/headers/result.h
        src/sdk/result.c
        tests/check_array.c)

add_subdirectory(tests)

###############################################################################
# Unit tests
enable_testing()
add_test(NAME check_array COMMAND check_array)