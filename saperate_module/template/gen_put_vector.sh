#!/bin/bash

set -e  # 出错时退出
echo "🚀 Starting test vector generation..."

# 读取输入参数
if [ $# -ne 2 ]; then
    echo "❌ Usage: $0 <min_value> <max_value>"
    exit 1
fi

MIN=$1
MAX=$2

# 创建工作目录
echo "📁 Creating simulation work directory: ./tb/sim/work"
mkdir -p ./tb/sim/work

# 进入构建目录
echo "🔧 Entering build directory: ./utils/build"
cd ./utils/build

# 编译项目
echo "🔨 Running cmake .."
rm ./CMakeCache.txt
cmake ..

echo "🧱 Building project with make"
make

# 执行生成器
echo "📡 Running: ./gen_multi_inout $MIN $MAX 1000"
./gen_multi_inout "$MIN" "$MAX" 1000

# 返回上层目录
cd ..

# 拷贝输出文件
echo "📤 Copying generated .mem files to ../tb/sim"
cp ./build/*.mem ../tb/sim

echo "✅ Test vector generation completed successfully."
