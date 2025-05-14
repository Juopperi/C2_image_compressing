#!/usr/bin/env python3
import os
import argparse
import subprocess
import re
import shutil
from pathlib import Path
import time

def create_directory(directory):
    """Create directory if it doesn't exist"""
    os.makedirs(directory, exist_ok=True)

def create_wrapper(module_name, param_name, param_value, wrapper_dir):
    """Create a SystemVerilog wrapper for parameter sweep"""
    wrapper_name = f"{module_name}_{param_name}_{param_value}"
    wrapper_file = os.path.join(wrapper_dir, f"{wrapper_name}.sv")
    
    with open(wrapper_file, 'w') as f:
        f.write(f"""module {wrapper_name}(
    input  logic        clk,
    input  logic        rst_n,
    input  logic        valid_in,
    input  logic [31:0] data_in [7:0],
    output logic        valid_out,
    output logic [31:0] data_out [7:0]
);

    // Instantiate the module with specific parameter
    {module_name} #(
        .IN_W(32),
        .{param_name}({param_value}),
        .FRAC(8)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(valid_in),
        .in_ready(),  // Left unconnected as wrapper doesn't use it
        .in0(data_in[0]),
        .in1(data_in[1]),
        .in2(data_in[2]),
        .in3(data_in[3]),
        .in4(data_in[4]),
        .in5(data_in[5]),
        .in6(data_in[6]),
        .in7(data_in[7]),
        .out_valid(valid_out),
        .out_ready(1'b1),  // Always ready to receive output
        .out0(data_out[0]),
        .out1(data_out[1]),
        .out2(data_out[2]),
        .out3(data_out[3]),
        .out4(data_out[4]),
        .out5(data_out[5]),
        .out6(data_out[6]),
        .out7(data_out[7])
    );

    // Force usage of output to prevent optimization
    // synthesis translate_off
    always_comb begin
        if (data_out[0] === 'x) begin
            $display("Output is used");
        end
    end
    // synthesis translate_on

endmodule
""")
    
    print(f"Created wrapper: {wrapper_file}")
    return wrapper_name, wrapper_file

def run_vivado_synthesis(wrapper_name, wrapper_file, rtl_dir, part_name, nthreads, report_dir, param_value):
    """Run Vivado synthesis on the wrapper"""
    # Create synthesis script
    synth_script = os.path.join(report_dir, f"{wrapper_name}_synth.tcl")
    
    # Convert to forward slashes for Tcl
    rtl_dir_tcl = rtl_dir.replace('\\', '/')
    wrapper_file_tcl = wrapper_file.replace('\\', '/')
    report_dir_tcl = report_dir.replace('\\', '/')
    
    with open(synth_script, 'w') as f:
        f.write(f"""# Synthesis script for {wrapper_name}
set module_name "{wrapper_name}"
set part_name "{part_name}"
set rtl_dir "{rtl_dir_tcl}"
set wrapper_file "{wrapper_file_tcl}"
set report_dir "{report_dir_tcl}"

# Create shorter paths for the project to avoid Windows path length limitations
set proj_dir "C:/vivado_temp/{wrapper_name}_proj"
file mkdir $proj_dir

# Create project
create_project ${{module_name}}_proj $proj_dir -part $part_name -force
set_property target_language Verilog [current_project]

# Add RTL files one by one instead of using glob
foreach vfile [glob -nocomplain "$rtl_dir/*.v"] {{
    add_files -norecurse $vfile
}}
foreach svfile [glob -nocomplain "$rtl_dir/*.sv"] {{
    add_files -norecurse $svfile
}}

# Add wrapper file
add_files -norecurse $wrapper_file
update_compile_order -fileset sources_1

# Set top module to wrapper
set_property top $module_name [current_fileset]

# Set synthesis options
set_property -name {{STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS}} -value {{-mode out_of_context -flatten_hierarchy none}} -objects [get_runs synth_1]

# Run synthesis
puts "Synthesizing $module_name..."
reset_run synth_1
launch_runs synth_1 -jobs {nthreads}
wait_on_run synth_1

# Check if synthesis was successful
if {{[get_property PROGRESS [get_runs synth_1]] != "100%"}} {{
    puts "Error: Synthesis failed for $module_name!"
    exit 1
}}

# Create module report directory
set module_report_dir "$report_dir/$module_name"
file mkdir $module_report_dir

# Generate utilization report
set utilization_rpt "$module_report_dir/utilization_synth.rpt"
open_run synth_1
report_utilization -file $utilization_rpt

# Extract resource usage
set lut_count 0
set reg_count 0
set dsp_count 0
set bram_count 0

# Parse the utilization report file
if {{[file exists $utilization_rpt]}} {{
    set fp [open $utilization_rpt r]
    set report_content [read $fp]
    close $fp
    
    # Extract LUT usage
    if {{[regexp {{Slice LUTs\\*\\s+\\|\\s+(\\d+)}} $report_content match lut_count]}} {{
        puts "LUTs: $lut_count"
    }}
    
    # Extract register usage
    if {{[regexp {{Slice Registers\\s+\\|\\s+(\\d+)}} $report_content match reg_count]}} {{
        puts "Registers: $reg_count"
    }}
    
    # Extract DSP usage
    if {{[regexp {{DSPs\\s+\\|\\s+(\\d+)}} $report_content match dsp_count]}} {{
        puts "DSPs: $dsp_count"
    }}
    
    # Extract BRAM usage
    if {{[regexp {{Block RAM Tile\\s+\\|\\s+(\\d+\\.?\\d*)}} $report_content match bram_count]}} {{
        puts "BRAMs: $bram_count"
    }}
}}

# Write to CSV for this run
set csv_file [open "$report_dir/param_sweep_summary.csv" "a"]
puts $csv_file "$module_name,{param_value},$lut_count,$reg_count,$dsp_count,$bram_count"
close $csv_file

# Try to save checkpoint but don't fail if it doesn't work
if {{[catch {{write_checkpoint -force "$module_report_dir/post_synth.dcp"}} result]}} {{
    puts "Warning: Could not write checkpoint file. Continuing anyway."
    puts "Error was: $result"
}}

close_project

# Cleanup temporary project files to save space
file delete -force $proj_dir

puts "Synthesis completed for $module_name"
exit 0
""")
    
    # Run Vivado with the script
    print(f"Running synthesis for {wrapper_name}...")
    cmd = f'vivado -mode batch -source "{synth_script}"'
    
    try:
        subprocess.run(cmd, shell=True, check=True)
        print(f"Synthesis completed for {wrapper_name}")
        return True
    except subprocess.CalledProcessError:
        print(f"Error: Synthesis failed for {wrapper_name}")
        return False

