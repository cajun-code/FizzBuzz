cmake_minimum_required(VERSION 3.5)
project(FizzBuzz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(FizzBuzz ${SOURCE_FILES})