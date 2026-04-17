cmake_minimum_required(VERSION 3.4)

add_executable(unit_tests TEST.cpp)
target_link_libraries(unit_tests banking gtest gtest_main)
add_test(NAME unit_tests COMMAND unit_tests)