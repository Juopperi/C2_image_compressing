import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import os

def analyze_position_distribution(csv_path, title="cb", block_size=64, threshold=10):
    df = pd.read_csv(csv_path)
    diffs = df['diff'].to_numpy()

    if len(diffs) % block_size != 0:
        print("Warning: diff length is not a multiple of block size")

    num_blocks = len(diffs) // block_size
    diffs = diffs[:num_blocks * block_size].reshape((-1, block_size))

    # Calculate the error statistics for each position
    avg_error = np.mean(np.abs(diffs), axis=0)
    max_error = np.max(np.abs(diffs), axis=0)
    large_error_count = np.sum(np.abs(diffs) > threshold, axis=0)

    return avg_error, max_error, large_error_count

def plot_position_stats(avg, maxv, count, title_prefix):
    x = np.arange(64)

    # Bar chart：Average error
    plt.figure(figsize=(10, 4))
    plt.bar(x, avg)
    plt.title(f"{title_prefix} - Avg Abs Error per Position")
    plt.xlabel("Position in 8x8 block (0~63)")
    plt.ylabel("Average |Error|")
    plt.grid(True)
    plt.tight_layout()
    plt.savefig(f"result/avg_error_{title_prefix.lower()}.png")

    # Bar chart：Maximum error
    plt.figure(figsize=(10, 4))
    plt.bar(x, maxv)
    plt.title(f"{title_prefix} - Max Abs Error per Position")
    plt.xlabel("Position in 8x8 block (0~63)")
    plt.ylabel("Max |Error|")
    plt.grid(True)
    plt.tight_layout()
    plt.savefig(f"result/max_error_{title_prefix.lower()}.png")

    # Bar chart：Threshold number
    plt.figure(figsize=(10, 4))
    plt.bar(x, count)
    plt.title(f"{title_prefix} - Error > Threshold Count")
    plt.xlabel("Position in 8x8 block (0~63)")
    plt.ylabel("Count of |Error| > threshold")
    plt.grid(True)
    plt.tight_layout()
    plt.savefig(f"result/error_count_{title_prefix.lower()}.png")

    # Thermal map：Average error reshape for 8x8
    heatmap_data = avg.reshape((8, 8))  # Default row priority

    plt.figure(figsize=(6, 5))
    plt.imshow(heatmap_data, cmap='hot', interpolation='nearest')
    plt.colorbar(label="Avg |Error|")
    plt.title(f"{title_prefix} - Heatmap of Avg Abs Error (8x8 block)")
    plt.xticks(np.arange(8))
    plt.yticks(np.arange(8))
    plt.tight_layout()
    plt.savefig(f"result/heatmap_avg_error_{title_prefix.lower()}.png")

def run_all():
    os.makedirs("result", exist_ok=True)

    # cb
    avg_cb, max_cb, count_cb = analyze_position_distribution(
        "result/diff_Cb.csv", title="cb", block_size=64, threshold=10)
    plot_position_stats(avg_cb, max_cb, count_cb, "cb")

    # cr
    avg_cr, max_cr, count_cr = analyze_position_distribution(
        "result/diff_Cr.csv", title="cr", block_size=64, threshold=10)
    plot_position_stats(avg_cr, max_cr, count_cr, "cr")

    
    # y
    avg_y, max_y, count_y = analyze_position_distribution(
        "result/diff_Y.csv", title="Y", block_size=64, threshold=10)
    plot_position_stats(avg_y, max_y, count_y, "y")

    print("✅ Analysis completed，Thermal graph and bar graph have been generated in result/")

if __name__ == "__main__":
    run_all()
