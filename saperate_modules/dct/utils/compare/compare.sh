#!/bin/bash

cp ../../tb/dct_2d_8x8/sim/dct_out_dump.txt ./build/dct_out_2d.mem
cp ../../tb/dct_2d_8x8/sim/final_dct_result.mem ./build/final_dct_result.mem

cd build
cmake ..
make

./compare_mem