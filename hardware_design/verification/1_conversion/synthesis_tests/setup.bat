@echo off
REM Automated synthesis test environment setup batch file

echo =====================================
echo Vivado Synthesis Test Environment Setup
echo =====================================

REM Check if Vivado is installed
where vivado >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Warning: Vivado not found. Please ensure Vivado is installed and in your system PATH.
    echo You may need to run Vivado's settings64.bat file first.
    echo Setup will continue regardless...
    echo.
)

REM Get parent directory path
for %%I in ("%~dp0..\") do set "PARENT_DIR=%%~fI"
set "RTL_DIR=%PARENT_DIR%rtl"

echo Project root directory: %PARENT_DIR%
echo RTL files directory: %RTL_DIR%

REM Create rtl directory
if not exist "%RTL_DIR%" (
    echo.
    echo Creating rtl directory...
    mkdir "%RTL_DIR%"
    echo rtl directory created successfully: %RTL_DIR%
) else (
    echo.
    echo rtl directory already exists: %RTL_DIR%
)

REM Check for Verilog/SystemVerilog files to copy to rtl directory
set "FOUND_FILES=0"
echo.
echo Searching for Verilog/SystemVerilog files in project root...

for %%F in ("%PARENT_DIR%*.v" "%PARENT_DIR%*.sv") do (
    if exist "%%F" (
        if "!FOUND_FILES!"=="0" (
            echo Found the following Verilog/SystemVerilog files in the project root:
            set "FOUND_FILES=1"
        )
        echo   - %%~nxF
    )
)

if "%FOUND_FILES%"=="0" (
    echo No Verilog/SystemVerilog files found in project root.
) else (
    echo.
    set /p COPY_FILES=Do you want to copy these files to the rtl directory? (y/n): 
    
    if /i "%COPY_FILES%"=="y" (
        echo.
        echo Copying files to rtl directory...
        
        for %%F in ("%PARENT_DIR%*.v" "%PARENT_DIR%*.sv") do (
            if exist "%%F" (
                copy "%%F" "%RTL_DIR%\" > nul
                echo   - Copied: %%~nxF
            )
        )
        
        echo File copying completed!
    )
)

REM Create reports directory
set "REPORT_DIR=%~dp0reports"
if not exist "%REPORT_DIR%" (
    echo.
    echo Creating reports directory...
    mkdir "%REPORT_DIR%"
    echo Reports directory created successfully: %REPORT_DIR%
) else (
    echo.
    echo Reports directory already exists: %REPORT_DIR%
)

echo.
echo =====================================
echo Environment setup complete!
echo To run synthesis tests, follow these steps:
echo 1. Place all RTL source files (.v, .sv) in the rtl directory: %RTL_DIR%
echo 2. Run the synthesis batch file: run_synthesis.bat
echo.
echo Optional parameters:
echo   -modules {module1 module2} : Specify modules to synthesize
echo   -part partname : Specify FPGA part (default: xc7z020clg484-1)
echo   -rtl_dir path : Specify rtl file path (default: ../rtl)
echo   -nthreads N : Specify thread count (default: 32)
echo =====================================

pause 