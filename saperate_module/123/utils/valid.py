import numpy as np

def init_dct_matrix(N):
    """生成 N×N 的 DCT 变换矩阵 T[u,x] = α(u) * cos((2x+1)uπ/(2N))"""
    T = np.zeros((N, N), dtype=float)
    for u in range(N):
        alpha = np.sqrt(0.5) if u == 0 else 1.0
        for x in range(N):
            T[u, x] = alpha * np.cos((2*x + 1) * u * np.pi / (2 * N))
    return T

def dct2d(A):
    """计算 2D DCT：C = 1/4 * T · A · T^T"""
    N = A.shape[0]
    T = init_dct_matrix(N)
    return 0.25 * T.dot(A).dot(T.T)

def main():
    N = 8
    # 构造示例输入：0…63
    A = np.fromfunction(lambda i, j: i * N + j, (N, N), dtype=float)

    # 计算 2D DCT
    C = dct2d(A)

    # 格式化输出，保留 6 位小数
    np.set_printoptions(precision=6, suppress=True)
    for row in C:
        print(" ".join(f"{val:10.6f}" for val in row))

if __name__ == "__main__":
    main()
