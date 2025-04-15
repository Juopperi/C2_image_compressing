import numpy as np
import matplotlib.pyplot as plt
from math import ceil
import os

N = 8  # Block size: 8x8
BLOCK_PIXELS = N * N
BLOCKS_PER_ROW = 10  # How many 8x8 blocks per row
INPUT_FILES = ["input_R.mem", "input_G.mem", "input_B.mem"]

def load_channel(filename):
    if not os.path.exists(filename):
        raise FileNotFoundError(f"Missing file: {filename}")
    with open(filename, "r") as f:
        hex_lines = f.readlines()
        return np.array([int(line.strip(), 16) for line in hex_lines], dtype=np.uint8)

def reconstruct_image(r_all, g_all, b_all):
    total_blocks = len(r_all) // BLOCK_PIXELS
    blocks_per_col = ceil(total_blocks / BLOCKS_PER_ROW)
    img_h = blocks_per_col * N
    img_w = BLOCKS_PER_ROW * N

    image = np.zeros((img_h, img_w, 3), dtype=np.uint8)

    for idx in range(total_blocks):
        row_block = idx // BLOCKS_PER_ROW
        col_block = idx % BLOCKS_PER_ROW
        row_start = row_block * N
        col_start = col_block * N

        r_block = r_all[idx * BLOCK_PIXELS:(idx + 1) * BLOCK_PIXELS].reshape((N, N))
        g_block = g_all[idx * BLOCK_PIXELS:(idx + 1) * BLOCK_PIXELS].reshape((N, N))
        b_block = b_all[idx * BLOCK_PIXELS:(idx + 1) * BLOCK_PIXELS].reshape((N, N))

        image[row_start:row_start + N, col_start:col_start + N, 0] = r_block
        image[row_start:row_start + N, col_start:col_start + N, 1] = g_block
        image[row_start:row_start + N, col_start:col_start + N, 2] = b_block

    return image

def main():
    print("Loading mem files...")
    r_all = load_channel("input_R.mem")
    g_all = load_channel("input_G.mem")
    b_all = load_channel("input_B.mem")

    assert len(r_all) == len(g_all) == len(b_all), "Mismatched input lengths"

    print("Reconstructing image...")
    image = reconstruct_image(r_all, g_all, b_all)

    plt.figure(figsize=(10, 10))
    plt.imshow(image)
    plt.axis('off')
    plt.title("RGB Visualization from input_*.mem")
    plt.tight_layout()
    plt.savefig("visualized_rgb_blocks.png", dpi=300)
    plt.show()

if __name__ == "__main__":
    main()
