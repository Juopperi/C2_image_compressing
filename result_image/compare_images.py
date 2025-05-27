import cv2
import numpy as np
import sys

# 文件路径
original_path = 'original.jpg'
compressed_path = 'compressed.jpg'

# 读取图像
img1 = cv2.imread(original_path)
img2 = cv2.imread(compressed_path)

# 检查是否成功读取
if img1 is None or img2 is None:
    print("Failed to load one or both images. Please check the file paths.")
    sys.exit(1)

# 裁剪为相同大小
h = min(img1.shape[0], img2.shape[0])
w = min(img1.shape[1], img2.shape[1])
img1 = img1[:h, :w]
img2 = img2[:h, :w]

# 转灰度
gray1 = cv2.cvtColor(img1, cv2.COLOR_BGR2GRAY)
gray2 = cv2.cvtColor(img2, cv2.COLOR_BGR2GRAY)

# 差值计算
abs_diff = cv2.absdiff(gray1, gray2)
mae = np.mean(abs_diff)
mse = np.mean((gray1.astype("float") - gray2.astype("float")) ** 2)
psnr = float('inf') if mse == 0 else 10 * np.log10(255.0 ** 2 / mse)

# 归一化差异图用于可视化（差异越大，越白）
diff_map = cv2.normalize(abs_diff, None, 0, 255, cv2.NORM_MINMAX)
cv2.imwrite('diff_map.png', diff_map)

# 输出数值结果
print(f"MAE (Mean Absolute Error): {mae:.4f}")
print(f"MSE (Mean Squared Error): {mse:.4f}")
print(f"PSNR (Peak Signal-to-Noise Ratio): {psnr:.2f} dB")
print("Difference map saved as 'diff_map.png'")
