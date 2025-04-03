import re
import matplotlib.pyplot as plt
import numpy as np

# 步骤顺序
steps = [
    "Image loading",
    "RGB to YCbCr conversion",
    "Chroma subsampling",
    "Level shift",
    "DCT transform",
    "Quantization",
    "Encoding",
    "File writing"
]

# 初始化数据
sizes = []
times = {step: [] for step in steps}
percentages = {step: [] for step in steps}

total_times = []


# 读取日志
with open("log.txt", "r") as f:
    content = f.read()

# 分段提取每组数据
blocks = content.split("========================================")
for block in blocks:
    if "Image name" not in block:
        continue

    # 提取尺寸
    size_match = re.search(r'image_(\d+)x\d+\.jpg', block)
    if not size_match:
        continue
    size = int(size_match.group(1))
    sizes.append(size)

    # 提取绝对耗时
    for step in steps:
        pattern = re.compile(rf'{re.escape(step)} time: ([\d.]+) seconds')
        match = pattern.search(block)
        times[step].append(float(match.group(1)) if match else 0.0)

    # 提取时间占比
    for step in steps:
        pattern = re.compile(rf'{re.escape(step)}: ([\d.]+)%')
        match = pattern.search(block)
        percentages[step].append(float(match.group(1)) if match else 0.0)

    
    # 在每个 block 的循环中提取总时间（放在提取占比后）
    total_match = re.search(r'Total execution time: ([\d.]+) seconds', block)
    total_times.append(float(total_match.group(1)) if total_match else 0.0)


# 将尺寸转为 numpy 数组（方便 log2）
sizes_np = np.array(sizes)
log_sizes = np.log2(sizes_np)

# 将时间转为 numpy 数组
times_np = {step: np.array(times[step]) for step in steps}



# === 图1：执行时间 vs 尺寸 ===
plt.figure(figsize=(10, 6))
for step in steps:
    plt.plot(log_sizes, times_np[step], marker='o', label=step)
plt.xlabel("log2(Image width)")
plt.ylabel("Time (seconds, log scale)")
plt.yscale("log")  # 加上这行！
plt.title("Execution time vs image size (log-log scale)")
plt.legend()
plt.grid(True, which="both", linestyle="--", linewidth=0.5)
plt.tight_layout()
plt.savefig("execution_time_loglog.png")
plt.show()

# === 图2：堆叠柱状图（占比，总高=100） + 总时间折线 ===
plt.figure(figsize=(10, 6))
percent_stack = np.zeros(len(sizes))
bar_width = 0.6
x = np.arange(len(sizes))  # x 是 bar 编号（不是 log 尺寸）
bottom = np.zeros(len(sizes))

# 画每个步骤的堆叠柱状部分
for step in steps:
    vals = np.array(percentages[step])
    plt.bar(x, vals, bottom=bottom, label=step)
    bottom += vals

# 添加总执行时间折线图（使用右侧 y 轴）
ax1 = plt.gca()
ax2 = ax1.twinx()
ax2.plot(x, total_times, color='black', marker='o', linestyle='-', label='Total time (s)')
ax2.set_ylabel("Total time (seconds)")
# ax2.set_yscale("log")
ax2.grid(False)

# 标注
plt.xticks(x, [f"{s}" for s in sizes])  # 用尺寸标注
ax1.set_xlabel("Image width (pixels)")
ax1.set_ylabel("Percentage of total time (%)")
plt.title("Execution time breakdown per stage (Stacked 100%) + Total time")
ax1.set_ylim(0, 100)
ax1.legend(loc='upper left', bbox_to_anchor=(1.0, 1.0))
ax2.legend(loc='lower left', bbox_to_anchor=(1.0, 0.0))
plt.tight_layout()
plt.savefig("execution_time_percentage_stacked_with_total.png")
plt.show()