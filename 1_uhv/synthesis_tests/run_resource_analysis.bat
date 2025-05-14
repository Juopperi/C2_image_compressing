@echo off
REM Resource Analysis Batch File

echo =====================================
echo Vivado Resource Usage Analysis Tool
echo =====================================

REM Check if Python is installed
where python >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Error: Python not found. Please ensure Python is installed and in your system PATH.
    pause
    exit /b 1
)

REM Check if required Python packages are installed
echo Checking required Python packages...
python -c "import pandas" 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Installing pandas package...
    pip install pandas
)

python -c "import matplotlib" 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Installing matplotlib package...
    pip install matplotlib
)

REM Get command line arguments
set ARGS=

:parse
if "%~1"=="" goto :execute
set ARGS=%ARGS% %1
shift
goto :parse

:execute
echo Running resource analysis with the following parameters:
echo %ARGS%

echo.
echo Starting resource usage analysis...
echo Example commands:
echo   - For lut_multiplier: run_resource_analysis.bat -s lut_multiplier
echo   - For all modules: run_resource_analysis.bat
echo.

REM Set current directory to the batch file's directory
cd /d "%~dp0"

REM Run Python script
python extract_resources.py %ARGS%

if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Error: Resource analysis failed!
    pause
    exit /b 1
)

echo.
echo =====================================
echo Resource analysis complete!
echo Reports generated in the resource_plots directory.
echo =====================================

REM Ask if user wants to open reports
set /p OPEN_REPORT=Open reports? (y/n): 
if /i "%OPEN_REPORT%"=="y" (
    if exist "resource_plots\multiplier\multiplier_report.html" (
        start "" "resource_plots\multiplier\multiplier_report.html"
    )
    if exist "resource_plots\dct\dct_report.html" (
        start "" "resource_plots\dct\dct_report.html"
    )
)

pause 