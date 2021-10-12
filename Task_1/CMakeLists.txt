cmake_minimum_required(VERSION 3.20)
project(Task_1)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Task_1 main.cpp container.cpp container.h parallelepiped.cpp parallelepiped.h rnd.h shape.cpp shape.h sphere.cpp sphere.h tetrahedron.cpp tetrahedron.h)
