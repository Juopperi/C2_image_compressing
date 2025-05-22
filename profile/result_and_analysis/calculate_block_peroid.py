import re
import numpy as np
import matplotlib.pyplot as plt
import matplotlib
matplotlib.use('TkAgg')

# Processing steps
steps = [
    "RGB to YCbCr conversion",
    "Chroma subsampling",
    "DCT transform",
    "Quantization",
    "Zigzag + Run-length Encoding + Huffman",
]

# Initialize data structures
image_sizes = []  # Image dimensions
block_counts = []  # Number of 8x8 pixel blocks
per_block_times = {step: [] for step in steps}  # Average time per block for each step

# Read log file
with open("PROFILE.TXT", "r") as f:
    content = f.read()

# Split log content by processing blocks
blocks = content.split("========================================")

for block in blocks:
    if "Image name" not in block:
        continue
    
    # Extract image dimensions
    dim_match = re.search(r'Width:\s+(\d+)\s+Height:\s+(\d+)\s+Channels:\s+(\d+)', block)
    if dim_match:
        width = int(dim_match.group(1))
        height = int(dim_match.group(2))
        
        # Calculate number of 8x8 blocks
        num_blocks = (width // 8) * (height // 8)
        
        image_sizes.append(f"{width}x{height}")
        block_counts.append(num_blocks)
        
        # Extract processing time for each step
        for step in steps:
            # Handle the renamed encoding step
            if step == "Zigzag + Run-length Encoding + Huffman":
                pattern = re.compile(r'Encoding time: ([\d.]+) seconds')
            else:
                pattern = re.compile(rf'{re.escape(step)} time: ([\d.]+) seconds')
                
            match = pattern.search(block)
            
            if match:
                time_seconds = float(match.group(1))
                # Calculate average processing time per 8x8 block (in nanoseconds)
                # per_block_time_ns = (time_seconds * 1e9) / num_blocks
                per_block_time_ns = (time_seconds * 1e8) / num_blocks
                per_block_times[step].append(per_block_time_ns)
            else:
                per_block_times[step].append(0.0)

# Sort data by image size
sizes_with_indices = [(int(size.split('x')[0]), i) for i, size in enumerate(image_sizes)]
sizes_with_indices.sort()  # Sort by width
sorted_indices = [i for _, i in sizes_with_indices]

sorted_image_sizes = [image_sizes[i] for i in sorted_indices]
sorted_block_counts = [block_counts[i] for i in sorted_indices]
sorted_per_block_times = {step: [per_block_times[step][i] for i in sorted_indices] for step in steps}

# Print results
print("Average processing time per 8x8 pixel block (nanoseconds):")
print("-" * 80)
print(f"{'Image Size':<15} {'Block Count':<15}", end="")
for step in steps:
    print(f"{step[:15]:<15}", end="")
print()
print("-" * 80)

for i, size in enumerate(sorted_image_sizes):
    print(f"{size:<15} {sorted_block_counts[i]:<15}", end="")
    for step in steps:
        print(f"{sorted_per_block_times[step][i]:.2f}ns{'':<10}", end="")
    print()

# Visualize processing time per 8x8 block for each image using line chart
plt.figure(figsize=(12, 8))

# Create x-axis tick positions and labels
x = np.arange(len(sorted_image_sizes))

# Plot line for each step
for step in steps:
    plt.plot(x, sorted_per_block_times[step], marker='o', linewidth=2, label=step)

plt.xlabel('Image Size')
plt.ylabel('Average Processing Period per Block (10ns)')
plt.title('Average Processing Period per 8x8 Pixel Block')
plt.xticks(x, sorted_image_sizes)
plt.grid(True, linestyle='--', alpha=0.7)
plt.legend()
plt.tight_layout()
plt.ylim(bottom=0)
plt.savefig('per_block_processing_period.png')
plt.show()

# Calculate average for each step
print("\nAverage processing time per step across all images (per 8x8 block):")
for step in steps:
    avg_time = np.mean([t for t in sorted_per_block_times[step] if t > 0])
    print(f"{step}: {avg_time:.2f} nanoseconds/block") 