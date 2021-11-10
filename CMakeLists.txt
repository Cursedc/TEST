cmake_minimum_required(VERSION 3.20)
project(untitled17)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled17 main.cpp main.h)

project(Google_Test)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run main.cpp Tests.cpp main.h)

target_link_libraries(Google_Tests_run gtest gtest_main)