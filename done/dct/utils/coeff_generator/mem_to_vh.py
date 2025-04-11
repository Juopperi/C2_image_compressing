def mem_to_vh(mem_file, var_name, output_vh_file):
    with open(mem_file, 'r') as f:
        lines = [line.strip() for line in f if line.strip()]

    if len(lines) != 64:
        raise ValueError(f"Expected 64 coefficients, got {len(lines)}")

    with open(output_vh_file, 'w') as f:
        f.write(f"wire [32*64-1:0] {var_name} = {{\n")

        for idx, val in enumerate(lines):  # 反转输出，低地址放在低位（拼接右边）
            val_clean = val.lower().replace("0x", "")
            val_hex = val_clean.zfill(8).upper()

            f.write(f"    32'h{val_hex}")
            if idx != 63:
                f.write(",\n")
            else:
                f.write("\n")

        f.write("};\n")

    print(f"`{var_name}` written to {output_vh_file} with memory order preserved (mem[0] -> LSB).")

    
if __name__ == "__main__":
    mem_to_vh("./build/coeff_table.mem", "dct_coeffs", "dct_coeffs.vh")
