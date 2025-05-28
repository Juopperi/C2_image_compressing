import os
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

folder = './result'
pattern_prefix = 'diff_distribution_'
pattern_suffix = '.csv'

file_list = [f for f in os.listdir(folder) if f.startswith(pattern_prefix) and f.endswith(pattern_suffix)]
file_list.sort(key=lambda x: int(x.replace(pattern_prefix, '').replace(pattern_suffix, '')))

# Store all in long format diff Value and its corresponding group name
long_data = []

for file in file_list:
    path = os.path.join(folder, file)
    try:
        df = pd.read_csv(path)
        df.columns = [col.strip() for col in df.columns]
        if 'diff' not in df.columns:
            print(f"[jump over] {file} — No 'diff' List，实际List名：{df.columns.tolist()}")
            continue

        diffs = df['diff'].astype(float)
        label = file.replace(pattern_prefix, '').replace(pattern_suffix, '')
        long_data.append(pd.DataFrame({'diff': diffs, 'group': label}))
        print(f"[Read successfully] {file} ({len(diffs)} item)")
    except Exception as e:
        print(f"[An error occurred] Read {file} An error occurred while：{e}")

# Merge into one DataFrame
plot_df = pd.concat(long_data, ignore_index=True)

# Draw pictures
plt.figure(figsize=(12, 6))
sns.boxplot(x='group', y='diff', data=plot_df)
plt.xlabel('Sample Size')
plt.ylabel('Diff Error')
plt.title('Boxplot of Diff Distribution Across Different Samples')
plt.grid(True, linestyle='--', alpha=0.5)
plt.tight_layout()
plt.savefig('boxplot_diff_distribution_fixed.png', dpi=300)
plt.show()
