import os
import csv
import re

# 配置
base_dir = "synth_results"
output_csv = os.path.join(base_dir, "summary.csv")

with open(output_csv, mode="w", newline="") as f:
    writer = csv.writer(f)
    writer.writerow(["Module", "Width", "LUTs", "FFs", "DSPs", "TimingSlack"])

    for entry in os.scandir(base_dir):
        if entry.is_dir():
            folder = entry.name
            match = re.match(r"(.+)_w(\d+)", folder)
            if not match:
                continue

            module, width = match.groups()
            rpt_base = os.path.join(base_dir, folder, f"{folder}")
            util_file = rpt_base + "_util.rpt"
            timing_file = rpt_base + "_timing.rpt"

            luts = ffs = dsps = slack = "ERROR"

            # 解析新版 report_utilization 报告
            if os.path.isfile(util_file):
                with open(util_file, "r", encoding="utf-8", errors="ignore") as f_util:
                    inside_table = False
                    for line in f_util:
                        if "Instance" in line and "Total LUTs" in line:
                            inside_table = True
                            continue
                        if inside_table and re.match(r"\|\s*%s\s*\|" % module, line):
                            columns = [x.strip() for x in line.strip().split("|")]
                            try:
                                luts = columns[3]
                                ffs  = columns[7]
                                dsps = columns[10]
                            except IndexError:
                                pass
                            break

            # 提取时序 slack（如果存在）
            if os.path.isfile(timing_file):
                with open(timing_file, "r", encoding="utf-8", errors="ignore") as f_time:
                    for line in f_time:
                        if "Slack" in line and ":" in line:
                            slack = line.split(":")[1].strip()
                            break

            writer.writerow([module, width, luts, ffs, dsps, slack])

print(f"✅ 提取完成，结果写入：{output_csv}")