def extract_resource_usage(report_file):
    """Extract resource usage from Vivado report file"""
    if not os.path.exists(report_file):
        return None
    
    with open(report_file, 'r') as f:
        content = f.read()
    
    resources = {}
    
    # Extract LUT usage
    lut_match = re.search(r'Slice LUTs\*\s+\|\s+(\d+)', content)
    if lut_match:
        resources['LUTs'] = int(lut_match.group(1))
    
    # Extract register usage
    reg_match = re.search(r'Slice Registers\s+\|\s+(\d+)', content)
    if reg_match:
        resources['Registers'] = int(reg_match.group(1))
    
    # Extract DSP usage
    dsp_match = re.search(r'DSPs\s+\|\s+(\d+)', content)
    if dsp_match:
        resources['DSPs'] = int(dsp_match.group(1))
    
    # Extract BRAM usage
    bram_match = re.search(r'Block RAM Tile\s+\|\s+(\d+\.?\d*)', content)
    if bram_match:
        resources['BRAMs'] = float(bram_match.group(1))
    
    return resources

def generate_html_report(csv_file, html_file, param_name):
    """Generate HTML report from CSV data"""
    if not os.path.exists(csv_file):
        return
    
    # Read CSV data
    rows = []
    with open(csv_file, 'r') as f:
        lines = f.readlines()
        header = lines[0].strip().split(',')
        for line in lines[1:]:
            rows.append(line.strip().split(','))
    
    # Sort rows by parameter value
    rows.sort(key=lambda x: int(x[1]))
    
    # Extract data for chart
    param_values = [row[1] for row in rows]
    lut_values = [row[2] for row in rows]
    dsp_values = [row[4] for row in rows]
    
    # Create HTML file
    with open(html_file, 'w') as f:
        f.write(f"""<!DOCTYPE html>
<html>
<head>
    <title>DCT Parameter Sweep Report</title>
    <style>
        body {{ font-family: Arial, sans-serif; margin: 20px; }}
        h1 {{ color: #333366; }}
        table {{ border-collapse: collapse; width: 100%; margin-top: 20px; }}
        th, td {{ border: 1px solid #ddd; padding: 8px; text-align: right; }}
        th {{ background-color: #f2f2f2; text-align: center; }}
        tr:nth-child(even) {{ background-color: #f9f9f9; }}
        tr:hover {{ background-color: #f1f1f1; }}
        th:first-child, td:first-child {{ text-align: left; }}
        .chart {{ width: 100%; height: 400px; margin-top: 30px; }}
    </style>
    <script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
</head>
<body>
    <h1>DCT Parameter Sweep: {param_name}</h1>
    <p>Generated: {time.strftime('%Y-%m-%d %H:%M:%S')}</p>
    
    <table>
        <tr>
            <th>{param_name}</th>
            <th>LUTs</th>
            <th>Registers</th>
            <th>DSP</th>
            <th>BRAM</th>
        </tr>
""")
        
        # Add rows to table
        for row in rows:
            f.write(f"""        <tr>
            <td>{row[1]}</td>
            <td>{row[2]}</td>
            <td>{row[3]}</td>
            <td>{row[4]}</td>
            <td>{row[5]}</td>
        </tr>
""")
        
        # Add chart
        f.write(f"""    </table>
    
    <div class="chart">
        <canvas id="resourceChart"></canvas>
    </div>
    
    <script>
        const ctx = document.getElementById('resourceChart');
        
        new Chart(ctx, {{
            type: 'line',
            data: {{
                labels: [{','.join(param_values)}],
                datasets: [
                    {{
                        label: 'LUT Usage',
                        data: [{','.join(lut_values)}],
                        borderColor: 'rgb(75, 192, 192)',
                        tension: 0.1,
                        yAxisID: 'y'
                    }},
                    {{
                        label: 'DSP Usage',
                        data: [{','.join(dsp_values)}],
                        borderColor: 'rgb(255, 99, 132)',
                        tension: 0.1,
                        yAxisID: 'y1'
                    }}
                ]
            }},
            options: {{
                scales: {{
                    x: {{
                        title: {{
                            display: true,
                            text: '{param_name} Value'
                        }}
                    }},
                    y: {{
                        type: 'linear',
                        display: true,
                        position: 'left',
                        title: {{
                            display: true,
                            text: 'LUT Count'
                        }}
                    }},
                    y1: {{
                        type: 'linear',
                        display: true,
                        position: 'right',
                        title: {{
                            display: true,
                            text: 'DSP Count'
                        }},
                        grid: {{
                            drawOnChartArea: false
                        }}
                    }}
                }}
            }}
        }});
    </script>
</body>
</html>""")
    
    print(f"Generated HTML report: {html_file}")

