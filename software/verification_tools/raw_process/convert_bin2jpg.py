"""
File: convert_bin2jpg.py
Author: Wu Chen
Created: 2025/2/7 上午10:12

Version: 1.0.1

Description:
    从二进制文件（gray_image.bin）读取灰度数据，并转换为 JPEG 图像。
"""

import numpy as np
from PIL import Image

# === 1. 读取灰度二进制数据（单通道） ===
raw_width = 6040   # 替换为实际宽度
raw_height = 4032  # 替换为实际高度
raw_file = "gray_image.bin"

# 读取 bin 文件
gray_data = np.fromfile(raw_file, dtype=np.uint8)  # 若存储的是 16-bit，则改为 np.uint16
gray_data = gray_data.reshape((raw_height, raw_width))

# === 2. 保存为 JPEG（灰度模式） ===
output_jpeg = "output.jpg"
Image.fromarray(gray_data, mode="L").save(output_jpeg, quality=95)  # "L" 表示 8-bit 灰度图

print(f"转换完成！JPEG 文件已保存为 {output_jpeg}")
