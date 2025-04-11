cmake_minimum_required(VERSION 3.10)
project(fixedpoint_test)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加可执行文件
add_executable(generate_dct8muladd_inputs generate_dct8muladd_inputs.cpp)
