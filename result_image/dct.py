from PIL import Image
import numpy as np
from scipy.fftpack import dct, dctn
import matplotlib.pyplot as plt

# 读取 JPG 并转为灰度图
img = Image.open("input.jpg").convert("L")
img_np = np.array(img)

# 计算 2D DCT
dct_result = dct(dct(img_np.T, norm='ortho').T, norm='ortho')  # 等价于 dctn(img_np, norm='ortho')

# 转为可视化：取对数并归一化
dct_log = np.log(np.abs(dct_result) + 1)
dct_norm = (dct_log - np.min(dct_log)) / (np.max(dct_log) - np.min(dct_log))

# 保存为图像
plt.imsave("dct_output.png", dct_norm, cmap='gray')
