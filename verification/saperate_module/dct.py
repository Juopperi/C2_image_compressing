import torch
import math

def dct_1d(x):
    """
    Compute DCT type-II using matrix formulation.
    Input: x [N] or [B, N]
    Output: DCT [same shape]
    """
    N = x.shape[-1]
    device = x.device
    x = x.float()

    k = torch.arange(N, device=device).reshape(-1, 1)  # [N, 1]
    n = torch.arange(N, device=device).reshape(1, -1)  # [1, N]

    alpha = torch.ones(N, device=device)
    alpha[0] = math.sqrt(1.0 / N)
    alpha[1:] = math.sqrt(2.0 / N)

    dct_matrix = alpha[:, None] * torch.cos(math.pi * (2 * n + 1) * k / (2 * N))  # [N, N]

    return x @ dct_matrix.T if x.ndim == 2 else dct_matrix @ x

def dct_2d(x):
    """
    2D DCT (applies 1D DCT on rows, then on columns)
    Input: x [H, W] or [B, H, W]
    Output: same shape
    """
    if x.ndim == 2:
        return dct_1d(dct_1d(x.T).T)
    elif x.ndim == 3:
        return torch.stack([dct_1d(dct_1d(im.T).T) for im in x])


if __name__ == "__main__":
    # 模拟一个 8x8 图像块，像素范围 0–255
    x = torch.randint(0, 256, (8, 8), dtype=torch.float32)

    print("Input:")
    print(x)

    dct_out = dct_2d(x)

    print("DCT Coefficients:")
    print(dct_out)
