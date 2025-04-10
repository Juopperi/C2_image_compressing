def mem_to_wire(mem_file, wire_name, output_file):
    # 1) 读入 .mem 文件 (64 行)
    with open(mem_file, 'r') as f:
        lines = [l.strip() for l in f if l.strip()]

    if len(lines) != 64:
        print(f"[Warning] Expected 64 lines in {mem_file}, got {len(lines)}.")
    
    # 2) 将 64 行分成 8 组，每组 8 行(对应 row)
    #    row0 = lines[0..7], row1 = lines[8..15], ..., row7 = lines[56..63]
    row_chunks = [lines[i*8:(i+1)*8] for i in range(8)]
    
    # 3) 逆序排列 => row7 在前, row6, ..., row0 在最后
    reordered = []
    for row_idx in reversed(range(8)):
        reordered.extend(row_chunks[row_idx])

    # 4) 输出为 Verilog wire 形式
    with open(output_file, 'w') as f:
        f.write(f"wire [32*64-1:0] {wire_name} = {{\n")
        for idx, val in enumerate(reordered):
            # 清理并补足 hex
            val_clean = val.lower().replace("0x", "")
            val_hex   = val_clean.zfill(8).upper()  # 8 位16进制
            
            # 每个条目写成 32'hXXXX_XXXX
            f.write(f"    32'h{val_hex}")
            # 中间加逗号，最后一个不加
            if idx != len(reordered) - 1:
                f.write(",\n")
            else:
                f.write("\n")
        f.write("};\n")

    print(f"[OK] Generated {output_file} with 64 lines in descending row order.")

def main():
    # 示例调用：将 coeff_table.mem 转为 dct_coeffs.v
    # wire 名字设为 dct_coeffs
    mem_to_wire("coeff_table.mem", "dct_coeffs", "dct_coeffs.v")

if __name__ == "__main__":
    main()
