import matplotlib.pyplot as plt

# 手动输入两组数据（从您提供的CSV复制整理）

# 不使用DSP的实现数据
no_dsp_data = {
    'CONST_W': [8, 10, 12, 14, 16],
    'LUTs':    [2558, 3037, 3859, 4211, 4845]
}

# 使用DSP的实现数据
with_dsp_data = {
    'CONST_W': [8, 10, 12, 14, 16],
    'LUTs':    [1071, 1069, 1069, 1069, 1071]
}

# 绘图
plt.figure(figsize=(10, 6))
plt.plot(no_dsp_data['CONST_W'], no_dsp_data['LUTs'], marker='o', label='LUTs (No DSP)', color='tab:blue')
plt.plot(with_dsp_data['CONST_W'], with_dsp_data['LUTs'], marker='o', label='LUTs (With DSP)', color='tab:orange')

plt.xlabel('Bit Width (CONST_W)')
plt.ylabel('LUT Count')
plt.title('LUT Usage vs. Bit Width (With and Without DSP)')
plt.legend()
plt.grid(True)
plt.tight_layout()
# plt.show()
plt.savefig("dsp_lut.png")