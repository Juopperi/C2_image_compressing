cmake_minimum_required(VERSION 3.10)
project(systemc_rgbconverter)

set(CMAKE_CXX_STANDARD 17)

# 设置 SystemC 路径（如果用 Docker，通常预设了环境变量）
if(NOT DEFINED ENV{SYSTEMC_HOME})
    message(FATAL_ERROR "Please set SYSTEMC_HOME environment variable.")
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories($ENV{SYSTEMC_HOME}/include)

find_library(SYSTEMC_LIB systemc PATHS $ENV{SYSTEMC_HOME}/lib-linux64)
if(NOT SYSTEMC_LIB)
    message(FATAL_ERROR "SystemC library not found.")
endif()




link_directories($ENV{SYSTEMC_HOME}/lib-linux64)

add_executable(jpeg_tb jpeg_tb.cpp)
target_link_libraries(jpeg_tb systemc)

target_link_libraries(jpeg_tb ${SYSTEMC_LIB})

# add_executable(rgb2ycbcr_tb rgb2ycbcr_tb.cpp)
# add_executable(gen_coeff dct_coeff_matrix.cpp)
# add_executable(dct_tb dct_tb.cpp)

# target_link_libraries(rgb2ycbcr_tb systemc)
# target_link_libraries(dct_tb systemc)
