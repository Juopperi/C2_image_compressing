import os
import re

def contains_chinese(text):
    return re.search(r'[\u4e00-\u9fff]', text) is not None

def check_files_for_chinese(root_dir, extensions=None):
    if extensions is None:
        # 支持的扩展名（你可以按需添加）
        extensions = ['.txt', '.md', '.py', '.json', '.html', '.xml', '.csv', '.yaml', '.yml']

    chinese_files = []

    for root, _, files in os.walk(root_dir):
        for filename in files:
            if any(filename.lower().endswith(ext) for ext in extensions):
                file_path = os.path.join(root, filename)
                try:
                    with open(file_path, 'r', encoding='utf-8') as f:
                        for line in f:
                            if contains_chinese(line):
                                chinese_files.append(file_path)
                                break
                except Exception as e:
                    print(f"Skipped {file_path}: {e}")

    return chinese_files

# 用法
if __name__ == "__main__":
    directory = "./"  # 修改为目标文件夹路径
    results = check_files_for_chinese(directory)
    print("Files containing Chinese characters:")
    for f in results:
        print(f)
