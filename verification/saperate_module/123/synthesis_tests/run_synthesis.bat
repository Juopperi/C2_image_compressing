@echo off
REM Automated synthesis test batch file

echo =====================================
echo Vivado Synthesis Test and Comparison Tool
echo =====================================

REM Check if Vivado is installed
where vivado >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Error: Vivado not found. Please ensure Vivado is installed and in your system PATH.
    echo You may need to run Vivado's settings64.bat file first.
    pause
    exit /b 1
)

REM Get command line arguments
set ARGS=
set MODULE_FILE=

:parse
if "%~1"=="" goto :execute
if /i "%~1"=="-module_file" (
    set MODULE_FILE=%~2
    set ARGS=%ARGS% -module_file %MODULE_FILE%
    shift
    shift
    goto :parse
)
set ARGS=%ARGS% %1
shift
goto :parse

:execute
echo Running synthesis with the following parameters:
echo %ARGS%

if not "%MODULE_FILE%"=="" (
    echo Using modules from file: %MODULE_FILE%
)

echo.
echo Starting Vivado synthesis process...
echo This may take several minutes, please be patient...
echo.

REM Run Vivado TCL script
vivado -mode batch -source run_synthesis.tcl -tclargs %ARGS%

if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Error: Vivado synthesis process failed!
    pause
    exit /b 1
)

echo.
echo =====================================
echo Synthesis complete!
echo Resource reports generated in the reports directory.
echo =====================================

REM Ask if user wants to open report
set /p OPEN_REPORT=Open comparison report? (y/n): 
if /i "%OPEN_REPORT%"=="y" (
    start "" "reports\synthesis_comparison.html"
)

pause 