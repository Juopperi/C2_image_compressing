# PowerShell 并发 Vivado 综合脚本
$MaxJobs = 6
$jobQueue = @()
$resultsDir = "synth_results"
New-Item -ItemType Directory -Path $resultsDir -Force | Out-Null

$modules = @("dsp_multiplier", "lut_multiplier", "booth_multiplier", "shift_add_multiplier")
$widths  = @(8, 12, 16, 24, 32)

# 启动合成任务
foreach ($mod in $modules) {
    foreach ($w in $widths) {
        $jobName = "${mod}_w${w}"
        $srcFile = "${mod}.v"
        $jobOut  = "${resultsDir}/${jobName}"
        New-Item -ItemType Directory -Path $jobOut -Force | Out-Null

        # 如果达到最大并发，等待一个任务完成
        while ($jobQueue.Count -ge $MaxJobs) {
            $finished = Wait-Job -Job $jobQueue -Any
            $jobQueue = $jobQueue | Where-Object { $_.State -eq 'Running' }
        }

        Write-Host "Launching job for $mod width=$w"
        $job = Start-Job -ScriptBlock {
            param($mod, $srcFile, $w, $outDir)
            $cmd = "vivado -mode batch -source synth_multipliers.tcl -tclargs $mod $srcFile $w"
            Push-Location $outDir
            Invoke-Expression $cmd
            Pop-Location
        } -ArgumentList $mod, $srcFile, $w, $jobOut

        $jobQueue += $job
    }
}

# 等待所有任务完成
Write-Host "Waiting for all Vivado jobs to finish..."
Wait-Job -Job $jobQueue
Write-Host "All synthesis jobs done."

# 汇总 CSV
$summaryFile = "${resultsDir}/summary.csv"
"Module,Width,LUTs,FFs,DSPs,TimingDelay" | Out-File $summaryFile

foreach ($mod in $modules) {
    foreach ($w in $widths) {
        $jobName = "${mod}_w${w}"
        $utilRpt = "${resultsDir}/${jobName}/${jobName}_util.rpt"
        $timingRpt = "${resultsDir}/${jobName}/${jobName}_timing.rpt"

        if ((Test-Path $utilRpt) -and (Test-Path $timingRpt)) {

            $util = Get-Content $utilRpt | Select-String -Pattern "CLB LUTs|Slice Registers|DSPs|DSP48E1"
            $timing = Get-Content $timingRpt | Select-String -Pattern "Slack"

            $luts = ($util[0] -split '\|')[2].Trim()
            $ffs  = ($util[1] -split '\|')[2].Trim()
            $dsps = ($util[2] -split '\|')[2].Trim()
            $slack = ($timing[0] -split ':')[1].Trim()

            "$mod,$w,$luts,$ffs,$dsps,$slack" | Out-File -Append $summaryFile
        } else {
            "$mod,$w,ERROR,ERROR,ERROR,ERROR" | Out-File -Append $summaryFile
        }
    }
}

Write-Host "Summary written to $summaryFile"
