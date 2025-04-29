cmake_minimum_required(VERSION 3.10)
project(fixedpoint_test)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加可执行文件
add_executable(dct_repeat
    dct_repeat.cpp
)

add_executable(dct_sweep
    dct_sweep.cpp
)

add_executable(dct_compare
    dct_compare.cpp
)

add_executable(fixed_point_test
    main.cpp
)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(dct_from_image dct_from_image.cpp)
target_link_libraries(dct_from_image ${OpenCV_LIBS})

