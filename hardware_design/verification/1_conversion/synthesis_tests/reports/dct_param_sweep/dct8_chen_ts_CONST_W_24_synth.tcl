# Synthesis script for dct8_chen_ts_CONST_W_24
set module_name "dct8_chen_ts_CONST_W_24"
set part_name "xc7z020clg484-1"
set rtl_dir "C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl"
set wrapper_file "C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/synthesis_tests/reports/dct_param_sweep/wrappers/dct8_chen_ts_CONST_W_24.sv"
set report_dir "C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/synthesis_tests/reports/dct_param_sweep"

# Create shorter paths for the project to avoid Windows path length limitations
set proj_dir "C:/vivado_temp/dct8_chen_ts_CONST_W_24_proj"
file mkdir $proj_dir

# Create project
create_project ${module_name}_proj $proj_dir -part $part_name -force
set_property target_language Verilog [current_project]

# Only add the specific files we need for synthesis
puts "Adding required RTL files..."

# Add lut_multiplier.sv
if {[file exists "C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/lut_multiplier.sv"]} {
    puts "Adding file: C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/lut_multiplier.sv"
    add_files -norecurse "C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/lut_multiplier.sv"
} else {
    puts "ERROR: Required file not found: C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/lut_multiplier.sv"
    exit 1
}

# Add the DCT module
if {[file exists "C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/dct8_chen_ts.sv"]} {
    puts "Adding file: C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/dct8_chen_ts.sv"
    add_files -norecurse "C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/dct8_chen_ts.sv"
} else {
    puts "ERROR: Required file not found: C:/Users/wuche/Desktop/CODE/dat096/C2_image_compressing/saperate_module/2_dct_chen/rtl/dct8_chen_ts.sv"
    exit 1
}

# Add wrapper file
puts "Adding wrapper file: $wrapper_file"
add_files -norecurse $wrapper_file
update_compile_order -fileset sources_1

# Set top module to wrapper
set_property top $module_name [current_fileset]

# Set synthesis options
set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value {-mode out_of_context -flatten_hierarchy none} -objects [get_runs synth_1]

# Run synthesis
puts "Synthesizing $module_name..."
reset_run synth_1
launch_runs synth_1 -jobs 32
wait_on_run synth_1

# Check if synthesis was successful
if {[get_property PROGRESS [get_runs synth_1]] != "100%"} {
    puts "Error: Synthesis failed for $module_name!"
    exit 1
}

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
if {[file exists $utilization_rpt]} {
    set fp [open $utilization_rpt r]
    set report_content [read $fp]
    close $fp
    
    # Extract LUT usage
    if {[regexp {Slice LUTs\*\s+\|\s+(\d+)} $report_content match lut_count]} {
        puts "LUTs: $lut_count"
    }
    
    # Extract register usage
    if {[regexp {Slice Registers\s+\|\s+(\d+)} $report_content match reg_count]} {
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

# Write to CSV for this run
set csv_file [open "$report_dir/param_sweep_summary.csv" "a"]
puts $csv_file "$module_name,24,$lut_count,$reg_count,$dsp_count,$bram_count"
close $csv_file

# Try to save checkpoint but don't fail if it doesn't work
if {[catch {write_checkpoint -force "$module_report_dir/post_synth.dcp"} result]} {
    puts "Warning: Could not write checkpoint file. Continuing anyway."
    puts "Error was: $result"
}

close_project

# Cleanup temporary project files to save space
file delete -force $proj_dir

puts "Synthesis completed for $module_name"
exit 0
