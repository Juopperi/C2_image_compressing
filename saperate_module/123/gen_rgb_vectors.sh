#!/bin/bash
# -----------------------------------------------------------------------------
# RGB to YCbCr + DCT Test Vector Generation Script
# -----------------------------------------------------------------------------
# This script:
# 1. Compiles the RGB to YCbCr + DCT test vector generator
# 2. Runs it to generate RGB input and YCbCr+DCT output test vectors
# 3. Copies the generated files to the appropriate simulation directory
# -----------------------------------------------------------------------------

set -e

# Check if argument is provided
if [ $# -ne 1 ]; then
  echo "Usage: $0 <set_count>"
  echo "  <set_count>: Range of input values (0 to set_count-1)"
  exit 1
fi

SET_COUNT=$1
echo "Generating test vectors with range 0 to $SET_COUNT"

# The number of 8x8 blocks to generate
NUM_BLOCKS=1000

# Directories
ROOT_DIR=$(pwd)
UTILS_DIR="${ROOT_DIR}/utils"
SIM_DIR="${ROOT_DIR}/tb/sim"
OUTPUT_DIR="${ROOT_DIR}/tb/saved_output"

# Create output directory if it doesn't exist
mkdir -p "$OUTPUT_DIR"

# Navigate to utils directory
cd "$UTILS_DIR"

# Compile the test vector generator
echo "Compiling test vector generator..."
g++ -std=c++11 -O2 -o rgb2ycbcr_dct_gen gen_rgb2ycbcr_dct.cpp

# Check if compilation was successful
if [ $? -ne 0 ]; then
  echo "Error: Compilation failed!"
  exit 1
fi

# Run the test vector generator
echo "Generating test vectors with $NUM_BLOCKS blocks..."
./rgb2ycbcr_dct_gen 0 255 $NUM_BLOCKS

# Check if generation was successful
if [ $? -ne 0 ]; then
  echo "Error: Test vector generation failed!"
  exit 1
fi

# Move generated files to simulation directory
echo "Moving test vectors to simulation directory..."
mkdir -p "$SIM_DIR"
mv *.mem "$SIM_DIR/"

# Copy to saved output directory for reference
echo "Copying test vectors to saved output directory..."
cp "$SIM_DIR"/*.mem "$OUTPUT_DIR/"

echo "Test vector generation complete!"
echo "Files generated:"
echo "  - rgb_input_r.mem, rgb_input_g.mem, rgb_input_b.mem (RGB inputs)"
echo "  - expected_y_dct_output.mem (Y DCT coefficients)"
echo "  - expected_cb_dct_output.mem (Cb DCT coefficients)"
echo "  - expected_cr_dct_output.mem (Cr DCT coefficients)"
echo "Files are available in: $SIM_DIR and $OUTPUT_DIR" 