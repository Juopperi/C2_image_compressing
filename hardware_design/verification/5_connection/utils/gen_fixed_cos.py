#!/usr/bin/env python3
"""
DCT三角函数定点数计算器
计算DCT算法所需的余弦和正弦值，并转换为定点数表示
"""

import math
import argparse

def calc_fixed_point_trig(frac_bits=8, const_width=10):
    """
    计算DCT算法所需的余弦和正弦值，并转换为定点数表示
    
    参数:
        frac_bits: 小数位数 (默认为8位)
        const_width: 常量位宽 (默认为10位)
    
    返回:
        包含所有转换后值的字典
    """
    # Define the angle to be calculated (byπFor units)
    angles = {
        'C1': 1/16,    # cos(π/16)
        'C2': 2/16,    # cos(2π/16)
        'C3': 3/16,    # cos(3π/16)
        'C4': 4/16,    # cos(4π/16)
        'C5': 5/16,    # cos(5π/16)
        'C6': 6/16,    # cos(6π/16)
        'C7': 7/16,    # cos(7π/16)
        'SIN1': 1/16,  # sin(π/16)
        'SIN2': 2/16,  # sin(2π/16)
        'SIN3': 3/16,  # sin(3π/16)
        'SIN5': 5/16,  # sin(5π/16)
        'SIN6': 6/16,  # sin(6π/16)
        'SIN7': 7/16,  # sin(7π/16)
    }
    
    # calculateDCTScaling factor of coefficients
    scaling_factors = {
        'K0': 1/math.sqrt(8),  # 1/√8
        'K': 0.5,              # 0.5
    }
    
    results = {}
    max_val = (1 << (const_width - 1)) - 1  # Maximum value of signed number
    
    # Calculate the cosine value
    for name, angle in angles.items():
        if name.startswith('C'):
            # Calculate the cosine value
            float_val = math.cos(angle * math.pi)
            fixed_val = int(round(float_val * (2 ** frac_bits)))
            
            # Ensure that the bit width limit is not exceeded
            if abs(fixed_val) > max_val:
                print(f"warn: {name} = {fixed_val} More than {const_width} Bit signed number range")
                fixed_val = max_val if fixed_val > 0 else -max_val
                
            results[name] = (float_val, fixed_val)
            
        elif name.startswith('SIN'):
            # Calculate the sine value
            float_val = math.sin(angle * math.pi)
            fixed_val = int(round(float_val * (2 ** frac_bits)))
            
            # Ensure that the bit width limit is not exceeded
            if abs(fixed_val) > max_val:
                print(f"warn: {name} = {fixed_val} More than {const_width} Bit signed number range")
                fixed_val = max_val if fixed_val > 0 else -max_val
                
            results[name] = (float_val, fixed_val)
    
    # Calculate the scaling factor
    for name, factor in scaling_factors.items():
        float_val = factor
        fixed_val = int(round(float_val * (2 ** frac_bits)))
        
        # Ensure that the bit width limit is not exceeded
        if abs(fixed_val) > max_val:
            print(f"warn: {name} = {fixed_val} More than {const_width} Bit signed number range")
            fixed_val = max_val if fixed_val > 0 else -max_val
            
        results[name] = (float_val, fixed_val)
    
    return results

def format_verilog_constants(results, const_width=10):
    """Format the result asVerilogLocal parameter definition"""
    verilog_code = f"// --------------------------------------------------------------------\n"
    verilog_code += f"// constant (×2^FRAC)\n"
    verilog_code += f"// --------------------------------------------------------------------\n"
    verilog_code += f"localparam logic signed [{const_width-1}:0]\n"
    
    # Arrange constants in a specific order
    ordered_constants = ['C1', 'C2', 'C3', 'C4', 'C5', 'C6', 'C7', 
                         'SIN1', 'SIN2', 'SIN3', 'SIN5', 'SIN6', 'SIN7', 
                         'K0', 'K']
    
    lines = []
    for name in ordered_constants:
        if name in results:
            float_val, fixed_val = results[name]
            lines.append(f"    {name:<5} = {const_width}'sd{fixed_val:<4}  // {float_val:.6f} × 2^FRAC")
    
    verilog_code += ",\n".join(lines[:-1]) + ";\n" if len(lines) > 1 else lines[0] + ";\n"
    return verilog_code

def main():
    """Main function"""
    parser = argparse.ArgumentParser(description='DCTTrigonometric function fixed-point number calculator')
    parser.add_argument('--frac', type=int, default=15, help='Number of decimal places (default: 15)')
    parser.add_argument('--width', type=int, default=16, help='Constant bit width (default: 16)')
    args = parser.parse_args()
    
    print(f"DCTTrigonometric function fixed-point number calculator (Decimal places: {args.frac}, Constant bit width: {args.width})")
    print("=" * 60)
    
    # Calculate all values
    results = calc_fixed_point_trig(args.frac, args.width)
    
    # Show result table
    print("\nCalculation results:")
    print("-" * 60)
    print(f"{'Constant name':^8} | {'Floating point value':^12} | {'Fixed-point value(Decimal)':^15} | {'Binary representation':^{args.width+2}}")
    print("-" * 60)
    
    # Show results in a specific order
    for category, prefix in [("Cosine value", "C"), ("Sine value", "SIN"), ("Scaling factor", "K")]:
        print(f"\n{category}:")
        for name, (float_val, fixed_val) in sorted(results.items()):
            if name.startswith(prefix) or (prefix == "K" and (name == "K" or name == "K0")):
                bin_repr = format(fixed_val & ((1 << args.width) - 1), f'0{args.width}b') if fixed_val < 0 else format(fixed_val, f'0{args.width}b')
                print(f"{name:^8} | {float_val:^12.8f} | {fixed_val:^15d} | {bin_repr:^{args.width+2}}")
    
    print("\nVerilogCode:")
    print("-" * 60)
    print(format_verilog_constants(results, args.width))

if __name__ == "__main__":
    main()