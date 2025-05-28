import math

SCALE = 65536
for i in range(8):
    val = math.cos(math.pi * i / 16)
    fixed = int(val * SCALE + 0.5)
    print(f"localparam integer C{i} = {fixed}; // cos(pi*{i}/16) ≈ {val:.6f}")
