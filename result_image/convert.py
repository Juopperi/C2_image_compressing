from PIL import Image

# 打开 JPG 文件
img = Image.open("input.jpg")

# 保存为 BMP 格式
img.save("output.bmp")
