#!/bin/bash

set -e

if [ $# -ne 1 ]; then
    echo "Usage: bash compare.sh <Y|Cb|Cr>"
    exit 1
fi

OUTNAME=$1

EXPECTED_FILE="expected_${OUTNAME}_output.mem"
ACTUAL_FILE="actual_${OUTNAME}_output.mem"

echo ""
echo "🔍 Comparing files: $EXPECTED_FILE vs $ACTUAL_FILE"

# 拷贝到 build 路径
cp "./tb/saved_output/${EXPECTED_FILE}" ./utils/build/
cp "./tb/saved_output/${ACTUAL_FILE}" ./utils/build/

cd ./utils/build || { echo "❌ Failed to enter ./utils/build"; exit 1; }

# 可选构建步骤
rm -f ./CMakeCache.txt
cmake .. > /dev/null
make > /dev/null

if [ ! -f ./compare_1000 ]; then
    echo "❌ compare_1000 not found in ./utils/build"
    exit 1
fi

echo "⚖️  Running: ./compare_1000 $EXPECTED_FILE $ACTUAL_FILE"
./compare_1000 "$EXPECTED_FILE" "$ACTUAL_FILE"

mv *.csv ../../analysis/result/

cd - > /dev/null
echo "✅ $OUTNAME comparison complete."
