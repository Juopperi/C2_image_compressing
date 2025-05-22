import subprocess
import sys

channels = ["zigzag"]
for ch in channels:
    print(f"\n⚙️  Running comparison for channel: {ch}")

    try:
        result = subprocess.run(
            ["wsl", "bash", "compare.sh", ch],
            check=True,
            capture_output=True,
            text=True,
            encoding='utf-8'
        )
        print(f"✅ {ch} comparison output:\n", result.stdout)
    except subprocess.CalledProcessError as e:
        print(f"❌ {ch} comparison failed:")
        print(e.stdout)
        print(e.stderr)
        sys.exit(1)

print("\n🎉 All channel comparisons finished.")
