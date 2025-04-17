# synth_multipliers.tcl
set TOP [lindex $argv 0]
set SRC [lindex $argv 1]
set WIDTH [lindex $argv 2]

create_project $TOP . -part xc7z020clg400-1 -force
add_files $SRC
set_property top $TOP [current_fileset]

synth_design -top $TOP -mode out_of_context -verilog_define WIDTH=$WIDTH

report_utilization -file "${TOP}_util.rpt"
report_timing_summary -file "${TOP}_timing.rpt"
exit
