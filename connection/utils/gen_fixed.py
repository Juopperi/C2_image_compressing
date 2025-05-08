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
    # 确保输入的浮点数在-1到1之间(纯小数部分)
    if abs(float_val) >= 1:
        print(f"警告: {float_val} 的绝对值大于或等于1，将只保留小数部分")
        float_val = float_val - int(float_val)  # 只保留小数部分
    
    # 将浮点数转换为定点数
    fixed_point_val = int(float_val * (2 ** bits))
    
    # 处理负数情况
    if float_val < 0:
        # 对于负数，使用二的补码表示
        fixed_point_val = fixed_point_val & ((1 << bits) - 1)
    
    # 转换为十六进制表示
    hex_val = format(fixed_point_val, f'0{(bits+3)//4}x')
    
    return fixed_point_val, hex_val

def batch_convert():
    """批量转换小数为16位定点数并显示结果"""
    print("小数到16位定点数转换器")
    print("======================")
    print("请输入小数（每行一个，输入空行结束）：")
    
    inputs = []
    while True:
        line = input().strip()
        if not line:
            break
        
        try:
            # 尝试将输入解析为浮点数
            value = float(line)
            inputs.append(value)
        except ValueError:
            print(f"错误: '{line}' 不是有效的小数，已跳过")
    
    if not inputs:
        print("未输入任何有效的小数。")
        return
    
    # 显示结果表格
    print("\n转换结果:")
    print("-" * 60)
    print(f"{'原始小数':^15} | {'定点数(十进制)':^15} | {'定点数(十六进制)':^15}")
    print("-" * 60)
    
    for value in inputs:
        fixed_val, hex_val = float_to_fixed_point(value)
        print(f"{value:^15.6f} | {fixed_val:^15d} | {'0x' + hex_val:^15}")
    
    print("-" * 60)

if __name__ == "__main__":
    batch_convert()