import os
import re
from deep_translator import GoogleTranslator

def contains_chinese(text):
    return re.search(r'[\u4e00-\u9fff]', text) is not None

def translate_text(text):
    try:
        return GoogleTranslator(source='zh-CN', target='en').translate(text)
    except Exception as e:
        print(f"Translation failed for: {text} -> {e}")
        return text  # fallback to original

def translate_chinese_in_line(line):
    # 匹配所有中文字符串（可改为只翻译注释部分）
    matches = re.findall(r'[\u4e00-\u9fff]+', line)
    for match in set(matches):
        translation = translate_text(match)
        line = line.replace(match, translation)
    return line

def translate_python_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        lines = f.readlines()

    translated_lines = [translate_chinese_in_line(line) for line in lines]

    new_path = filepath[:-3] + '_translated.py'
    with open(new_path, 'w', encoding='utf-8') as f:
        f.writelines(translated_lines)

    print(f"Translated: {filepath} -> {new_path}")

def traverse_and_translate(root_dir):
    for root, _, files in os.walk(root_dir):
        for file in files:
            if file.endswith('.py') and not file.endswith('_translated.py'):
                full_path = os.path.join(root, file)
                translate_python_file(full_path)

# 使用示例
if __name__ == '__main__':
    target_dir = './'  # 修改为你的目录路径
    traverse_and_translate(target_dir)
