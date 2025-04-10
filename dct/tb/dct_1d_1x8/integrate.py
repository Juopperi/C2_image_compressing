import sys

def merge_files(output_file, prefix="dct_2d_out_group", total_groups=1000):
    with open(output_file, 'w') as fout:
        for i in range(total_groups):
            filename = f"{prefix}{i}.mem"
            try:
                with open(filename, 'r') as fin:
                    for line in fin:
                        stripped = line.strip()
                        if not stripped.startswith("//"):
                            fout.write(line)
            except FileNotFoundError:
                print(f"Warning: File {filename} not found. Skipping.")
    print(f"All group files merged into: {output_file}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python merge_dct_groups.py <output_filename>")
        sys.exit(1)
    merge_files(sys.argv[1])
