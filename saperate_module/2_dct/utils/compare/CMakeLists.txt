cmake_minimum_required(VERSION 3.10)

project(comparor)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../)

add_executable(compare_mem compare_mem.cpp)
add_executable(compare_1000 compare_1000.cpp)
