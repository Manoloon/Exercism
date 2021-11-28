cmake_minimum_required(VERSION 3.20)
project(Exercism)

set(CMAKE_CXX_STANDARD 20)

add_executable(Exercism main.cpp Src/space_age.cpp Src/space_age.h)
