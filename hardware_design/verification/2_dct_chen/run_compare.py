import subprocess
import sys

print("\n⚙️  Running 2D Chen DCT comparison")

name = "chen_2d_pipe"

try:
    result = subprocess.run(
        ["wsl", "bash", "compare.sh", name],
        check=True,
        capture_output=True,
        text=True,
        encoding='utf-8'
    )
    print("✅ 2D Chen DCT comparison output:\n", result.stdout)
except subprocess.CalledProcessError as e:
    print("❌ 2D Chen DCT comparison failed:")
    print(e.stdout)
    print(e.stderr)
    sys.exit(1)

print("\n🎉 2D Chen DCT comparison finished successfully.") 
