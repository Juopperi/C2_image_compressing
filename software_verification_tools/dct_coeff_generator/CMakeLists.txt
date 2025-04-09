cmake_minimum_required(VERSION 3.10)

project(dct_coeff_generator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../)

add_executable(float_coeff_generator generator_float.cpp)
add_executable(fixed_coeff_generator generator_fixed.cpp)
