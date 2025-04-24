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
    y  =  0.299*r + 0.587*g + 0.114*b - 128
    cb = -0.168736*r - 0.331264*g + 0.5*b 
    cr =  0.5*r - 0.418688*g - 0.081312*b 
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
Sample RGB and YCbCr values: Pixel 0: RGB(0,0,0) -> YCbCr(0xFFFFFFFF,0xDEADBEEF,0xFFD24140)
Pixel 1: RGB(0,32,16) -> YCbCr(0xFFA3FFE0,0xFFDAE500,0x002ACC00)
Pixel 2: RGB(0,64,32) -> YCbCr(0xFFAA9B80,0xFFC06400,0x00317F00)
Pixel 3: RGB(0,96,48) -> YCbCr(0xFFB13720,0xFFD04B00,0x00383200)
Pixel 4: RGB(0,128,64) -> YCbCr(0xFFB7D2C0,0xFFCAFE00,0x003EE500)
Pixel 5: RGB(0,160,80) -> YCbCr(0xFFBE6E60,0xFFC5B100,0x00459800)
Pixel 6: RGB(0,192,96) -> YCbCr(0xFFC50A00,0xFFC06400,0x004C4B00)
Pixel 7: RGB(0,224,112) -> YCbCr(0xFFCBA5A0,0xFFBB1700,0x0052FE00)
RGB to YCbCr conversion test completed.
'''

# 执行
parse_log_and_compare(log_text)
