#!/usr/bin/tclsh

# Multiplier parameter sweep synthesis script
# This script generates and synthesizes multiplier modules with different CONST_W parameter values
# and reports resource utilization for each variant

# Usage: vivado -mode batch -source multiplier_param_sweep.tcl -tclargs [options]
# Optional parameters:
#   -module name : Name of the multiplier module to test (default: lut_multiplier)
#   -param_start N : Starting parameter value (default: 8)
#   -param_end N : Ending parameter value (default: 24)
#   -param_step N : Parameter value increment (default: 2)
#   -part partname : Specify FPGA part number (default: xc7z020clg484-1)
#   -rtl_dir path : Specify rtl folder path (default: ../rtl)
#   -nthreads N : Specify number of threads (default: 32)

# Parameter parsing
set module_name "lut_multiplier"
set param_name "CONST_W"
set param_start 8
set param_end 24
set param_step 2
set part_name "xc7z020clg484-1"
set rtl_dir "../rtl"
set nthreads 32
set report_dir "./reports/param_sweep"

# Parse command line arguments
for {set i 0} {$i < $argc} {incr i} {
    set arg [lindex $argv $i]
    switch -exact -- $arg {
        "-module" {
            incr i
            set module_name [lindex $argv $i]
        }
        "-param_start" {
            incr i
            set param_start [lindex $argv $i]
        }
        "-param_end" {
            incr i
            set param_end [lindex $argv $i]
        }
        "-param_step" {
            incr i
            set param_step [lindex $argv $i]
        }
        "-part" {
            incr i
            set part_name [lindex $argv $i]
        }
        "-rtl_dir" {
            incr i
            set rtl_dir [lindex $argv $i]
        }
        "-nthreads" {
            incr i
            set nthreads [lindex $argv $i]
        }
    }
}

# Create reports directory
file mkdir $report_dir

# Create summary CSV file
set summary_file [open "$report_dir/param_sweep_summary.csv" "w"]
puts $summary_file "Module,${param_name},LUTs,Registers,DSPs,BRAMs"
close $summary_file

puts "Performing parameter sweep for module: $module_name"
puts "Parameter: $param_name from $param_start to $param_end with step $param_step"
puts "Using FPGA part: $part_name"
puts "RTL files directory: $rtl_dir"
puts "Using thread count: $nthreads"

# Check if the module file exists
set module_file_found 0
foreach ext {.v .sv} {
    set module_file "$rtl_dir/$module_name$ext"
    if {[file exists $module_file]} {
        set module_file_found 1
        puts "Found module file: $module_file"
        break
    }
}

if {!$module_file_found} {
    puts "Error: Module file not found: $module_name"
    exit 1
}

# Generate test wrapper for each parameter value
for {set param_value $param_start} {$param_value <= $param_end} {set param_value [expr {$param_value + $param_step}]} {
    set wrapper_name "${module_name}_${param_name}_${param_value}"
    puts "\n========================================="
    puts "Processing $module_name with $param_name = $param_value"
    puts "=========================================\n"
    
    # Create wrapper module file
    set wrapper_dir "$report_dir/wrappers"
    file mkdir $wrapper_dir
    set wrapper_file "$wrapper_dir/${wrapper_name}.sv"
    
    set fp [open $wrapper_file w]
    puts $fp "module ${wrapper_name}("
    puts $fp "    input  logic [31:0] data_in,"
    puts $fp "    output logic [31:0] data_out"
    puts $fp ");"
    puts $fp ""
    puts $fp "    // Instantiate the module with specific parameter"
    puts $fp "    $module_name #("
    puts $fp "        .IN_W(32),"
    puts $fp "        .${param_name}(${param_value}),"
    puts $fp "        .FRAC(15)"
    puts $fp "    ) dut ("
    puts $fp "        .a(data_in),"
    puts $fp "        .b(16'h4000),"
    puts $fp "        .result(data_out)"
    puts $fp "    );"
    puts $fp ""
    puts $fp "endmodule"
    close $fp
    
    puts "Created wrapper: $wrapper_file"
    
    # Create module project directory
    set proj_dir "$report_dir/${wrapper_name}_proj"
    file mkdir $proj_dir
    
    # Create project
    create_project ${wrapper_name}_proj $proj_dir -part $part_name -force
    set_property target_language Verilog [current_project]
    
    # Add RTL files
    add_files -norecurse [glob -nocomplain "$rtl_dir/*.v" "$rtl_dir/*.sv"]
    add_files -norecurse $wrapper_file
    update_compile_order -fileset sources_1
    
    # Set top module to wrapper
    set_property top $wrapper_name [current_fileset]
    
    # Set synthesis options
    set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value {-mode out_of_context} -objects [get_runs synth_1]
    
    # Run synthesis
    puts "Synthesizing $wrapper_name..."
    reset_run synth_1
    launch_runs synth_1 -jobs $nthreads
    wait_on_run synth_1
    
    # Check if synthesis was successful
    if {[get_property PROGRESS [get_runs synth_1]] != "100%"} {
        puts "Error: Synthesis failed for $wrapper_name!"
        close_project
        continue
    }
    
    # Create module report directory
    set module_report_dir "$report_dir/$wrapper_name"
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
    if {[file exists $utilization_rpt]} {
        set fp [open $utilization_rpt r]
        set report_content [read $fp]
        close $fp
        
        # Extract LUT usage
        if {[regexp {CLB LUTs\*\s+\|\s+(\d+)} $report_content match lut_count]} {
            puts "LUTs: $lut_count"
        }
        
        # Extract register usage
        if {[regexp {CLB Registers\s+\|\s+(\d+)} $report_content match reg_count]} {
            puts "Registers: $reg_count"
        }
        
        # Extract DSP usage
        if {[regexp {DSPs\s+\|\s+(\d+)} $report_content match dsp_count]} {
            puts "DSPs: $dsp_count"
        }
        
        # Extract BRAM usage
        if {[regexp {Block RAM Tile\s+\|\s+(\d+\.?\d*)} $report_content match bram_count]} {
            puts "BRAMs: $bram_count"
        }
    }
    
    # Add to summary CSV
    set summary_file [open "$report_dir/param_sweep_summary.csv" "a"]
    puts $summary_file "$wrapper_name,$param_value,$lut_count,$reg_count,$dsp_count,$bram_count"
    close $summary_file
    
    # Save checkpoint
    write_checkpoint -force "$module_report_dir/post_synth.dcp"
    
    # Close project
    close_project
    
    puts "\nSynthesis completed for $wrapper_name"
}

