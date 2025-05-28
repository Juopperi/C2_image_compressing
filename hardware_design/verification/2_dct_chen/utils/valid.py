import numpy as np

def init_dct_matrix(N):
    """generate N×N of DCT Transform matrix T[u,x] = α(u) * cos((2x+1)uπ/(2N))"""
    T = np.zeros((N, N), dtype=float)
    for u in range(N):
        alpha = np.sqrt(0.5) if u == 0 else 1.0
        for x in range(N):
            T[u, x] = alpha * np.cos((2*x + 1) * u * np.pi / (2 * N))
    return T

def dct2d(A):
    """calculate 2D DCT：C = 1/4 * T · A · T^T"""
    N = A.shape[0]
    T = init_dct_matrix(N)
    return 0.25 * T.dot(A).dot(T.T)

def main():
    N = 8
    # Construct example input：0…63
    A = np.fromfunction(lambda i, j: i * N + j, (N, N), dtype=float)

    # calculate 2D DCT
    C = dct2d(A)

    # Format output，reserve 6 Decimal places
    np.set_printoptions(precision=6, suppress=True)
    for row in C:
        print(" ".join(f"{val:10.6f}" for val in row))

if __name__ == "__main__":
    main()
