import os
import subprocess
import pandas as pd
import matplotlib.pyplot as plt
import re

# 设置中文字体
plt.rcParams['font.sans-serif'] = ['Arial Unicode MS']  # 对于 macOS
plt.rcParams['axes.unicode_minus'] = False

def modify_const_w(value):
    """修改Verilog文件中的CONST_W参数"""
    with open('rtl/dct8x8_chen_2d.sv', 'r') as f:
        content = f.read()
    
    # 使用正则表达式替换CONST_W的值
    # parameter int CONST_W = 
    pattern = r'parameter\s+int\s+CONST_W\s*=\s*\d+'
    replacement = f'parameter int CONST_W = {value}'
    new_content = re.sub(pattern, replacement, content)
    
    with open('rtl/dct8x8_chen_2d.sv', 'w') as f:
        f.write(new_content)

def run_verilator():
    """运行Verilator编译"""
    subprocess.run(['make', 'clean'], check=True)
    subprocess.run(['make'], check=True)

def run_simulation():
    """运行仿真"""
    subprocess.run(['./dct_test'], check=True)

def collect_results(const_w):
    """收集当前CONST_W值的仿真结果"""
    # 这里需要根据你的dct_test.cpp的输出格式来解析结果
    # 假设输出格式为：Avg Error: X.XXXX, Max Error: X.XXXX, Mismatches: XX
    with open('sim_results.txt', 'r') as f:
        content = f.read()
    
    # 使用正则表达式提取数值
    avg_error = float(re.search(r'Avg Error: ([\d.]+)', content).group(1))
    max_error = float(re.search(r'Max Error: ([\d.]+)', content).group(1))
    mismatches = int(re.search(r'Mismatches: (\d+)', content).group(1))
    
    return {
        'CONST_W': const_w,
        'AvgError': avg_error,
        'MaxError': max_error,
        'Mismatches': mismatches
    }

def plot_results(df):
    """绘制结果图表"""
    plt.figure(figsize=(12, 8))
    
    # 创建子图
    plt.subplot(2, 1, 1)
    plt.plot(df['CONST_W'], df['AvgError'], 'b-o', label='平均误差')
    plt.plot(df['CONST_W'], df['MaxError'], 'r-o', label='最大误差')
    plt.xlabel('CONST_W')
    plt.ylabel('误差')
    plt.title('DCT误差分析')
    plt.grid(True)
    plt.legend()
    
    # 创建不匹配数量的子图
    plt.subplot(2, 1, 2)
    plt.bar(df['CONST_W'], df['Mismatches'], color='g')
    plt.xlabel('CONST_W')
    plt.ylabel('不匹配数量')
    plt.title('不匹配数量统计')
    plt.grid(True)
    
    # 调整布局
    plt.tight_layout()
    
    # 保存图形
    plt.savefig('dct_sweep_analysis.png', dpi=300, bbox_inches='tight')
    plt.close()
    
    # 打印统计信息
    print("\n统计信息:")
    print(f"最小平均误差: {df['AvgError'].min():.6f} (CONST_W = {df.loc[df['AvgError'].idxmin(), 'CONST_W']})")
    print(f"最大平均误差: {df['AvgError'].max():.6f} (CONST_W = {df.loc[df['AvgError'].idxmax(), 'CONST_W']})")
    print(f"最小最大误差: {df['MaxError'].min():.6f} (CONST_W = {df.loc[df['MaxError'].idxmin(), 'CONST_W']})")
    print(f"最大最大误差: {df['MaxError'].max():.6f} (CONST_W = {df.loc[df['MaxError'].idxmax(), 'CONST_W']})")
    print(f"最小不匹配数: {df['Mismatches'].min()} (CONST_W = {df.loc[df['Mismatches'].idxmin(), 'CONST_W']})")
    print(f"最大不匹配数: {df['Mismatches'].max()} (CONST_W = {df.loc[df['Mismatches'].idxmax(), 'CONST_W']})")

def main():
    # 创建结果DataFrame
    results = []
    
    # 扫描CONST_W从16到5
    for const_w in range(16, 4, -1):
        print(f"\n测试 CONST_W = {const_w}")
        
        # 修改参数
        modify_const_w(const_w)
        
        # 重新编译
        run_verilator()
        
        # 运行仿真
        run_simulation()
        
        # 收集结果
        result = collect_results(const_w)
        results.append(result)
        
        # 保存中间结果
        df = pd.DataFrame(results)
        df.to_csv('dct_sweep_results.csv', index=False)
    
    # 绘制最终结果
    plot_results(df)

if __name__ == '__main__':
    main() 