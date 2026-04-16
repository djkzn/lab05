cmake_minimum_required(VERSION 3.4)
project(lab05)

option(BUILD_TESTS "Build tests" OFF)

add_subdirectory(banking)
add_subdirectory(third-party/gtest)
add_subdirectory(tests)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  add_subdirectory(tests)
endif()