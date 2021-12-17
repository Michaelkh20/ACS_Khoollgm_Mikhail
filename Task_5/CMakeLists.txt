cmake_minimum_required(VERSION 3.21)
project(Task_5)

set(CMAKE_CXX_STANDARD 17)

SET(CMAKE_CXX_FLAGS -pthread)

add_executable(Task_5 main.cpp Monk.h State.h Competition.h)
