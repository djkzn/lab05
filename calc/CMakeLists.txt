cmake_minimum_required(VERSION 3.4)
project(calc)

add_library(calc STATIC ${CMAKE_CURRENT_SOURCE_DIR}/calc.cpp)
target_include_directories(calc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})