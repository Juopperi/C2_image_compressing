import sys
import os
import shutil

def merge_files(output_file, prefix="dct_2d_out_group", total_groups=1000):
    actual_path = f'./saved_output/actual_{output_file}.mem'
    with open(actual_path, 'w') as fout:
        for i in range(total_groups):
            filename = f"./sim/{prefix}{i}.mem"
            try:
                with open(filename, 'r') as fin:
                    for line in fin:
                        stripped = line.strip()
                        if not stripped.startswith("//"):
                            fout.write(line)
            except FileNotFoundError:
                print(f"Warning: File {filename} not found. Skipping.")
    
    print(f"All group files have been merged into: {actual_path}")

    # Move and rename multi_output.mem
    src_mem_path = "./sim/multi_output.mem"
    dst_mem_path = f"./saved_output/expected_{output_file}.mem"

    if os.path.exists(src_mem_path):
        shutil.copy(src_mem_path, dst_mem_path)
        print(f"Moved and renamed 'sim/multi_output.mem' to '{dst_mem_path}'")
    else:
        print("Warning: 'sim/multi_output.mem' not found. Skipping.")

    # Move and rename multi_input.mem
    src_mem_path = "./sim/multi_input.mem"
    dst_mem_path = f"./test_vector/input_{output_file}.mem"

    if os.path.exists(src_mem_path):
        shutil.copy(src_mem_path, dst_mem_path)
        print(f"Moved and renamed 'sim/multi_input.mem' to '{dst_mem_path}'")
    else:
        print("Warning: 'sim/multi_input.mem' not found. Skipping.")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python merge_dct_groups.py <output_filename>")
        sys.exit(1)
    merge_files(sys.argv[1])
