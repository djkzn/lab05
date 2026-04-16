cmake_minimum_required(VERSION 3.14)
project(connect)

add_subdirectory(/usr/src/googletest googletest)

add_library(connect STATIC ${CMAKE_CURRENT_SOURCE_DIR}/connect.cpp)
target_include_directories(connect PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/GMOCK.cpp)
target_link_libraries(main PRIVATE connect gtest_main gmock)