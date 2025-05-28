# Verification

This directory contains the complete verification infrastructure for the JPEG compression pipeline and its individual components. It includes module-level simulation, result comparison, analysis, and synthesis reports.

## 1. Functional Simulation and Comparison

Each numbered subfolder (e.g., `1_uhv`, `2_dct_chen`, `3_quantization`, `4_zigzag`) contains:

- RTL implementations under test
- Testbenches and input/output vector files
- Simulation scripts (`run_sim.py`, `run_compare.py`)
- Analysis scripts for output correctness (`analysis_csv.py`, `box_diff.py`, etc.)

## 2. Resource and Timing Reports

Subdirectories like `synthesis_tests/` include:

- Vivado projects for synthesis
- Batch scripts and TCL files for automated synthesis and parameter sweeping
- Reports on timing, power, and resource usage for different implementations

## 3. Result Analysis and Visualization

Each test set contains an `analysis/` directory with:

- CSV-formatted difference data
- Statistical and visual comparison plots (error maps, distribution charts)
- Heatmaps for identifying error concentration patterns

## 4. Component-Level Verification

The `saperate_module/` folder and its subfolders are used for:

- Isolated module testing with Verilator/C++
- Docker-based synthesis experiments
- Generated simulation traces (`.vcd`) and analysis scripts

## 5. Utility and Supporting Files

- `utils/` includes C++ tools for input/output generation and verification
- Shared headers for fixed-point arithmetic
- Scripts for batch test generation and validation

---

### Directory Summary

verification/
├── 1_uhv/               # Combined unit verification
├── 2_dct_chen/          # DCT module verification
├── 3_quantization/      # Quantization block verification
├── 4_zigzag/            # Zigzag logic verification
├── saperate_module/     # Isolated module test environments
├── fixed_point/         # Fixed-point conversion modules
├── optimization/        # Optimized RTL and synthesis comparison
└── all_gen_multi_inout.cpp  # Shared utility

The onboard_unit_test folder is used to store functional tests for individual components before they are officially integrated into the system. For example, we perform basic validation for AXI-Lite, AXI4, AXI-Stream, FIFO, DMA, and interrupt functionalities. Some features were tested but ultimately omitted after evaluation and trade-offs.
