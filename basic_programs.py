"""
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
"""
import sys

def hello_world():
    print("Hello World!")

def is_prime(n):
    if n <= 1:
        return False
    # We only need to check up to the square root because 
    # if a number 'num' has a divisor greater than its square root,
    # it must also have a divisor smaller than its square root.

    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def is_even(n):
    return n % 2 == 0

def ascii(s):
    return [ord(i) for i in s]

def f_to_c(n):
    # Fahrenheit to Celsius
    return (n - 32) * 5/9

def sum_of_n_nums(num):
    return num * (num + 1) // 2

def data_type_sizes():
    print(sys.getsizeof(int))
    print(sys.getsizeof(str))
    print(sys.getsizeof(float))
    print(sys.getsizeof(complex))
    print(sys.getsizeof(bool))
    return

def checksign(num):
    if num > 0:
        return "Positive"
    elif num < 0:
        return "Negative"
    else:
        return "Zero"

if __name__ == "__main__":
    hello_world()
    print(is_prime(7))
    print(is_even(10))
    print(ascii('Ravi'))
    print(f_to_c(100))
    data_type_sizes()
    print(complex(3,4) + complex(3,4))
    print(checksign(-39))
    print(sum_of_n_nums(10))