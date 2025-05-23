import re
import numpy as np
from tabulate import tabulate

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
    
    # Extract image dimensions and name
    name_match = re.search(r'Image name: ([^\n]+)', block)
    image_name = name_match.group(1) if name_match else "Unknown"
    
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
                per_block_time_ns = (time_seconds * 1e9) / num_blocks
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

# Calculate total processing time per block for each image
total_block_times = []
for i in range(len(sorted_image_sizes)):
    total_time = sum(sorted_per_block_times[step][i] for step in steps)
    total_block_times.append(total_time)

# Prepare data for detailed table (per image)
detailed_table_data = []
for i, size in enumerate(sorted_image_sizes):
    row = [size, sorted_block_counts[i]]
    for step in steps:
        row.append(f"{sorted_per_block_times[step][i]:.2f}")
    row.append(f"{total_block_times[i]:.2f}")
    detailed_table_data.append(row)

# Create headers
detailed_headers = ["Image Size", "Block Count"] + steps + ["Total"]

# Print detailed table for each image
print("Detailed Processing Time per 8x8 Pixel Block (nanoseconds):")
print(tabulate(detailed_table_data, headers=detailed_headers, tablefmt="grid"))
print("\n")

# Calculate average for each step and prepare summary table
summary_table_data = []
for step in steps:
    avg_time = np.mean([t for t in sorted_per_block_times[step] if t > 0])
    summary_table_data.append([step, f"{avg_time:.2f}"])

# Add total average time
avg_total_time = np.mean([t for t in total_block_times if t > 0])
summary_table_data.append(["Total (all steps)", f"{avg_total_time:.2f}"])

# Print summary table
print("Average Processing Time per Step (nanoseconds per block):")
print(tabulate(summary_table_data, headers=["Processing Step", "Average Time (ns/block)"], tablefmt="grid")) 