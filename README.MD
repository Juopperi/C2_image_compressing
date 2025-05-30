# C2 Image Compressing Project

This repository contains a complete hardware-software co-design workflow for a custom image compression system. The project includes HDL modules, software tools, IP packaging, profiling, and verification infrastructure to support the development and integration of components across different platforms.

## Directory Structure

### `DockerFolder/`
Docker-based development environment supporting Verilator and GTKWave. Useful for simulation, waveform debugging, and rapid testing in a consistent setup.

### `hardware_design/`
Top-level hardware designs and module implementations, organized by functionality:

- `1_YCbCr_conversion/`: Color space conversion module.
- `2_dct_chen/`: DCT (Discrete Cosine Transform) implementation using Chen's algorithm.
- `3_quantization/`: Quantization modules for compression.
- `4_zigzag/`: Zigzag scanning implementation.
- `5_huffman/`: Huffman encoding for entropy compression.
- `6_file_writing/`: Modules for file output formatting.
- `7_connection/`: Full compression pipeline implementation and top-level integration.
- `8_axi_interface/`: AXI interface modules for system integration.
- `9_subsample/`: Chroma subsampling implementation.
- `0_fixed_point/`: Fixed-point arithmetic utilities.
- `verification/`: Verification testbenches for hardware modules.

### `ip_folder/`
Vivado-packaged custom IP cores.

- Includes exported `.xgui`, `ip_repo`, and `src` for easy reuse in block diagram design.
- Allows rapid integration and further debugging by other developers.

### `analysis_tools/`
Tools for analysis and performance optimization:

- `profile/`: Time-measurement and performance analysis tools.
- `dct_error_analysis/`: Error analysis for DCT implementation.
- `fixed_point_analysis/`: Analysis tools for fixed-point arithmetic precision.

### `matlab/`
MATLAB-based compression algorithms, reference implementations, and verification tools:

- Contains various compression algorithms, encoding/decoding utilities, and test scripts.
- Includes reference implementations for comparison with hardware results.
- Source pictures and test data for verification.

### `axi_examples/`
Examples and tests for AXI interfaces and interrupt handling on the PS side.

---

## Usage

1. Use `DockerFolder/` to quickly set up a simulation environment.
2. Explore `hardware_design/` and `ip_folder/` for RTL development and integration.
3. Refer to `analysis_tools/` for performance analysis and functional testing.
4. Use `matlab/` tools as part of end-to-end test flows or data preparation.

---

##  Future Work

### System-Level Validation
While the core functionality has been validated using controlled test vectors, system-level validation with real image inputs is still pending. One planned direction is to test the system using full-resolution images from real-world scenes to observe performance under realistic data distributions. Future efforts may also include batch processing of multiple images and organizing output for downstream processing tasks.

To assess output quality beyond visual inspection, metrics such as SSIM (Structural Similarity Index Measure) and PSNR (Peak Signal-to-Noise Ratio) could be incorporated. This would provide a more quantitative evaluation of image fidelity, particularly under fixed-point constraints.


### SD Card Integration
At present, the design does not yet support full integration with the SD card. Specifically, **the connection for transferring pre-processed input images to the system and writing post-processed compressed data back to the SD card remains incomplete**.

To clarify: this limitation does not refer to low-level SD card read/write behavior itself, but rather to **the higher-level dataflow integration** — moving actual image data from and to the compression pipeline for full in-system operation. Completing this work is essential for enabling standalone, real-world use of the design on the target hardware platform.


### Performance Optimization
The current implementation prioritizes modularity and clarity over speed. Future versions could benefit from:

- **Fine-grained pipelining**: Enabling more continuous data flow between modules rather than waiting for full 8×8 blocks to complete before processing the next stage.
- **AXI Stream interface**: Replacing the polling-based memory-mapped I/O (MMIO) with AXI Stream, FIFO buffers, and DMA would create a fully decoupled and streaming-capable pipeline.
- **Improved conversion logic**: Observed high LUT usage in the current conversion module wrapper suggests room for architectural simplification or redesign to reduce hardware cost.
- **Scalability**: On larger FPGA platforms, parallelism can be increased by instantiating multiple processing cores, enhancing throughput and reducing latency.
