cmake_minimum_required(VERSION 3.0.0)
project("Hungarian Algorithm")

set(CMAKE_CXX_STANDARD 11)
add_library(hungarian hungarian.cpp hungarian.h)

add_executable(testdev test.c)
target_link_libraries(testdev hungarian)