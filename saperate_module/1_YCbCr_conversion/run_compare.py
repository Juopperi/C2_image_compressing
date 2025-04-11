import subprocess
import sys

# -----------------------------
# 解析参数
# -----------------------------
if len(sys.argv) != 2:
    print("Usage: python compare.py <output_filename>")
    sys.exit(1)

output_filename = sys.argv[1]

# -----------------------------
# 执行 compare.sh 脚本
# -----------------------------
print(f"⚙️  Running: bash compare.sh {output_filename}")

try:
    result = subprocess.run(
        ["wsl", "bash", "compare.sh", output_filename],
        check=True,
        capture_output=True,
        text=True,
        encoding='utf-8'
    )
    print("✅ compare.sh output:\n", result.stdout)
except subprocess.CalledProcessError as e:
    print("❌ compare.sh execution failed:")
    print(e.stdout)
    print(e.stderr)
    sys.exit(1)
