cmake_minimum_required(VERSION 3.4)
project(test)
add_executable(test ${CMAKE_CURRENT_SOURCE_DIR}/TEST.cpp)
target_link_libraries(test PUBLIC gtest gtest_main calc)
