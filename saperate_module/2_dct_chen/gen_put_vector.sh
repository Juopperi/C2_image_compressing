#!/bin/bash

set -e  # 出错时退出

echo -e "\n🚀 Starting test vector generation..."

# -------------------------------
# 参数检查
# -------------------------------
if [ $# -ne 1 ]; then
    echo "❌ Usage: $0 <set number>"
    exit 1
fi

SET_COUNT="$1"

# -------------------------------
# 路径配置
# -------------------------------
SIM_WORK_DIR="./tb/sim/work"
BUILD_DIR="./utils/build"
OUTPUT_DIR="./tb/sim"

# -------------------------------
# 创建仿真工作目录
# -------------------------------
echo "📁 Ensuring simulation work directory exists: $SIM_WORK_DIR"
mkdir -p "$SIM_WORK_DIR"

# -------------------------------
# 进入构建目录并构建
# -------------------------------
if [ ! -d "$BUILD_DIR" ]; then
    echo "❌ Build directory '$BUILD_DIR' does not exist."
    exit 1
fi

echo "🔧 Entering build directory: $BUILD_DIR"
cd "$BUILD_DIR"

echo "🧹 Cleaning CMake cache"
rm -f CMakeCache.txt

echo "⚙️  Configuring with cmake .."
cmake .. > /dev/null

echo "🧱 Building project with make"
make -j

# -------------------------------
# 执行生成器
# -------------------------------
echo "📤 Running generator: ./gen_multi_inout ${SET_COUNT}"
./gen_multi_inout -127 128 "${SET_COUNT}"
# ./gen_multi_inout 1 1 "${SET_COUNT}"

# -------------------------------
# 拷贝 mem 文件
# -------------------------------
# cd - > /dev/null

# cd ../../

echo "📦 Copying generated *.mem files to: $OUTPUT_DIR"
# find "$BUILD_DIR" -maxdepth 1 -name "*.mem" -exec cp {} "$OUTPUT_DIR" \;
# cp "$BUILD_DIR/*.mem" "$OUTPUT_DIR"
cp *.mem "../../$OUTPUT_DIR"

echo -e "\n✅ Test vector generation completed successfully."
