@echo off
REM Multiplier Parameter Sweep Batch File

echo =====================================
echo Vivado Multiplier Parameter Sweep Tool
echo =====================================

REM Check if Python is installed
where python >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Error: Python not found. Please ensure Python is installed and in your system PATH.
    pause
    exit /b 1
)

REM Check if Vivado is installed
where vivado >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Error: Vivado not found. Please ensure Vivado is installed and in your system PATH.
    echo You may need to run Vivado's settings64.bat file first.
    pause
    exit /b 1
)

echo Checking current directory structure...
IF EXIST "%~dp0\rtl" (
    echo Found RTL directory in current location.
) ELSE (
    echo Warning: RTL directory not found in current location.
    echo Make sure to specify the correct RTL directory with -rtl_dir option.
)

REM Get command line arguments
set ARGS=

:parse
if "%~1"=="" goto :execute
set ARGS=%ARGS% %1
shift
goto :parse

:execute
echo Running parameter sweep with the following parameters:
echo %ARGS%

echo.
echo Starting parameter sweep process...
echo This may take several minutes, please be patient...
echo.

REM Set current directory to the batch file's directory
cd /d "%~dp0"

REM Run Python script
python param_sweep.py %ARGS%

if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Error: Parameter sweep process failed!
    pause
    exit /b 1
)

echo.
echo =====================================
echo Parameter sweep complete!
echo Reports generated in the reports/param_sweep directory.
echo =====================================

REM Ask if user wants to open report
set /p OPEN_REPORT=Open parameter sweep report? (y/n): 
if /i "%OPEN_REPORT%"=="y" (
    start "" "reports\param_sweep\param_sweep_comparison.html"
)

pause 