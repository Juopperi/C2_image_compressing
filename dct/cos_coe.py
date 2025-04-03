import math

def generate_2d_dct_cos_table():
    """
    生成二维DCT的余弦乘积表：
    cos_table[u][v][x][y] = cos((2x+1)*u*π/16) * cos((2y+1)*v*π/16)
    """
    cos_table = [[[[0.0 for _ in range(8)] for _ in range(8)] for _ in range(8)] for _ in range(8)]
    
    for u in range(8):
        for v in range(8):
            for x in range(8):
                for y in range(8):
                    # 计算水平和垂直方向的余弦值
                    angle_x = (2 * x + 1) * u * math.pi / 16
                    angle_y = (2 * y + 1) * v * math.pi / 16
                    cos_x = math.cos(angle_x)
                    cos_y = math.cos(angle_y)
                    cos_table[u][v][x][y] = cos_x * cos_y
    return cos_table

def print_partial_table(cos_table):
    """打印部分余弦值以验证正确性"""
    print("示例：u=0, v=0 (所有位置应为1.0)")
    for x in range(8):
        for y in range(8):
            print(f"{cos_table[0][0][x][y]:.6f}", end=" ")
        print()

    print("\n示例：u=1, v=1, x=0, y=0 (应为cos(π/16)^2 ≈ 0.961936)")
    print(f"{cos_table[1][1][0][0]:.6f}")

    print("\n示例：u=7, v=7, x=7, y=7 (应为cos(15π/16)^2 ≈ 0.961936)")
    print(f"{cos_table[7][7][7][7]:.6f}")

if __name__ == "__main__":
    cos_table = generate_2d_dct_cos_table()
    print_partial_table(cos_table)