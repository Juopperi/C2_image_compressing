# Multiplier synthesis script
# Usage: vivado -mode batch -source synth_multipliers.tcl -tclargs <top_module> <src_file> [width]

# Get arguments
if {$argc < 2} {
    puts "Usage: vivado -mode batch -source synth_multipliers.tcl -tclargs <top_module> <src_file> \[width\]"
    exit 1
}

set TOP_MODULE [lindex $argv 0]
set SRC_FILE [lindex $argv 1]
set WIDTH 16

# Check if WIDTH parameter was provided
if {$argc >= 3} {
    set WIDTH [lindex $argv 2]
}

# Set output directory
set OUT_DIR "./synth_results/${TOP_MODULE}_w${WIDTH}"

# Create project
create_project -force $TOP_MODULE $OUT_DIR -part xc7z020clg484-1
add_files $SRC_FILE
set_property top $TOP_MODULE [current_fileset]

# Run synthesis with parameter WIDTH
synth_design -top $TOP_MODULE -mode out_of_context -generic WIDTH=$WIDTH

# Generate reports
report_utilization -hierarchical -file "$OUT_DIR/${TOP_MODULE}_w${WIDTH}_util.rpt"
report_timing_summary -file "$OUT_DIR/${TOP_MODULE}_w${WIDTH}_timing.rpt"

# Generate more detailed utilization report
report_utilization -hierarchical -hierarchical_depth 20 -hierarchical_percentages -file "$OUT_DIR/${TOP_MODULE}_w${WIDTH}_detailed_util.rpt"

puts "Synthesis completed for $TOP_MODULE with WIDTH=$WIDTH"
puts "Results saved to $OUT_DIR"

# Exit Vivado
exit 