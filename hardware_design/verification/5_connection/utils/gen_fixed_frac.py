#!/usr/bin/env python3
"""
小数到16位定点数转换器
将浮点数转换为16位纯小数定点数表示(Q0.16格式)
"""

def float_to_fixed_point(float_val, bits=16):
    """
    将浮点数转换为指定位数的定点数表示
    
    参数:
        float_val: 要转换的浮点数
        bits: 定点数表示的位数（默认为16位）
    
    返回:
        整数: 定点数表示（整数形式）
        十六进制字符串: 定点数的十六进制表示
    """
    # Make sure the input floating point number is-1arrive1between(Pure decimal part)
    if abs(float_val) >= 1:
        print(f"warn: {float_val} The absolute value of1，Only the fractional part will be retained")
        float_val = float_val - int(float_val)  # Only the decimal part is retained
    
    # Convert floating point numbers to fixed point numbers
    fixed_point_val = int(float_val * (2 ** bits))
    
    # Handle negative numbers
    if float_val < 0:
        # For negative numbers，Use two's complement code to represent
        fixed_point_val = fixed_point_val & ((1 << bits) - 1)
    
    # Convert to hexadecimal representation
    hex_val = format(fixed_point_val, f'0{(bits+3)//4}x')
    
    return fixed_point_val, hex_val

def batch_convert():
    """Batch conversion of decimals to16Locate the number of fixed points and display the results"""
    print("Decimals to16Bit fixed-point converter")
    print("======================")
    print("Please enter a decimal（One per line，Enter blank line to end）：")
    
    inputs = []
    while True:
        line = input().strip()
        if not line:
            break
        
        try:
            # Try to parse the input into a floating point number
            value = float(line)
            inputs.append(value)
        except ValueError:
            print(f"mistake: '{line}' Not a valid decimal，Skipped")
    
    if not inputs:
        print("No valid decimals were entered。")
        return
    
    # Show result table
    print("\nConvert result:")
    print("-" * 60)
    print(f"{'Original decimal':^15} | {'Fixed point number(Decimal)':^15} | {'Fixed point number(hexadecimal)':^15}")
    print("-" * 60)
    
    for value in inputs:
        fixed_val, hex_val = float_to_fixed_point(value)
        print(f"{value:^15.6f} | {fixed_val:^15d} | {'0x' + hex_val:^15}")
    
    print("-" * 60)

if __name__ == "__main__":
    batch_convert()