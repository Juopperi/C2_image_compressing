import numpy as np
from scipy.fftpack import dct, idct

# --- RGB to YCbCr conversion ---
def rgb_to_ycbcr(rgb):
    transform = np.array([[ 0.299,     0.587,     0.114],
                          [-0.168736, -0.331264,  0.5],
                          [ 0.5,      -0.418688, -0.081312]])
    offset = np.array([0, 128, 128])
    return np.dot(rgb, transform.T) + offset

# --- 2D DCT ---
def dct2(block):
    return dct(dct(block.T, norm='ortho').T, norm='ortho')

# --- Quantization Tables ---
# Standard JPEG Luminance Quantization Table
q_luminance = np.array([
    [16, 11, 10, 16, 24, 40, 51, 61],
    [12, 12, 14, 19, 26, 58, 60, 55],
    [14, 13, 16, 24, 40, 57, 69, 56],
    [14, 17, 22, 29, 51, 87, 80, 62],
    [18, 22, 37, 56, 68, 109,103,77],
    [24, 35, 55, 64, 81, 104,113,92],
    [49, 64, 78, 87, 103,121,120,101],
    [72, 92, 95, 98, 112,100,103,99]
], dtype=np.float32)

# --- Main Process ---
def process(rgb_input):
    # Step 1: RGB to YCbCr
    ycbcr = np.zeros_like(rgb_input, dtype=np.float32)
    for i in range(8):
        for j in range(8):
            ycbcr[i, j] = rgb_to_ycbcr(rgb_input[i, j])

    # Split channels
    Y  = ycbcr[:, :, 0]
    Cb = ycbcr[:, :, 1]
    Cr = ycbcr[:, :, 2]

    # Step 2: DCT
    dct_Y  = dct2(Y)
    dct_Cb = dct2(Cb)
    dct_Cr = dct2(Cr)

    # Step 3: Quantization
    q_Y  = np.round(dct_Y / q_luminance).astype(int)
    q_Cb = np.round(dct_Cb / q_luminance).astype(int)
    q_Cr = np.round(dct_Cr / q_luminance).astype(int)

    return q_Y, q_Cb, q_Cr

# --- Test Input (Choose one) ---
def generate_input(value=0):
    """value: 0 for all-black, 255 for all-white"""
    rgb = np.full((8, 8, 3), fill_value=value, dtype=np.uint8)
    return rgb

# --- Run ---
if __name__ == '__main__':
    rgb_data = generate_input(value=0)  # change to 255 for all-white
    q_Y, q_Cb, q_Cr = process(rgb_data)

    print("Quantized Y:")
    print(q_Y)
    print("\nQuantized Cb:")
    print(q_Cb)
    print("\nQuantized Cr:")
    print(q_Cr)
