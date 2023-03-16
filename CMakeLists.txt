cmake_minimum_required(VERSION 3.24)
project(find_replace)

set(CMAKE_CXX_STANDARD 17)

add_executable(find_replace main.cpp Functions.cpp Functions.h)

add_subdirectory(tests)
