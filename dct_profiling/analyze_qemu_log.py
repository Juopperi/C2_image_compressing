from collections import Counter
import re

def parse_qemu_log(filename):
    counter = Counter()
    total_lines = 0
    matched_lines = 0

    with open(filename) as f:
        for line in f:
            total_lines += 1

            # 跳过非指令行（function label）
            if line.strip().startswith("IN:"):
                continue

            # 匹配指令部分，例如：
            # 0x000000000041ffe4:  b00003a4      adrp x4, #+0x75000
            match = re.match(r"0x[0-9a-fA-F]+:\s+[0-9a-fA-F]+\s+([a-zA-Z.]+)", line)
            if match:
                instr = match.group(1).lower()
                counter[instr] += 1
                matched_lines += 1

    print(f"\n[info] Total lines: {total_lines}, matched instructions: {matched_lines}")
    return counter

if __name__ == "__main__":
    result = parse_qemu_log("qemu.log")

    print("\nInstruction Execution Count:")
    for instr, count in result.most_common():
        print(f"{instr:10s}: {count}")
