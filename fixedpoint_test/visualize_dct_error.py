import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# 加载数据
df = pd.read_csv("dct_from_image.csv")
mse = df["MSE"]
max_error = df["max_error"]

# 创建子图（并排）
fig, axs = plt.subplots(1, 2, figsize=(12, 5))

# --- MSE 分布 ---
axs[0].hist(mse, bins=50, color='skyblue', edgecolor='black', log=True)
axs[0].set_title("Histogram of MSE (log scale Y)")
axs[0].set_xlabel("MSE")
axs[0].set_ylabel("Count (log)")
axs[0].grid(True, linestyle='--', alpha=0.5)

# --- Max Error 分布 ---
axs[1].hist(max_error, bins=50, color='salmon', edgecolor='black')
axs[1].set_title("Histogram of Max Error")
axs[1].set_xlabel("Max Error")
axs[1].set_ylabel("Count")
axs[1].grid(True, linestyle='--', alpha=0.5)

plt.tight_layout()
#plt.show()

# 可选保存
plt.savefig("error_distribution_histograms.png", dpi=500)
