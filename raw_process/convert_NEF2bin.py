"""
File: convert_NEF2GRAY_BIN.py
Author: Wu Chen
Created: 2025/2/7 上午9:51

Version: 1.0.2

Description:
    1. 从 NEF 读取 Bayer RAW 数据，并转换为灰度图。
    2. 先保存为 PNG 以便可视化。
    3. 然后再转换为二进制（bin）文件。
"""

import rawpy
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image

# === 1. 读取 NEF 文件 ===
nef_file = "Archive/DSC_0055.NEF"

with rawpy.imread(nef_file) as raw:
    # 获取 Bayer RAW 数据（光子计数）
    raw_data = raw.raw_image.copy()

# === 2. 转换为 8-bit 灰度图（线性归一化） ===
gray_image = (raw_data / raw_data.max() * 255).astype(np.uint8)

# === 3. 保存为 PNG 灰度图 ===
output_png = "output_gray.jpg"
Image.fromarray(gray_image).save(output_png)
print(f"灰度图已保存为 {output_png}")

# === 4. 将灰度数据转换为二进制文件 ===
output_bin = "gray_image.bin"
gray_image.tofile(output_bin)
print(f"二进制文件已保存为 {output_bin}")

# === 5. 显示灰度图 ===
# plt.imshow(gray_image, cmap="gray")
# plt.colorbar()
# plt.title("Grayscale Image from RAW Photon Counts")
# plt.show()
