cmake_minimum_required(VERSION 3.21)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c cmake-build-debug/math.c cmake-build-debug/math.h)
