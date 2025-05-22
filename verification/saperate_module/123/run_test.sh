#!/bin/bash

# Exit on error
set -e

echo "=== RGB to YCbCr DCT Quantization Test ==="

# Build and run the testbench
echo "Building and running testbench..."
make run

echo "Test completed." 