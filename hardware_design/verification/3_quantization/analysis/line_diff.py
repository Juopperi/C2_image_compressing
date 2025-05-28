import os
import pandas as pd
import matplotlib.pyplot as plt

folder = './result'
pattern_prefix = 'diff_distribution_'
pattern_suffix = '.csv'

file_list = [f for f in os.listdir(folder) if f.startswith(pattern_prefix) and f.endswith(pattern_suffix)]
file_list.sort(key=lambda x: int(x.replace(pattern_prefix, '').replace(pattern_suffix, '')))

stats = {
    'group': [],
    'mean': [],
    'std': [],
    'max': []
}

for file in file_list:
    path = os.path.join(folder, file)
    try:
        df = pd.read_csv(path)
        df.columns = [col.strip() for col in df.columns]
        if 'diff' not in df.columns:
            print(f"[jump over] {file} — No 'diff' List，实际List名：{df.columns.tolist()}")
            continue

        diffs = df['diff'].astype(float)
        group = int(file.replace(pattern_prefix, '').replace(pattern_suffix, ''))

        stats['group'].append(group)
        stats['mean'].append(diffs.mean())
        stats['std'].append(diffs.std())
        stats['max'].append(diffs.max())
        print(f"[Read successfully] {file} ({len(diffs)} item)")
    except Exception as e:
        print(f"[An error occurred] Read {file} An error occurred while：{e}")

# Turn to DataFrame
stats_df = pd.DataFrame(stats)
stats_df.sort_values(by='group', inplace=True)

# Draw pictures
plt.figure(figsize=(10, 6))
plt.plot(stats_df['group'], stats_df['mean'], marker='o', label='Mean')
plt.plot(stats_df['group'], stats_df['std'], marker='s', label='Std')
plt.plot(stats_df['group'], stats_df['max'], marker='^', label='Max')

plt.xscale('log')  # Logarithmic coordinates of horizontal axis（By sample size）
plt.yscale('log')  # Logarithmic coordinates of vertical axis（Wide error range）

plt.xlabel('Sample Size (log scale)')
plt.ylabel('Diff Error (log scale)')
plt.title('Diff Distribution Statistics vs Sample Size')
plt.grid(True, which='both', linestyle='--', alpha=0.5)
plt.legend()
plt.tight_layout()
plt.savefig('line_diff_log_stats.png', dpi=300)
plt.show()

# Save as a text table
output_txt = 'diff_stats.txt'
with open(output_txt, 'w') as f:
    f.write(f"{'Sample Size':>12} | {'Mean':>12} | {'Std Dev':>12} | {'Max':>12}\n")
    f.write("-" * 55 + "\n")
    for _, row in stats_df.iterrows():
        f.write(f"{int(row['group']):>12} | {row['mean']:<12.6e} | {row['std']:<12.6e} | {row['max']:<12.6e}\n")

print(f"Error statistics have been saved to {output_txt}")

