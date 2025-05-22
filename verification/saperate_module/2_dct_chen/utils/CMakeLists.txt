cmake_minimum_required(VERSION 3.10)

project(verification_DCT)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../)

add_executable(compare_1000 compare_1000.cpp)
add_executable(gen_multi_inout gen_multi_inout.cpp)
add_executable(chen_valid chen_valid.cpp)
add_executable(gen_1d_test_vectors gen_1d_test_vectors.cpp)
add_executable(gen_2d_pipe_test_vectors gen_2d_pipe_test_vectors.cpp)
