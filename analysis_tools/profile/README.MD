
# Profiling

This directory contains the profiling infrastructure and analysis results for the project. It is organized into two main parts:

---

## 1. Runtime Profiling Tools (`profile_tools/`)

This folder provides implementations for measuring and collecting execution time across different platforms and processing environments.

### Subdirectories

#### `profile_tools/matlab_profile/`

- MATLAB-based profiling scripts for various stages of the image compression pipeline.
- Includes visualization (`Profiling 8x8 image.pdf`), profiling logs (`profiling_log.txt`), and intermediate computation outputs (e.g., `dct.txt`, `rgb.txt`, `quant.txt`, `zigzagOutput.txt`).
- Contains source images of different sizes to test scalability.
- The script `auto_run.m` performs automated end-to-end execution with profiling enabled.

#### `profile_tools/ps_profiling/`

- C++-based profiling implementation for PC and processing system (PS) platforms.
- Contains a modular `Profiler` class (`profiler.h`, `profiler.cpp`) used to annotate and measure different stages.
- Supports both standalone PC test (`PC_test/`) and embedded PS scenarios (`ps_profiling_stb/`).
- Uses `stb_image` and `stb_image_write` for image I/O.

---

## 2. Results and Analysis (`result_and_analysis/`)

This folder stores logs, plots, and statistical summaries of the profiling data collected using the tools above.

### Contents

- Raw execution logs (`log.txt`, `log_matlab.txt`, `pc_log_home.txt`, `matlab_log_home.txt`).
- Summary files (e.g., `PROFILE.TXT`) listing stage-wise execution times and ratios.
- Stacked bar charts showing the percentage of time spent in each module for different platforms:
  - `execution_time_percentage_stacked_with_total_matlab.png`
  - `execution_time_percentage_stacked_with_total_pc.png`
  - `execution_time_percentage_stacked_with_total_ps.png`
- Log-log plots for scalability analysis (in `illustrations/` folder).
- Python script `plot_dct_timing.py` for post-processing and visualization.

---

## Contribution Guidelines

- When adding new profiling scripts, place them under `profile_tools/` and clearly label the platform or use case.
- When adding profiling results, place raw data and logs under `result_and_analysis/` and keep filenames descriptive.
- Visualizations should be consistent in format and labeled with the profiling method used.

---

## Directory Overview

profiling/
├── README.md
├── profile_tools/
│   ├── matlab_profile/
│   └── ps_profiling/
└── result_and_analysis/
