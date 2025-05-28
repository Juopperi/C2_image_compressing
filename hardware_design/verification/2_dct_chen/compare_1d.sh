#!/bin/bash

set -e

echo ""
echo "🔍 Comparing files for 1D DCT implementation"

# 定义要比较的文件
GOLDEN_FILE="chen_1d_dct_golden.mem"
ACTUAL_FILE="chen_1d_dct_all_outputs.mem"

# 拷贝到 build 路径
cp "./${GOLDEN_FILE}" ./utils/build/ 2>/dev/null || echo "⚠️ Warning: ${GOLDEN_FILE} not found in current directory, assuming it's already in build dir"
cp "./${ACTUAL_FILE}" ./utils/build/ 2>/dev/null || echo "⚠️ Warning: ${ACTUAL_FILE} not found in current directory, assuming it's already in build dir"

cd ./utils/build || { echo "❌ Failed to enter ./utils/build"; exit 1; }

# 可选构建步骤
rm -f ./CMakeCache.txt
cmake .. > /dev/null
make > /dev/null

if [ ! -f ./compare_1000 ]; then
    echo "❌ compare_1000 not found in ./utils/build"
    exit 1
fi

echo "⚖️  Running: ./compare_1000 $GOLDEN_FILE $ACTUAL_FILE"
./compare_1000 "$GOLDEN_FILE" "$ACTUAL_FILE"

# 创建分析结果目录（如果不存在）
mkdir -p ../../analysis/result/

# 移动CSV文件
mv *.csv ../../analysis/result/

cd - > /dev/null
echo "✅ 1D DCT comparison complete." 