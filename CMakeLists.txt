cmake_minimum_required(VERSION 3.17)
project(DataTypes C)

set(CMAKE_C_STANDARD 11)

add_library(DataTypes SHARED src/library.c src/library.h)