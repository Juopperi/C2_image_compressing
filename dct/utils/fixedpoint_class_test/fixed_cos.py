import math

# === 配置区域 ===
DEBUG_FLOAT = True                       # 是否打印浮点调试信息
EXPORT_VERILOG_INIT_FILE = True          # 是否导出为 Verilog 初始化文件
EXPORT_PATH = "dct_coeffs.mem"           # 输出文件名
OUTPUT_IN_HEX = True                     # 输出为十六进制（否则为二进制）
# =================

FIXED_POINT_FRACTIONAL_BITS = 16
SCALE = 1 << FIXED_POINT_FRACTIONAL_BITS

def float_to_fixed(f):
    return int(round(f * SCALE))

def generate_dct_matrix(n=8):
    matrix = []
    for k in range(n):
        row = []
        for i in range(n):
            if k == 0:
                coeff = math.sqrt(1 / n)
            else:
                coeff = math.sqrt(2 / n) * math.cos(((2 * i + 1) * k * math.pi) / (2 * n))
            row.append(coeff)
        matrix.append(row)
    return matrix

def format_fixed(val):
    val &= 0xFFFFFFFF
    if OUTPUT_IN_HEX:
        return f"{val:08X}"
    else:
        return f"{val:032b}"

def main():
    dct_matrix = generate_dct_matrix(8)
    fixed_matrix = []

    print("// DCT Coefficient Matrix (Fixed-Point Q16.16)\n")

    for k, row in enumerate(dct_matrix):
        print(f"// Row {k}")
        fixed_row = []
        for val in row:
            fixed_val = float_to_fixed(val)
            fixed_row.append(fixed_val)
            if DEBUG_FLOAT:
                print(f"  float: {val:.6f} -> fixed: {fixed_val} (hex: {fixed_val & 0xFFFFFFFF:08X})")
        fixed_matrix.extend(fixed_row)  # 展平成一个列表（按行）
        print("  ", ", ".join(f"{v}" for v in fixed_row))
        print()

    # 导出 Verilog 初始化文件
    if EXPORT_VERILOG_INIT_FILE:
        with open(EXPORT_PATH, "w") as f:
            for val in fixed_matrix:
                f.write(format_fixed(val) + "\n")
        print(f"[+] Verilog init file written to: {EXPORT_PATH}")

if __name__ == "__main__":
    main()