# Create comparison HTML report
puts "\nGenerating HTML comparison report..."

# Create HTML report
set html_report [open "$report_dir/param_sweep_comparison.html" "w"]

puts $html_report "<!DOCTYPE html>
<html>
<head>
    <title>Multiplier Parameter Sweep Report</title>
    <style>
        body { font-family: Arial, sans-serif; margin: 20px; }
        h1 { color: #333366; }
        table { border-collapse: collapse; width: 100%; margin-top: 20px; }
        th, td { border: 1px solid #ddd; padding: 8px; text-align: right; }
        th { background-color: #f2f2f2; text-align: center; }
        tr:nth-child(even) { background-color: #f9f9f9; }
        tr:hover { background-color: #f1f1f1; }
        th:first-child, td:first-child { text-align: left; }
        .chart { width: 100%; height: 400px; margin-top: 30px; }
    </style>
    <script src=\"https://cdn.jsdelivr.net/npm/chart.js\"></script>
</head>
<body>
    <h1>Multiplier Parameter Sweep: $param_name</h1>
    <p>Module: $module_name</p>
    <p>FPGA Part: $part_name</p>
    <p>Generated: [clock format [clock seconds] -format {%Y-%m-%d %H:%M:%S}]</p>
    
    <table>
        <tr>
            <th>$param_name</th>
            <th>LUTs</th>
            <th>Registers</th>
            <th>DSP</th>
            <th>BRAM</th>
        </tr>"

# Read CSV file and add to HTML table
set csv_file [open "$report_dir/param_sweep_summary.csv" "r"]
gets $csv_file header
set rows {}
set param_values {}
set lut_values {}

# Read all lines into memory
while {[gets $csv_file line] >= 0} {
    set row [split $line ","]
    lappend rows $row
    lappend param_values [lindex $row 1]
    lappend lut_values [lindex $row 2]
}
close $csv_file

# Write rows to HTML
foreach row $rows {
    set param_val [lindex $row 1]
    set luts [lindex $row 2]
    set regs [lindex $row 3]
    set dsps [lindex $row 4]
    set brams [lindex $row 5]
    
    puts $html_report "        <tr>"
    puts $html_report "            <td>$param_val</td>"
    puts $html_report "            <td>$luts</td>"
    puts $html_report "            <td>$regs</td>"
    puts $html_report "            <td>$dsps</td>"
    puts $html_report "            <td>$brams</td>"
    puts $html_report "        </tr>"
}

puts $html_report "    </table>
    
    <div class=\"chart\">
        <canvas id=\"resourceChart\"></canvas>
    </div>
    
    <script>
        const ctx = document.getElementById('resourceChart');
        
        new Chart(ctx, {
            type: 'line',
            data: {
                labels: \[$param_values\],
                datasets: \[{
                    label: 'LUT Usage',
                    data: \[$lut_values\],
                    borderColor: 'rgb(75, 192, 192)',
                    tension: 0.1
                }\]
            },
            options: {
                scales: {
                    x: {
                        title: {
                            display: true,
                            text: '$param_name Value'
                        }
                    },
                    y: {
                        title: {
                            display: true,
                            text: 'LUT Count'
                        },
                        beginAtZero: true
                    }
                }
            }
        });
    </script>
</body>
</html>"

close $html_report

puts "\nParameter sweep completed!"
puts "Summary report located at: $report_dir/param_sweep_summary.csv"
puts "Comparison report located at: $report_dir/param_sweep_comparison.html" 