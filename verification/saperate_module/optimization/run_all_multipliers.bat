@echo off
REM Batch script to run synthesis for all multiplier implementations

REM Create results directory
mkdir synth_results 2>nul

REM List of multiplier modules to test
set MODULES=dsp_multiplier lut_multiplier booth_multiplier shift_add_multiplier

REM List of bit widths to test
set WIDTHS=8 12 16 24 32

REM Run synthesis for each module and width
for %%m in (%MODULES%) do (
    for %%w in (%WIDTHS%) do (
        echo Running synthesis for %%m with width=%%w...
        vivado -mode batch -source synth_multipliers.tcl -tclargs %%m %%m.v %%w
    )
)

REM Generate summary report
echo Generating summary report...
echo Module,Width,LUTs,FFs,DSPs,TimingDelay > synth_results\summary.csv
for %%m in (%MODULES%) do (
    for %%w in (%WIDTHS%) do (
        REM Extract resource usage from reports and append to summary
        powershell -Command "& { $util = Get-Content synth_results\%%m_w%%w\%%m_w%%w_util.rpt | Select-String -Pattern 'CLB LUTs|Slice Registers|DSPs|DSP48E1' -Context 0,1; $timing = Get-Content synth_results\%%m_w%%w\%%m_w%%w_timing.rpt | Select-String -Pattern 'Slack' -Context 0,1; $luts = ($util[0] -split '\|')[2].Trim(); $ffs = ($util[1] -split '\|')[2].Trim(); $dsps = ($util[2] -split '\|')[2].Trim(); $delay = ($timing[0] -split ':')[1].Trim(); echo '%%m,%%w,' + $luts + ',' + $ffs + ',' + $dsps + ',' + $delay >> synth_results\summary.csv }"
    )
)

echo All synthesis complete. Results are in the synth_results directory.
echo Summary report is in synth_results\summary.csv 