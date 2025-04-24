import os
import re
from collections import defaultdict

# 支持的文件扩展名
SUPPORTED_EXTENSIONS = ['.v', '.sv', '.vhdl']

# 正则表达式匹配 Verilog/SystemVerilog 和 VHDL 的模块定义
VERILOG_MODULE_RE = re.compile(r'\bmodule\s+(\w+)\b', re.IGNORECASE)
VHDL_ENTITY_RE = re.compile(r'\bentity\s+(\w+)\s+is\b', re.IGNORECASE)

def find_modules_in_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    if filepath.endswith(('.v', '.sv')):
        return VERILOG_MODULE_RE.findall(content)
    elif filepath.endswith('.vhdl'):
        return VHDL_ENTITY_RE.findall(content)
    return []

def find_duplicate_modules(root_dir):
    module_files = defaultdict(list)
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if any(filename.endswith(ext) for ext in SUPPORTED_EXTENSIONS):
                full_path = os.path.join(dirpath, filename)
                modules = find_modules_in_file(full_path)
                for module in modules:
                    module_files[module].append(full_path)

    # 找出同名模块
    duplicates = {module: paths for module, paths in module_files.items() if len(paths) > 1}
    return duplicates

# 用法
if __name__ == '__main__':
    folder_path = './rtl'  # 修改为你的文件夹路径
    duplicates = find_duplicate_modules(folder_path)
    if duplicates:
        print("Found duplicate module names:")
        for module, files in duplicates.items():
            print(f"Module '{module}' found in:")
            for file in files:
                print(f"  - {file}")
    else:
        print("No duplicate module names found.")
