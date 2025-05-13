#!/usr/bin/env python3
import os
import re
import glob
import argparse
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
from pathlib import Path

def extract_param_value(directory_name):
    """Extract parameter value from directory name"""
    match = re.search(r'_(\d+)_proj$', directory_name)
    if match:
        return int(match.group(1))
    return None

def extract_resources_from_log(log_file):
    """Extract resource usage from Vivado runme.log file"""
    resources = {
        'LUTs': 0,
        'Registers': 0,
        'DSPs': 0,
        'BRAMs': 0
    }
    
    try:
        with open(log_file, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
            
            # Looking for the resource usage table
            sections = content.split("+------+")
            
            # Find section with resource counts
            for section in sections:
                if '|1     |top      |' in section:
                    # Extract the cell count which is typically the LUT count
                    cell_match = re.search(r'\|1\s+\|top\s+\|[^|]*\|\s*(\d+)\|', section)
                    if cell_match:
                        resources['LUTs'] = int(cell_match.group(1))
                
                # Look for specific resource sections
                if 'CLB LUTs' in section:
                    lut_match = re.search(r'CLB LUTs\*?\s+\|\s+(\d+)', section)
                    if lut_match:
                        resources['LUTs'] = int(lut_match.group(1))
                
                if 'CLB Registers' in section:
                    reg_match = re.search(r'CLB Registers\s+\|\s+(\d+)', section)
                    if reg_match:
                        resources['Registers'] = int(reg_match.group(1))
                
                if 'DSPs' in section:
                    dsp_match = re.search(r'DSPs\s+\|\s+(\d+)', section)
                    if dsp_match:
                        resources['DSPs'] = int(dsp_match.group(1))
                
                if 'Block RAM Tile' in section:
                    bram_match = re.search(r'Block RAM Tile\s+\|\s+(\d+\.?\d*)', section)
                    if bram_match:
                        resources['BRAMs'] = float(bram_match.group(1))
            
            # If LUTs are still 0, try to find any numeric cells info
            if resources['LUTs'] == 0:
                cell_match = re.search(r'\|Cells\s+\|\s+(\d+)\s+\|', content)
                if cell_match:
                    resources['LUTs'] = int(cell_match.group(1))
            
            # Try other formats
            if resources['LUTs'] == 0:
                lut_match = re.search(r'LUT\s+as\s+Logic\s+\|\s+(\d+)\s+', content)
                if lut_match:
                    resources['LUTs'] = int(lut_match.group(1))
            
            if resources['DSPs'] == 0:
                dsp_match = re.search(r'DSP48E\d+\s+\|\s+(\d+)\s+', content)
                if dsp_match:
                    resources['DSPs'] = int(dsp_match.group(1))
    
    except Exception as e:
        print(f"Error processing {log_file}: {e}")
    
    return resources

def find_log_files(base_dir, module_type, specific_module=None):
    """Find all runme.log files for the specified module type"""
    param_data = {}
    
    # Handle specific module name if provided
    if specific_module:
        pattern = f"{base_dir}/reports/*/{specific_module}_*_proj/*/synth_1/runme.log"
        print(f"Looking for files matching pattern: {pattern}")
    # Handle both multiplier and DCT patterns
    elif module_type == 'multiplier':
        pattern = f"{base_dir}/reports/param_sweep/*multiplier*_proj/*/synth_1/runme.log"
    elif module_type == 'dct':
        pattern = f"{base_dir}/reports/dct_param_sweep/*dct*_proj/*/synth_1/runme.log"
    else:
        # Generic pattern
        pattern = f"{base_dir}/reports/**/*_proj/*/synth_1/runme.log"
    
    log_files = glob.glob(pattern, recursive=True)
    print(f"Found {len(log_files)} log files")
    
    for log_file in log_files:
        print(f"Processing: {log_file}")
        # Extract parameter value from directory name
        dir_name = os.path.basename(os.path.dirname(os.path.dirname(os.path.dirname(log_file))))
        param_value = extract_param_value(dir_name)
        
        if param_value is not None:
            resources = extract_resources_from_log(log_file)
            param_data[param_value] = resources
            print(f"Parameter {param_value}: {resources}")
    
    return param_data

def generate_plots(param_data, output_dir, module_type):
    """Generate plots for resource usage vs parameter value"""
    if not param_data:
        print("No data to plot!")
        return
    
    # Create output directory
    os.makedirs(output_dir, exist_ok=True)
    
    # Convert to pandas DataFrame for easier plotting
    df = pd.DataFrame.from_dict(param_data, orient='index')
    df.index.name = 'Parameter Value'
    df = df.sort_index()
    
    # Save to CSV for reference
    csv_file = os.path.join(output_dir, f"{module_type}_resources.csv")
    df.to_csv(csv_file)
    print(f"Resource data saved to {csv_file}")
    
    # Create plots
    plt.figure(figsize=(10, 6))
    plt.plot(df.index, df['LUTs'], marker='o', label='LUTs')
    plt.title(f'{module_type.title()} Resource Usage: LUTs')
    plt.xlabel('Bit Width')
    plt.ylabel('LUTs')
    plt.grid(True)
    plt.xticks(df.index)
    plt.savefig(os.path.join(output_dir, f"{module_type}_luts.png"))
    
    
    print(f"Plots generated in {output_dir}")

def generate_html_report(df, output_dir, module_type):
    """Generate an HTML report with resource usage data and plots"""
    html_file = os.path.join(output_dir, f"{module_type}_report.html")
    
    # Convert DataFrames to HTML tables
    table_html = df.to_html(classes='dataframe')
    
    # Create HTML file
    with open(html_file, 'w') as f:
        f.write(f"""<!DOCTYPE html>
<html>
<head>
    <title>{module_type.title()} Resource Usage Report</title>
    <style>
        body {{ font-family: Arial, sans-serif; margin: 20px; }}
        h1, h2 {{ color: #333366; }}
        .dataframe {{ border-collapse: collapse; margin: 20px 0; }}
        .dataframe th, .dataframe td {{ border: 1px solid #ddd; padding: 8px; text-align: right; }}
        .dataframe th {{ background-color: #f2f2f2; text-align: center; }}
        .dataframe tr:nth-child(even) {{ background-color: #f9f9f9; }}
        .dataframe tr:hover {{ background-color: #f1f1f1; }}
        .plot-container {{ margin: 20px 0; }}
    </style>
</head>
<body>
    <h1>{module_type.title()} Resource Usage Analysis</h1>
    <p>Generated on: {pd.Timestamp.now().strftime('%Y-%m-%d %H:%M:%S')}</p>
    
    <h2>Resource Usage Data</h2>
    {table_html}
    
    <h2>Resource Usage Plots</h2>
    <div class="plot-container">
        <h3>LUT Usage</h3>
        <img src="{module_type}_luts.png" alt="LUT Usage" />
    </div>
    
    <div class="plot-container">
        <h3>DSP Usage</h3>
        <img src="{module_type}_dsps.png" alt="DSP Usage" />
    </div>
    
    <div class="plot-container">
        <h3>Combined Resource Usage</h3>
        <img src="{module_type}_combined.png" alt="Combined Resource Usage" />
    </div>
</body>
</html>""")
    
    print(f"HTML report generated: {html_file}")

def main():
    parser = argparse.ArgumentParser(description='Extract and plot resource usage from Vivado logs')
    parser.add_argument('-d', '--directory', default='.', help='Base directory containing synthesis reports')
    parser.add_argument('-m', '--module', choices=['multiplier', 'dct'], default='multiplier', 
                        help='Module type to analyze (multiplier, dct, or all)')
    parser.add_argument('-s', '--specific-module', default=None, 
                        help='Specific module name (e.g., lut_multiplier)')
    parser.add_argument('-o', '--output', default='./resource_plots', help='Output directory for plots')
    
    args = parser.parse_args()
    
    base_dir = os.path.abspath(args.directory)
    output_dir = os.path.abspath(args.output)
    
    if args.specific_module:
        print(f"\nAnalyzing specific module: {args.specific_module}")
        module_data = find_log_files(base_dir, None, args.specific_module)
        if module_data:
            generate_plots(module_data, os.path.join(output_dir, args.specific_module), args.specific_module)
        else:
            print(f"No data found for module {args.specific_module}!")
    elif args.module == 'all' or args.module == 'multiplier':
        print("\nAnalyzing multiplier resource usage...")
        multiplier_data = find_log_files(base_dir, 'multiplier')
        if multiplier_data:
            generate_plots(multiplier_data, os.path.join(output_dir, 'multiplier'), 'multiplier')
        else:
            print("No multiplier data found!")
    
    if args.module == 'all' or args.module == 'dct':
        print("\nAnalyzing DCT resource usage...")
        dct_data = find_log_files(base_dir, 'dct')
        if dct_data:
            generate_plots(dct_data, os.path.join(output_dir, 'dct'), 'dct')
        else:
            print("No DCT data found!")

if __name__ == "__main__":
    main() 