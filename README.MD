# C2 Image Compressing Project

This repository contains a complete hardware-software co-design workflow for a custom image compression system. The project includes HDL modules, software tools, IP packaging, profiling, and verification infrastructure to support the development and integration of components across different platforms.

## Directory Structure

### `DockerFolder/`
Docker-based development environment supporting Verilator and GTKWave. Useful for simulation, waveform debugging, and rapid testing in a consistent setup.

### `hardware_design/`
Top-level hardware designs and module implementations.

- `connection/`: Full compression pipeline implementation and top-level integration.
- `saperate_modules/`: Individual modules (e.g., DCT, quantization) for standalone development and testing.

### `ip_folder/`
Vivado-packaged custom IP cores.

- Includes exported `.xgui`, `ip_repo`, and `src` for easy reuse in block diagram design.
- Allows rapid integration and further debugging by other developers.

### `profile/`
Tools and results for runtime profiling and performance analysis.

- `profile_tools/`: Time-measurement scripts for MATLAB and C++ platforms.
- `result_and_analysis/`: Execution logs and visualizations for bottleneck diagnosis.

### `software/`
Software tools and scripts used during development and testing.

- `axi_usage_PS/`: Examples and tests for AXI interfaces and interrupt handling on the PS side.
- `matlab/`: MATLAB-based compression experiments.
- `verification_tools/`: Supporting utilities for test vector generation and output validation.

### `summarized/`
Reports, plots, or summaries extracted from profiling and verification runs.

### `verification/`
Full verification suite for functional and synthesis validation.

- `connection/`: Simulation, analysis, and synthesis validation for integrated pipeline.
- `onboard_unit_tests/`: Standalone functional tests for specific features (e.g., DMA, AXI-Stream, interrupt).
- `saperate_module/`: Isolated Verilator/C++ test environments for individual IPs.

---

## Usage

1. Use `DockerFolder/` to quickly set up a simulation environment.
2. Explore `hardware_design/` and `ip_folder/` for RTL development and integration.
3. Refer to `profile/` and `verification/` for performance analysis and functional testing.
4. Use `software/` tools as part of end-to-end test flows or data preparation.

---

## Notes

- Vivado is required for IP packaging and synthesis.
- Verilator and GTKWave are used for simulation and debugging.
- Some components (e.g., MATLAB scripts) require external tools or licenses.
