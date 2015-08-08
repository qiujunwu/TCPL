cmake_minimum_required(VERSION 3.2)
project(TCPL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES chapter1/section1.5/FileCopying1.c)
add_executable(TCPL ${SOURCE_FILES})