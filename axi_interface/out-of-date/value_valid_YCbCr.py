import re
import struct

# 16.16 定点数转换为浮点
def fixed_to_float(hex_value):
    value = int(hex_value, 16)
    if value & 0x80000000:
        value = -((~value + 1) & 0xFFFFFFFF)
    return value / 65536.0  # 2^16

# RGB -> YCbCr 标准转换公式
def rgb_to_ycbcr(r, g, b):
    y  =  0.299*r + 0.587*g + 0.114*b - 128 +128
    cb = -0.168736*r - 0.331264*g + 0.5*b +128
    cr =  0.5*r - 0.418688*g - 0.081312*b +128
    return y, cb, cr

# 解析日志并计算差异
def parse_log_and_compare(log_text):
    pattern = re.compile(r"Pixel\s+(\d+):\s+RGB\((\d+),(\d+),(\d+)\)\s+->\s+YCbCr\((0x[0-9A-Fa-f]+),(0x[0-9A-Fa-f]+),(0x[0-9A-Fa-f]+)\)")
    matches = pattern.findall(log_text)

    for match in matches:
        pixel_idx, r, g, b, y_hex, cb_hex, cr_hex = match
        r, g, b = int(r), int(g), int(b)

        y_fixed = fixed_to_float(y_hex)
        cb_fixed = fixed_to_float(cb_hex)
        cr_fixed = fixed_to_float(cr_hex)

        y_expected, cb_expected, cr_expected = rgb_to_ycbcr(r, g, b)

        print(f"Pixel {pixel_idx}:")
        print(f"  RGB({r}, {g}, {b})")
        print(f"  YCbCr Fixed: Y={y_fixed:.4f}, Cb={cb_fixed:.4f}, Cr={cr_fixed:.4f}")
        print(f"  YCbCr Expected: Y={y_expected:.4f}, Cb={cb_expected:.4f}, Cr={cr_expected:.4f}")
        print(f"  Diff: Y={y_fixed - y_expected:.4f}, Cb={cb_fixed - cb_expected:.4f}, Cr={cr_fixed - cr_expected:.4f}")
        print("-" * 60)

# 示例日志
log_text = '''
Sample RGB and YCbCr values: Pixel 0: RGB(0,0,0) -> YCbCr(0xFF800000,0x00000000,0x00000000)
Pixel 1: RGB(10,10,10) -> YCbCr(0xFF8069BA,0xFFFFAB30,0x00006B30)
Pixel 2: RGB(20,20,20) -> YCbCr(0xFF8069BA,0xFFFFAB30,0x00006B30)
Pixel 3: RGB(30,30,30) -> YCbCr(0xFF8069BA,0xFFFFAB30,0x00006B30)
Pixel 4: RGB(40,40,40) -> YCbCr(0xFF8069BA,0xFFFFAB30,0x00006B30)
Pixel 5: RGB(50,50,50) -> YCbCr(0xFF8069BA,0xFFFFAB30,0x00006B30)
Pixel 6: RGB(60,60,60) -> YCbCr(0xFF8069BA,0xFFFFAB30,0x00006B30)
Pixel 7: RGB(70,70,70) -> YCbCr(0x0033B940,0xFFA79D0C,0xFFD8E820)

RGB to YCbCr conversion test completed.
'''

# 执行
parse_log_and_compare(log_text)
