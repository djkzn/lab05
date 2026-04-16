cmake_minimum_required(VERSION 3.4)

add_executable(check tests.cpp)
target_link_libraries(check banking
    gtest gtest_main
    gmock gmock_main
)
add_test(NAME check COMMAND check)