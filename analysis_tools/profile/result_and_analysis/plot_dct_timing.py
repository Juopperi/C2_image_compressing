import re
import matplotlib.pyplot as plt
import numpy as np
import matplotlib
matplotlib.use('TkAgg')

# 控制优先从文件名获取维度
prefer_file_name_dims = False

# 处理步骤
steps = [
    "RGB to YCbCr conversion",
    "Chroma subsampling",
    "Level shift",
    "DCT transform",
    "Quantization",
    "Encoding",
]

# 初始化数据结构
sizes = []
times = {step: [] for step in steps}
percentages = {step: [] for step in steps}
total_times = []

# 读取日志
with open("pc_log_home.txt", "r") as f:
    content = f.read()

blocks = content.split("========================================")
for block in blocks:
    if "Image name" not in block:
        continue

    width, height, channels = None, None, None

    # 优先从文本字段提取维度信息
    if not prefer_file_name_dims:
        dim_match = re.search(r'Width:\s+(\d+)\s+Height:\s+(\d+)\s+Channels:\s+(\d+)', block)
        if dim_match:
            width = int(dim_match.group(1))
            height = int(dim_match.group(2))
            channels = int(dim_match.group(3))

    # 如果未找到维度信息，尝试从文件名提取
    if width is None:
        name_match = re.search(r'image_(\d+)x(\d+)', block)
        if name_match:
            width = int(name_match.group(1))
            height = int(name_match.group(2))

    if width is None:
        continue  # 如果依旧无法获取尺寸，跳过该日志块

    sizes.append(width)

    # 提取每个阶段的时间
    raw_times = {}
    for step in steps:
        pattern = re.compile(rf'{re.escape(step)} time: ([\d.]+) seconds')
        match = pattern.search(block)
        raw_times[step] = float(match.group(1)) if match else 0.0

    # 读取 I/O 时间
    loading_time = float(re.search(r'Image loading time: ([\d.]+)', block).group(1)) if "Image loading time" in block else 0.0
    writing_time = float(re.search(r'File writing time: ([\d.]+)', block).group(1)) if "File writing time" in block else 0.0
    total_time = float(re.search(r'Total execution time: ([\d.]+)', block).group(1)) if "Total execution time" in block else 0.0

    total_times.append(total_time)
    adjusted_total = total_time - loading_time - writing_time

    for step in steps:
        times[step].append(raw_times[step])

    nonzero_steps = [step for step in steps if raw_times[step] > 0]
    active_total = sum([raw_times[step] for step in nonzero_steps])

    for step in steps:
        if step in nonzero_steps and active_total > 0:
            percent = raw_times[step] / active_total * 100.0
        else:
            percent = 0.0
        percentages[step].append(percent)

# 按图像宽度排序
sort_idx = np.argsort(sizes)
sizes = [sizes[i] for i in sort_idx]
log_sizes = np.log2(sizes)
total_times = [total_times[i] for i in sort_idx]
for step in steps:
    times[step] = [times[step][i] for i in sort_idx]
    percentages[step] = [percentages[step][i] for i in sort_idx]

times_np = {step: np.array(times[step]) for step in steps}

# === 图 1：log-log ===
plt.figure(figsize=(10, 6))
for step in steps:
    plt.plot(log_sizes, times_np[step], marker='o', label=step)
plt.xlabel("log2(Image width)")
plt.ylabel("Time (seconds, log scale)")
plt.yscale("log")
plt.title("Execution time vs image size (log-log scale)")
plt.legend()
plt.grid(True, which="both", linestyle="--", linewidth=0.5)
plt.tight_layout()
plt.savefig("execution_time_loglog.png")
plt.show()

# === 图 2：百分比堆叠柱状图 + 总时间 ===
plt.figure(figsize=(16, 10))  # Increased figure size
# increase font size
plt.rcParams.update({'font.size': 18})
x = np.arange(len(sizes))
bottom = np.zeros(len(sizes))

for step in steps:
    vals = np.array(percentages[step])
    plt.bar(x, vals, bottom=bottom, label=step)
    bottom += vals

ax1 = plt.gca()
ax2 = ax1.twinx()
ax2.plot(x, total_times, color='black', marker='o', linestyle='-', label='Total time (s)')
ax2.set_ylabel("Total time (seconds)")
ax2.grid(False)

plt.xticks(x, [str(s) for s in sizes])
ax1.set_xlabel("Image width (pixels)")
ax1.set_ylabel("Percentage of processing time (%)")
plt.title("Execution time breakdown (excluding I/O) + Total time")
ax1.set_ylim(0, 100)
ax1.legend(loc='upper left', bbox_to_anchor=(1.05, 1.0))
ax2.legend(loc='lower left', bbox_to_anchor=(1.05, 0.0))
plt.tight_layout(rect=[0, 0, 0.95, 1])  # Leave space on the right for the legend
plt.savefig("execution_time_percentage_stacked_with_total.png", bbox_inches='tight')
plt.show()
