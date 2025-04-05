from PIL import Image
import os

# 配置路径和目标尺寸
input_path = "source.jpg"            # 原始图片路径
output_suffix = ".bmp"               # 输出文件后缀
output_dir = f"output_images/{output_suffix.split('.')[-1]}"         # 输出文件夹
base_size = (512, 512)               # 中间标准尺寸
target_sizes = [                     # 你需要的输出尺寸列表
    (128, 128),
    (256, 256),
    (512, 512),  # 可保留标准尺寸
    (1024, 1024),
    (2048, 2048),
    (4096, 4096),
    (8192, 8192),
    (16384, 16384),
]

# 创建输出目录
os.makedirs(output_dir, exist_ok=True)

# 加载并缩放为基准图（512×512）
base_image = Image.open(input_path).convert("RGB")
base_image = base_image.resize(base_size, Image.LANCZOS)

# 生成各种尺寸的图像
for size in target_sizes:
    resized = base_image.resize(size, Image.LANCZOS)
    filename = f"image_{size[0]}x{size[1]}{output_suffix}"
    resized.save(os.path.join(output_dir, filename))
    print(f"Saved: {filename}")
