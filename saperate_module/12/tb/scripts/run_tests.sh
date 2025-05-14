#!/bin/bash
# Run testbenches for DCT module

# Directory setup
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="$SCRIPT_DIR/../.."
TB_DIR="$ROOT_DIR/tb/rtl"
RTL_DIR="$ROOT_DIR/rtl"
UTILS_DIR="$ROOT_DIR/utils"
SIM_DIR="$ROOT_DIR/tb/sim"

# Create simulation directory if it doesn't exist
mkdir -p $SIM_DIR
cd $SIM_DIR

# First, generate test vectors
echo "Generating test vectors..."
cd $UTILS_DIR
g++ -o gen_multi_inout gen_multi_inout.cpp -std=c++11
./gen_multi_inout 0 255 100
cp chen_2d_dct_input.mem expected_chen_2d_dct_output*.mem $SIM_DIR/
cd $SIM_DIR

# Run testbench for combinational module
echo "Running testbench for combinational module..."
iverilog -o tb_dct2d_8x8 $TB_DIR/tb_dct2d_8x8.v $RTL_DIR/chen_1d_dct.v $RTL_DIR/chen_2d_dct.v -g2012
vvp tb_dct2d_8x8

# Run comparison testbench
echo "Running comparison testbench..."
iverilog -o tb_dct2d_8x8_compare $TB_DIR/tb_dct2d_8x8_compare.v $RTL_DIR/chen_1d_dct.v $RTL_DIR/chen_2d_dct.v -g2012
vvp tb_dct2d_8x8_compare

echo "Tests complete!" 