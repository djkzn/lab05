cmake_minimum_required(VERSION 3.4)
project(lab05)

add_subdirectory(banking)

option(BUILD_TESTS "Build tests" OFF)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  add_subdirectory(tests)
endif()