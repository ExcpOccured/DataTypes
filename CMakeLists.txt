cmake_minimum_required(VERSION 3.17)
project(DataTypes C)

set(CMAKE_C_STANDARD 11)

add_library(DataTypes SHARED
        src/headers/array.h
        src/sdk/headers/assert.h
        src/array.c
        src/sdk/headers/result.h
        src/sdk/result.c
        tests/check_array.c)

add_subdirectory(tests)