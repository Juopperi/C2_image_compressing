import random

def generate_test_data(filename, num_integers=64, bit_width=8):
    with open(filename, 'w') as f:
        for _ in range(num_integers):
            # Generate a random integer，The scope is 0 arrive 2^bit_width - 1 between
            integer = random.randint(0, (1 << bit_width) - 1)
            f.write(f"{integer}\n")

if __name__ == "__main__":
    generate_test_data("test_data.txt")
