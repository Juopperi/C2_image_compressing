import math

# 设置是否显示浮点调试信息
DEBUG_FLOAT = True

# 定点格式：Q16.16（16位整数 + 16位小数）
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

def main():
    dct_matrix = generate_dct_matrix(8)
    print("// DCT Coefficient Matrix (Fixed-Point Q16.16)\n")

    for k, row in enumerate(dct_matrix):
        print(f"// Row {k}")
        fixed_row = []
        for val in row:
            fixed_val = float_to_fixed(val)
            fixed_row.append(fixed_val)
            if DEBUG_FLOAT:
                print(f"  float: {val:.6f} -> fixed: {fixed_val} (hex: {fixed_val & 0xFFFFFFFF:08X})")
        print("  ", ", ".join(f"{v}" for v in fixed_row))
        print()

if __name__ == "__main__":
    main()
