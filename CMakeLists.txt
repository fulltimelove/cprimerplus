cmake_minimum_required(VERSION 3.16)
project(cprimerplus C)

set(CMAKE_C_STANDARD 99)

add_executable(cprimerplus main.c c1/c1.h c1/c1.c headers.h c2/c2.h c2/c2.c)