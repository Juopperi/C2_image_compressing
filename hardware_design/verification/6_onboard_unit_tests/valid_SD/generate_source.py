import random

# File path definition
A_INPUT_FILE_NAME = "INPUT_A.TXT"
B_INPUT_FILE_NAME = "INPUT_B.TXT"
EXPECTED_OUTPUT_FILE_NAME = "EXPECTED_OUTPUT.TXT"

def generate_files(num_lines):
    with open(A_INPUT_FILE_NAME, 'w') as file_a, \
         open(B_INPUT_FILE_NAME, 'w') as file_b, \
         open(EXPECTED_OUTPUT_FILE_NAME, 'w') as file_out:

        for _ in range(num_lines):
            num1 = random.randint(0, 2**32 - 1)  # 0 ~ 32The maximum value of bit integer
            num2 = random.randint(0, 2**32 - 1)
            result = num1 + num2  # Calculate and
            
            # Write to their respective files
            file_a.write(f"{num1}\n")
            file_b.write(f"{num2}\n")
            file_out.write(f"{result}\n")

if __name__ == "__main__":
    num_lines = 100  # Specify the number of generated rows
    generate_files(num_lines)
    print(f"File generation is complete：\n- {A_INPUT_FILE_NAME}\n- {B_INPUT_FILE_NAME}\n- {EXPECTED_OUTPUT_FILE_NAME}")
