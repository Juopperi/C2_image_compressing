#!/bin/bash

set -e  # 出错即退出

# 检查参数
if [ $# -ne 1 ]; then
    echo "Usage: bash compare_result.sh <output_filename>"
    exit 1
fi

OUTNAME=$1
EXPECTED_FILE="expected_${OUTNAME}_output.mem"
ACTUAL_FILE="actual_${OUTNAME}_output.mem"

cp "./tb/saved_output/${ACTUAL_FILE}" ./utils/build/
cp "./tb/saved_output/${EXPECTED_FILE}" ./utils/build/

echo "🔍 Comparing files: $EXPECTED_FILE  vs  $ACTUAL_FILE"

# 进入 utils 目录
cd ./utils/build || { echo "❌ Failed to enter ./utils"; exit 1; }

rm ./CMakeCache.txt
cmake ..
make

# 检查比较工具是否存在
if [ ! -f ./compare_1000 ]; then
    echo "❌ compare_1000 not found in ./utils//build"
    exit 1
fi

# 运行比较
echo "⚖️  Running comparison: ./compare_1000 $EXPECTED_FILE $ACTUAL_FILE"
./compare_1000 "$EXPECTED_FILE" "$ACTUAL_FILE"

mv *.csv ../../analysis/result
cd ..
echo "✅ Comparison finished."
