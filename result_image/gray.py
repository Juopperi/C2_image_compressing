import cv2
import sys

filename = '8.jpeg'  # 请改成你的实际文件名

# 读取图像（BGR 格式）
img = cv2.imread(filename)

# 错误处理：路径错误或文件不存在
if img is None:
    print(f"Failed to load image '{filename}'. Please check the file name and path.")
    sys.exit(1)

# 转换为灰度图
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# 保存结果
cv2.imwrite('output_gray.jpg', gray)
print("Grayscale image saved as 'output_gray.jpg'")
