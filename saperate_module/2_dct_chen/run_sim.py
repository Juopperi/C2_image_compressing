import os
import shutil
import subprocess
import sys

testbench_name = "tb_dct8x8_chen_2d"

# -----------------------------
# 解析参数
# -----------------------------
if len(sys.argv) < 2:
    print("Usage: python main.py <set count> [gen] [gui]")
    sys.exit(1)

set_count = sys.argv[1]
should_generate = len(sys.argv) > 2 and sys.argv[2].lower() == "gen"

# -----------------------------
# 源码路径配置
# -----------------------------
search_dirs = [
    "rtl",
    "tb",
    "../fixed_point"
]

valid_extensions = {'.v', '.sv', '.vhd', '.vhdl'}
output_file = "simulate.ps1"


# -----------------------------
# 检查是否启用 GUI 模式
# -----------------------------
gui_mode = any(arg.lower() in {"gui", "-g", "--gui"} for arg in sys.argv)

# -----------------------------
# 生成 simulate.ps1 内容（含 +acc / gui 控制）
# -----------------------------
print("\n📦 Generating simulation script...")

vlog_lines = []
for folder in search_dirs:
    for root, _, files in os.walk(folder):
        for f in files:
            ext = os.path.splitext(f)[1].lower()
            if ext in valid_extensions:
                full_path = os.path.normpath(os.path.join(root, f))
                rel_path = os.path.relpath(full_path, start=".")
                if ext in {'.v', '.vh', '.sv'}:
                    vlog_lines.append(f'vlog -sv "../../{rel_path}"')
                elif ext in {'.vhd', '.vhdl'}:
                    vlog_lines.append(f'vcom "../../{rel_path}"')

vsim_cmd = f'vsim {"-c" if not gui_mode else ""} -voptargs=+acc work.{testbench_name}'

if gui_mode:
    vsim_cmd += ' -do "view wave; view structure; view signals;"'
else:
    vsim_cmd += ' -do "run 200 us; quit -f"'

do_script = [
    "vlib work",
    "vmap work work",
    *vlog_lines,
    vsim_cmd
]


# Ensure the target directory exists


with open(output_file, 'w') as f:
    f.write('\n'.join(do_script))
print(f"✅ Created '{output_file}' with {len(vlog_lines)} source files.")

# 移动脚本文件
target_path = os.path.join("tb", "sim", output_file)
os.makedirs(os.path.dirname(target_path), exist_ok=True)
if os.path.exists(target_path):
    os.remove(target_path)
    print(f"🗑️ Removed old '{target_path}'")
shutil.move(output_file, target_path)
print(f"📂 Moved new script to '{target_path}'")

# -----------------------------
# 是否重新生成测试向量
# -----------------------------
if should_generate:
    print("\n⚙️  Running: wsl bash gen_put_vector.sh ...")

    try:
        max_val = int(set_count)
        min_val = -(max_val - 1)
        print(f"🔢 Computed range: min = {min_val}, max = {max_val}")
    except ValueError:
        print("❌ set_count must be an integer (e.g., 4096)")
        sys.exit(1)

    try:
        result = subprocess.run(
            ["wsl", "bash", "gen_put_vector.sh", f"{set_count}"],
            check=True,
            capture_output=True,
            text=True,
            encoding='utf-8'
        )
        print("✅ gen_put_vector.sh output:\n", result.stdout)
    except subprocess.CalledProcessError as e:
        print("❌ Error running gen_put_vector.sh:")
        print(e.stderr)
        sys.exit(1)
else:
    print("\n🧩 Skipping test vector generation (no 'gen' flag passed).")


# -----------------------------
# 仿真前暂停确认
# -----------------------------
# input("\n⏸ Press Enter to start simulation...")

# -----------------------------
# 执行仿真脚本
# -----------------------------
sim_dir = os.path.join("tb", "sim")
script_path = os.path.join(sim_dir, output_file)

if not os.path.exists(script_path):
    print(f"❌ Cannot find simulation script: {script_path}")
    sys.exit(1)

os.chdir(sim_dir)
print(f"\n📁 Changed working directory to: {os.getcwd()}")
print(f"▶️  Running: {output_file}")

try:
    subprocess.run(["powershell", "-ExecutionPolicy", "Bypass", "-File", output_file], check=True, encoding='utf-8')
    print("✅ Simulation completed.")
except subprocess.CalledProcessError as e:
    print("❌ Simulation failed.")
    print(e)
    sys.exit(1)


import subprocess
import glob
import shutil
import os

for filepath in glob.glob("*output*.mem"):
    shutil.copy(filepath, "../saved_output")