def main():
    parser = argparse.ArgumentParser(description='DCT Parameter Sweep Tool')
    parser.add_argument('-module', default="dct8_chen_ts", help='Name of the DCT module to test')
    parser.add_argument('-param_name', default="CONST_W", help='Parameter name to sweep')
    parser.add_argument('-param_start', type=int, default=8, help='Starting parameter value')
    parser.add_argument('-param_end', type=int, default=32, help='Ending parameter value')
    parser.add_argument('-param_step', type=int, default=2, help='Parameter value increment')
    parser.add_argument('-part', default="xc7z020clg484-1", help='FPGA part number')
    parser.add_argument('-rtl_dir', default="../rtl", help='Directory containing RTL files')
    parser.add_argument('-nthreads', type=int, default=32, help='Number of threads for synthesis')
    
    args = parser.parse_args()
    
    # Create C:/vivado_temp directory for shorter paths
    os.makedirs("C:/vivado_temp", exist_ok=True)
    
    # Setup directories with absolute paths
    base_dir = os.path.dirname(os.path.abspath(__file__))
    rtl_dir = os.path.abspath(args.rtl_dir)
    report_dir = os.path.join(base_dir, "reports", "dct_param_sweep")
    wrapper_dir = os.path.join(report_dir, "wrappers")
    
    create_directory(report_dir)
    create_directory(wrapper_dir)
    
    # Create summary CSV file
    csv_file = os.path.join(report_dir, "param_sweep_summary.csv")
    with open(csv_file, 'w') as f:
        f.write(f"Module,{args.param_name},LUTs,Registers,DSPs,BRAMs\n")
    
    # Check if module file exists
    module_found = False
    for ext in ['.v', '.sv']:
        module_file = os.path.join(rtl_dir, f"{args.module}{ext}")
        if os.path.exists(module_file):
            module_found = True
            print(f"Found module file: {module_file}")
            break
    
    if not module_found:
        print(f"Error: Module file not found: {args.module}")
        print(f"Checked in directory: {rtl_dir}")
        print(f"Make sure the RTL directory path is correct")
        return
    
    print(f"Performing parameter sweep for module: {args.module}")
    print(f"Parameter: {args.param_name} from {args.param_start} to {args.param_end} with step {args.param_step}")
    print(f"Using RTL directory: {rtl_dir}")
    
    # Run parameter sweep
    for param_value in range(args.param_start, args.param_end + 1, args.param_step):
        print(f"\n=========================================")
        print(f"Processing {args.module} with {args.param_name} = {param_value}")
        print(f"=========================================\n")
        
        # Create wrapper
        wrapper_name, wrapper_file = create_wrapper(
            args.module, args.param_name, param_value, wrapper_dir
        )
        
        # Run synthesis
        success = run_vivado_synthesis(
            wrapper_name, wrapper_file, 
            rtl_dir,
            args.part, args.nthreads, 
            report_dir,
            param_value
        )
    
    # Generate HTML report
    html_file = os.path.join(report_dir, "param_sweep_comparison.html")
    generate_html_report(csv_file, html_file, args.param_name)
    
    print("\nParameter sweep completed!")
    print(f"Summary report located at: {csv_file}")
    print(f"Comparison report located at: {html_file}")

if __name__ == "__main__":
    main() 