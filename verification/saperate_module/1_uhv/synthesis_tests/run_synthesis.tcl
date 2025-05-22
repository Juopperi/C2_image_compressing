#!/usr/bin/tclsh

# Automated synthesis test script - For comparing resource usage of different module architectures
# Usage: vivado -mode batch -source run_synthesis.tcl -tclargs [options]
# Optional parameters:
#   -modules {module1 module2 ...} : Specify modules to synthesize, default is all top modules in rtl folder
#   -module_file path : Specify a file containing the list of modules to synthesize (one per line)
#   -part partname : Specify FPGA part number, default is xc7z020clg484-1
#   -rtl_dir path : Specify rtl folder path, default is ../rtl
#   -nthreads N : Specify number of threads, default is 32

# Parameter parsing
set module_list {}
set module_file ""
set part_name "xc7z020clg484-1"
set rtl_dir "../rtl"
set nthreads 32
set report_dir "./reports"
set fast_mode 1  
# Skip post-processing for faster operation

# Parse command line arguments
for {set i 0} {$i < $argc} {incr i} {
    set arg [lindex $argv $i]
    switch -exact -- $arg {
        "-modules" {
            incr i
            set module_list [lindex $argv $i]
        }
        "-module_file" {
            incr i
            set module_file [lindex $argv $i]
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

# Create reports directory if it doesn't exist
file mkdir $report_dir

# Create summary CSV file
set summary_file [open "$report_dir/synthesis_summary.csv" "w"]
puts $summary_file "Module,LUTs,Registers,DSPs,BRAMs"
close $summary_file

# Read modules from file if specified
if {$module_file != ""} {
    if {[file exists $module_file]} {
        set fp [open $module_file r]
        set module_list {}
        while {[gets $fp line] >= 0} {
            set line [string trim $line]
            if {$line != "" && [string index $line 0] != "#"} {
                lappend module_list $line
            }
        }
        close $fp
        puts "Loaded modules from file: $module_file"
    } else {
        puts "Error: Module file not found: $module_file"
    }
}

# If module list is empty, try to automatically detect Verilog/SystemVerilog files from rtl directory
if {[llength $module_list] == 0} {
    puts "No module list specified, searching for all top modules in rtl directory..."
    set verilog_files [glob -nocomplain "$rtl_dir/*.v" "$rtl_dir/*.sv"]
    
    foreach file $verilog_files {
        set filename [file tail $file]
        set module_name [file rootname $filename]
        lappend module_list $module_name
    }
}

puts "Synthesizing the following modules: $module_list"
puts "Using FPGA part: $part_name"
puts "RTL files directory: $rtl_dir"
puts "Using thread count: $nthreads"

# For each module, run synthesis and extract resource usage
foreach module $module_list {
    puts "\n========================================="
    puts "Starting synthesis for module: $module"
    puts "=========================================\n"
    
    # Create module project directory
    set proj_dir "./${module}_proj"
    file mkdir $proj_dir
    
    # Create project
    create_project ${module}_proj $proj_dir -part $part_name -force
    set_property target_language Verilog [current_project]
    
    # Add all rtl files
    add_files -norecurse [glob -nocomplain "$rtl_dir/*.v" "$rtl_dir/*.sv"]
    update_compile_order -fileset sources_1
    
    # Set top module
    set_property top $module [current_fileset]
    
    # Set synthesis options
    set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value {-mode out_of_context} -objects [get_runs synth_1]
    
    # Run synthesis
    puts "Synthesizing module $module..."
    reset_run synth_1
    launch_runs synth_1 -jobs $nthreads
    wait_on_run synth_1
    
    # Check if synthesis was successful
    if {[get_property PROGRESS [get_runs synth_1]] != "100%"} {
        puts "Error: Module $module synthesis failed!"
        close_project
        continue
    }
    
    # Create module report directory
    set module_report_dir "$report_dir/$module"
    file mkdir $module_report_dir
    
    # Generate utilization report directly from the synthesis run
    set utilization_rpt "$module_report_dir/utilization_synth.rpt"
    open_run synth_1
    report_utilization -file $utilization_rpt
    
    # Extract resource usage from the utilization report
    set lut_count 0
    set reg_count 0
    set dsp_count 0
    set bram_count 0
    
    # Parse the utilization report file to extract resource counts
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
    set summary_file [open "$report_dir/synthesis_summary.csv" "a"]
    puts $summary_file "$module,$lut_count,$reg_count,$dsp_count,$bram_count"
    close $summary_file
    
    # Save checkpoint
    write_checkpoint -force "$module_report_dir/post_synth.dcp"
    
    # Close project
    close_project
    
    puts "\nModule $module synthesis and resource report completed"
}

if {!$fast_mode} {
    # Create comparison report
    puts "\nGenerating HTML synthesis comparison report..."
    
    # Create HTML report
    set html_report [open "$report_dir/synthesis_comparison.html" "w"]
    
    puts $html_report "<!DOCTYPE html>
    <html>
    <head>
        <title>Vivado Synthesis Comparison Report</title>
        <style>
            body { font-family: Arial, sans-serif; margin: 20px; }
            h1 { color: #333366; }
            table { border-collapse: collapse; width: 100%; margin-top: 20px; }
            th, td { border: 1px solid #ddd; padding: 8px; text-align: right; }
            th { background-color: #f2f2f2; text-align: center; }
            tr:nth-child(even) { background-color: #f9f9f9; }
            tr:hover { background-color: #f1f1f1; }
            th:first-child, td:first-child { text-align: left; }
            .best { background-color: #d4edda; }
        </style>
    </head>
    <body>
        <h1>Vivado Synthesis Comparison Report</h1>
        <p>FPGA Part: $part_name</p>
        <p>Generated: [clock format [clock seconds] -format {%Y-%m-%d %H:%M:%S}]</p>
        <table>
            <tr>
                <th>Module</th>
                <th>LUTs</th>
                <th>Registers</th>
                <th>DSP</th>
                <th>BRAM</th>
            </tr>"
    
    # Read CSV file and add to HTML table
    set csv_file [open "$report_dir/synthesis_summary.csv" "r"]
    gets $csv_file header
    set rows {}
    
    # Read all lines into memory
    while {[gets $csv_file line] >= 0} {
        lappend rows [split $line ","]
    }
    close $csv_file
    
    # Find best values for each column
    set best_lut [lindex [lsort -real -index 1 $rows] 0 0]
    set best_reg [lindex [lsort -real -index 2 $rows] 0 0]
    set best_dsp [lindex [lsort -real -index 3 $rows] 0 0]
    set best_bram [lindex [lsort -real -index 4 $rows] 0 0]
    
    # Write rows to HTML
    foreach row $rows {
        set module [lindex $row 0]
        set luts [lindex $row 1]
        set regs [lindex $row 2]
        set dsps [lindex $row 3]
        set brams [lindex $row 4]
        
        puts $html_report "        <tr>"
        puts $html_report "            <td>$module</td>"
        puts $html_report "            <td[expr {$module == $best_lut ? " class=\"best\"" : ""}]>$luts</td>"
        puts $html_report "            <td[expr {$module == $best_reg ? " class=\"best\"" : ""}]>$regs</td>"
        puts $html_report "            <td[expr {$module == $best_dsp ? " class=\"best\"" : ""}]>$dsps</td>"
        puts $html_report "            <td[expr {$module == $best_bram ? " class=\"best\"" : ""}]>$brams</td>"
        puts $html_report "        </tr>"
    }
    
    puts $html_report "    </table>
    </body>
    </html>"
    
    close $html_report
}

puts "\nSynthesis test completed!"
puts "Summary report located at: $report_dir/synthesis_summary.csv"
if {!$fast_mode} {
    puts "Comparison report located at: $report_dir/synthesis_comparison.html"
}
puts "Detailed reports in each module's report directory"
