#!/usr/bin/tclsh

# Synthesis test environment setup script
# This script creates the rtl directory and prepares the synthesis environment

# Check and create necessary directory structure
set root_dir [file normalize [file dirname [info script]]]
set parent_dir [file dirname $root_dir]
set rtl_dir [file join $parent_dir "rtl"]

# Welcome message
puts "========================================="
puts "Vivado Synthesis Test Environment Setup"
puts "========================================="
puts "Root directory: $parent_dir"
puts "Test script directory: $root_dir"
puts "RTL files directory: $rtl_dir"

# Create rtl directory (if it doesn't exist)
if {![file exists $rtl_dir]} {
    puts "\nCreating rtl directory..."
    file mkdir $rtl_dir
    puts "rtl directory created successfully: $rtl_dir"
} else {
    puts "\nrtl directory already exists: $rtl_dir"
}

# Create reports directory (if it doesn't exist)
set report_dir [file join $root_dir "reports"]
if {![file exists $report_dir]} {
    puts "\nCreating reports directory..."
    file mkdir $report_dir
    puts "Reports directory created successfully: $report_dir"
} else {
    puts "\nReports directory already exists: $report_dir"
}

# Check for Verilog/SystemVerilog files to copy to rtl directory
set verilog_files [glob -nocomplain -directory $parent_dir -types f "*.v" "*.sv"]
if {[llength $verilog_files] > 0} {
    puts "\nFound the following Verilog/SystemVerilog files in the project root:"
    foreach file $verilog_files {
        puts "  - [file tail $file]"
    }
    
    puts "\nDo you want to copy these files to the rtl directory? (y/n)"
    flush stdout
    gets stdin answer
    
    if {[string tolower $answer] == "y"} {
        puts "\nCopying files to rtl directory..."
        foreach file $verilog_files {
            set file_name [file tail $file]
            set dest_file [file join $rtl_dir $file_name]
            file copy -force $file $dest_file
            puts "  - Copied: $file_name"
        }
        puts "File copying completed!"
    }
}

# Instructions for running synthesis test
puts "\n========================================="
puts "Environment setup complete!"
puts "To run synthesis tests, follow these steps:"
puts "1. Place all RTL source files (.v, .sv) in the rtl directory: $rtl_dir"
puts "2. Switch to the test directory: cd [file tail $root_dir]"
puts "3. Run the synthesis script: vivado -mode batch -source run_synthesis.tcl"
puts "\nOptional parameters:"
puts "  -modules {module1 module2} : Specify modules to synthesize"
puts "  -part partname : Specify FPGA part (default: xc7z020clg484-1)"
puts "  -rtl_dir path : Specify rtl file path (default: ../rtl)"
puts "  -nthreads N : Specify thread count (default: 32)"
puts "=========================================" 