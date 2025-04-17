import csv
import matplotlib.pyplot as plt
from collections import defaultdict

# 数据结构：stats[width][module] = {'LUTs': x, 'DSPs': y}
stats = defaultdict(dict)
modules_set = set()

with open("summary.csv", newline="") as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        module = row["Module"]
        width = int(row["Width"])
        try:
            luts = int(row["LUTs"])
            dsps = int(row["DSPs"])
        except ValueError:
            continue

        stats[width][module] = {"LUTs": luts, "DSPs": dsps}
        modules_set.add(module)

# 排序
bitwidths = sorted(stats.keys())
modules = sorted(modules_set)

# 准备数据：每个模块一条曲线
lut_data = {mod: [stats[w].get(mod, {}).get("LUTs", 0) for w in bitwidths] for mod in modules}
dsp_data = {mod: [stats[w].get(mod, {}).get("DSPs", 0) for w in bitwidths] for mod in modules}

# ----------- 画图部分 ------------

x = range(len(bitwidths))
bar_width = 0.2
offsets = [-bar_width, 0, bar_width]  # 最多三个模块

# LUT 图
plt.figure(figsize=(10, 5))
for i, mod in enumerate(modules):
    plt.bar(
        [xi + offsets[i % len(offsets)] for xi in x],
        lut_data[mod],
        width=bar_width,
        label=mod
    )
plt.xticks(x, bitwidths)
plt.xlabel("Bit Width")
plt.ylabel("LUT Usage")
plt.title("LUT Usage vs Bit Width")
plt.legend()
plt.tight_layout()
plt.grid(True)

# DSP 图
plt.figure(figsize=(10, 5))
for i, mod in enumerate(modules):
    plt.bar(
        [xi + offsets[i % len(offsets)] for xi in x],
        dsp_data[mod],
        width=bar_width,
        label=mod
    )
plt.xticks(x, bitwidths)
plt.xlabel("Bit Width")
plt.ylabel("DSP Usage")
plt.title("DSP Usage vs Bit Width")
plt.legend()
plt.tight_layout()
plt.grid(True)

plt.show()
