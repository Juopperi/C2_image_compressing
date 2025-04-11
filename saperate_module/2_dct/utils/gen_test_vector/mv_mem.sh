#!/bin/bash

cd build
make
./fixed_intervalue_generator

cd ..
cp ./build/*.mem ../../tb/dct_2d_8x8/sim
mv ./build/*.mem ../../tb/dct_2d_8x8/
