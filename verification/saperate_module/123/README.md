# RGB to YCbCr DCT Quantization Testbench

This repository contains a Verilator testbench for the `rgb2ycbcr_quant` SystemVerilog module, which performs RGB to YCbCr color conversion, DCT transformation, and quantization.

## Prerequisites

- C++ compiler with C++11 support
- Verilator (tested with version 4.2 or higher)
- Make

## Directory Structure

```
.
├── Makefile
├── README.md
├── rtl/
│   ├── rgb2ycbcr_dct.sv         # Main module to be tested
│   ├── rgb2ycbcr_container.sv   # RGB to YCbCr conversion module
│   ├── dct8x8_chen_2d.sv        # 2D DCT implementation
│   └── quantize_array.sv        # Quantization module
└── tb_rgb2ycbcr_quant.cpp       # Verilator testbench with integrated test vector generation
```

## How to Run

1. Make sure all the RTL files (`rtl/`) are in place
2. Update the `RTL_DEPS` variable in the Makefile to include all necessary modules
3. Run the testbench:

```bash
make run
```

This will:
1. Compile the SystemVerilog module with Verilator
2. Run the testbench which generates test vectors on-the-fly and verifies the module's output

## Test Vector Generation

The testbench includes an integrated test vector generator that:
1. Creates random RGB input values
2. Converts RGB to YCbCr
3. Applies DCT transform 
4. Performs quantization
5. Uses these values to verify the RTL implementation

By default, the testbench generates 2 blocks with RGB values in the range [0, 255] and a JPEG quality factor of 50.

## Command Line Arguments

You can customize the test by passing command line arguments:

```bash
./obj_dir/Vrgb2ycbcr_quant <lower> <upper> <num_blocks> <quality>
```

Parameters:
- `lower`/`upper`: Inclusive integer range of input RGB pixels (0-255 recommended)
- `num_blocks`: How many 8×8 blocks to generate
- `quality`: JPEG quality factor (1-100, default 50)

## Clean Up

To clean up all generated files:

```bash
make clean
``` 