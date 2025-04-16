cmake_minimum_required(VERSION 3.10)
project(hwacc)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加源文件
add_executable(hwacc
    example_usage.cpp
    pl_jpeg_encoder.cpp
)

# 如果你需要在其他地方使用这个库文件（可选）
# add_library(jpeg_encoder STATIC pl_jpeg_encoder.cpp)
# target_link_libraries(hwacc jpeg_encoder)
