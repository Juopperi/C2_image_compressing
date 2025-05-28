
# Vivado Synthesis Testing and Comparison Framework

This framework is designed to automate the synthesis of multiple RTL module designs and generate comparison reports to assist in analyzing resource utilization, timing performance, and power characteristics across different architectures.

## Directory Structure

```
synthesis_tests/
├── run_synthesis.tcl            # Main TCL script
├── reports/                     # Report directory
│   ├── synthesis_summary.csv        # Summary report in CSV format
│   ├── synthesis_comparison.html   # Comparison report in HTML format
│   └── [module_name]/              # Detailed report for each module
└── [module_name]_proj/          # Vivado project directory for each module
```

## Usage

### Preparation

1. Place your RTL design files (`.v`, `.sv`) in the `RTL` directory under the project root.
2. Ensure that each top-level module has a corresponding file, and the filename matches the module name.

### Run Synthesis

Run the synthesis test with the following command:

```bash
cd synthesis_tests
vivado -mode batch -source run_synthesis.tcl
```

### Advanced Options

The script supports the following command-line arguments:

```bash
vivado -mode batch -source run_synthesis.tcl -tclargs [options]
```

Available options:

* `-modules {module1 module2 ...}`: Specify a list of modules to synthesize. By default, all top-level modules in the RTL directory are synthesized.
* `-part partname`: Specify the FPGA part number. The default is `xc7z020clg484-1`.
* `-rtl_dir path`: Specify the path to the RTL directory. The default is `../RTL`.
* `-nthreads N`: Specify the number of threads to use. Default is 4.

Example:

```bash
vivado -mode batch -source run_synthesis.tcl -tclargs -modules {dct8_chen_ts dct_1d_8x1} -part xczu9eg-ffvb1156-2-e -nthreads 8
```

## Output

After execution, the script will generate the following in the `reports` directory:

1. `synthesis_summary.csv`: Contains key metrics for all modules (LUTs, registers, DSPs, BRAMs, frequency, etc.)
2. `synthesis_comparison.html`: An HTML report presenting a comparison table with best-performing values highlighted.
3. A detailed report directory for each module, including timing, resource, and power reports.

## Example Workflow

1. Design multiple RTL modules implementing the same functionality but with different architectures.
2. Place all source files into the RTL directory.
3. Run the synthesis script.
4. Open the generated HTML comparison report to analyze which architecture performs best in terms of resource usage, timing, and power.
5. Choose the most suitable implementation based on your requirements.

## Notes

* Ensure Vivado is installed and accessible from the command line.
* If synthesis fails, check for syntax errors or unsupported constructs in your module files.
* This framework is intended for comparing modules that implement the same functionality but with different architectural approaches.

