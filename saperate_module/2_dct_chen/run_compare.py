import subprocess
import sys

print("\n⚙️  Running 1D DCT comparison")

try:
    result = subprocess.run(
        ["wsl", "bash", "compare_1d.sh"],
        check=True,
        capture_output=True,
        text=True,
        encoding='utf-8'
    )
    print("✅ 1D DCT comparison output:\n", result.stdout)
except subprocess.CalledProcessError as e:
    print("❌ 1D DCT comparison failed:")
    print(e.stdout)
    print(e.stderr)
    sys.exit(1)

print("\n🎉 1D DCT comparison finished successfully.") 
