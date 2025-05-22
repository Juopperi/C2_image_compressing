import pandas as pd
import matplotlib.pyplot as plt
import sys


import seaborn as sns

# 替代风格


def analyze_and_plot(csv_file):
    # 读取 CSV
    df = pd.read_csv(csv_file)

    # 检查字段
    if not {'index', 'expected', 'actual', 'diff'}.issubset(df.columns):
        print("CSV file must contain 'index', 'expected', 'actual', 'diff' columns.")
        return

    print("=== Diff Statistics ===")
    print("Mean Error     :", df['diff'].mean())
    print("Max Error      :", df['diff'].max())
    print("Min Error      :", df['diff'].min())
    print("Std Deviation  :", df['diff'].std())
    print("Total Samples  :", len(df))
    print()

    # 绘图风格

    # 误差分布直方图
    plt.figure(figsize=(8, 4))
    plt.hist(df['diff'], bins=50, color='skyblue', edgecolor='black')
    plt.title('Distribution of Absolute DCT Error')
    plt.xlabel('Absolute Error')
    plt.ylabel('Count')
    plt.grid(True)
    plt.tight_layout()
    plt.savefig('hist_diff_distribution.png')
    print("Saved: hist_diff_distribution.png")

    # 误差趋势图（index vs diff）
    plt.figure(figsize=(10, 4))
    plt.plot(df['index'], df['diff'], label='|expected - actual|', linewidth=0.8)
    plt.title('DCT Error Over All Samples')
    plt.xlabel('Sample Index')
    plt.ylabel('Absolute Error')
    plt.grid(True)
    plt.tight_layout()
    plt.savefig('line_diff_trend.png')
    print("Saved: line_diff_trend.png")

    plt.show()

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python analyze_diff_distribution.py <diff_distribution.csv>")
        sys.exit(1)
    
    analyze_and_plot(sys.argv[1])
