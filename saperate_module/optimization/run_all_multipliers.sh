#!/bin/bash
# Shell script to run synthesis for all multiplier implementations

# Create results directory
mkdir -p synth_results

# List of multiplier modules to test
MODULES="dsp_multiplier lut_multiplier booth_multiplier shift_add_multiplier"

# List of bit widths to test
WIDTHS="8 12 16 24 32"

# Run synthesis for each module and width
for module in $MODULES; do
    for width in $WIDTHS; do
        echo "Running synthesis for $module with width=$width..."
        vivado -mode batch -source synth_multipliers.tcl -tclargs $module $module.v $width
    done
done

# Generate summary report
echo "Generating summary report..."
echo "Module,Width,LUTs,FFs,DSPs,TimingDelay" > synth_results/summary.csv

for module in $MODULES; do
    for width in $WIDTHS; do
        # Extract resource usage from reports and append to summary
        luts=$(grep -A1 "CLB LUTs" synth_results/${module}_w${width}/${module}_w${width}_util.rpt | tail -1 | awk -F'|' '{print $3}' | tr -d ' ')
        ffs=$(grep -A1 "Slice Registers" synth_results/${module}_w${width}/${module}_w${width}_util.rpt | tail -1 | awk -F'|' '{print $3}' | tr -d ' ')
        dsps=$(grep -A1 "DSPs" synth_results/${module}_w${width}/${module}_w${width}_util.rpt | tail -1 | awk -F'|' '{print $3}' | tr -d ' ')
        timing=$(grep "Slack" synth_results/${module}_w${width}/${module}_w${width}_timing.rpt | awk -F':' '{print $2}' | tr -d ' ')
        
        echo "$module,$width,$luts,$ffs,$dsps,$timing" >> synth_results/summary.csv
    done
done

echo "All synthesis complete. Results are in the synth_results directory."
echo "Summary report is in synth_results/summary.csv" 