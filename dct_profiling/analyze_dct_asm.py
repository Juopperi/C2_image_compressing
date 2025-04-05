import re
from collections import Counter

# 简化的指令类别映射
INSTRUCTION_CATEGORIES = {
    "add": "add",
    "sub": "add",
    "mul": "mul",
    "imul": "mul",
    "fmul": "f_mul",
    "fdiv": "f_div",
    "fadd": "f_add",
    "fsub": "f_add",
    "ldr": "load",
    "ldrsw": "load",
    "str": "store",
    "mov": "move",
    "fmov": "f_move",
    "bl": "call",  # 函数调用，比如 _cos
    "adrp": "addressing",
}

def analyze_asm_with_loops(asm_text):
    lines = asm_text.splitlines()
    instruction_counts = Counter()

    # 模拟循环展开倍率
    current_multiplier = 1
    loop_stack = []
    loop_iterations_stack = []
    loop_depth = 0

    # ARM 汇编中，clang 会在 loop header 注释中标出 “Depth=1” 等
    for line in lines:
        line = line.strip()
        if not line or line.startswith(";") or line.startswith("."):
            continue

        # 检测 loop header 的深度信息
        depth_match = re.search(r"Depth=(\d+)", line)
        if depth_match:
            depth = int(depth_match.group(1))
            # 每层我们默认迭代 8 次（DCT 的固定循环结构）
            while loop_depth < depth:
                loop_depth += 1
                loop_iterations_stack.append(8)
                current_multiplier *= 8
            while loop_depth > depth:
                current_multiplier //= loop_iterations_stack.pop()
                loop_depth -= 1

        # 检测 loop 尾部
        if "b\tLBB" in line and "Loop" not in line and loop_iterations_stack:
            # 推测可能是 loop 跳出
            current_multiplier //= loop_iterations_stack.pop()
            loop_depth -= 1

        # 检查是否是可识别的指令
        parts = line.split()
        if not parts:
            continue
        instr = parts[0].lower()
        if instr in INSTRUCTION_CATEGORIES:
            op_type = INSTRUCTION_CATEGORIES[instr]
            instruction_counts[op_type] += current_multiplier

    return instruction_counts

# ====== 示例用法 ======

if __name__ == "__main__":
    import sys
    if len(sys.argv) != 2:
        print("Usage: python analyze_dct_asm.py your_file.s")
        sys.exit(1)

    asm_file = sys.argv[1]
    with open(asm_file, "r") as f:
        asm_text = f.read()

    result = analyze_asm_with_loops(asm_text)

    print("Instruction Count Estimate (with loop unfolding):")
    for op_type, count in result.items():
        print(f"{op_type:10s} : {count}")
