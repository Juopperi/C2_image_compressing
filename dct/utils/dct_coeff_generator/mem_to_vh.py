def mem_to_vh(mem_file, macro_name, output_vh_file):
    with open(mem_file, 'r') as f:
        lines = [line.strip() for line in f if line.strip()]

    with open(output_vh_file, 'w') as f:
        f.write(f"`define {macro_name} {{\n")

        for idx, val in enumerate(lines):
            val_clean = val.lower().replace("0x", "")  # remove any 0x prefix
            val_hex = val_clean.zfill(8).upper()       # ensure 8 hex digits

            f.write(f"    32'h{val_hex}")
            if idx != len(lines) - 1:
                f.write(",")
            f.write("\n")

        f.write("}\n")

    print(f"Macro `{macro_name}` written to {output_vh_file} with {len(lines)} values.")

# 示例用法
if __name__ == "__main__":
    mem_to_vh("./build/coeff_table.mem", "DCT_COEFFS_8x8", "dct_coeffs.vh")
