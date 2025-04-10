cmake_minimum_required(VERSION 3.10)

project(dct_coeff_generator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../)

add_executable(float_intervalue_generator float_intervalue_generator.cpp)
add_executable(fixed_intervalue_generator fixed_intervalue_generator.cpp)
add_executable(compare_mem compare_mem.cpp)
add_executable(compare_1000 compare_1000.cpp)
add_executable(fixed_full_intervalue fixed_full_intervalue.cpp)
add_executable(gen_multi_inout gen_multi_inout.cpp)

