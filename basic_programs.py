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

def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)

def fibonacci(n):
    if n <= 0:
        return
    a, b = 0, 1
    print(a, end=" ")
    for _ in range(n - 1):
        print(b, end=" ")
        a, b = b, a + b
    print()
    
def lcm(x,y):
    max_elem = max(x,y)
    while(1):
        if max_elem % x == 0 and max_elem % y == 0:
            return max_elem
        max_elem += 1

def is_armstrong(num):
    # An Armstrong number is defined as a number that is equal to the sum of 
    # the Kth power of each digit in the number, where K is the number of digits in it.
    # 1^3 + 5^3 + 3^3= 153
    num_str = str(num)
    num_len = len(num_str)
    sum = 0
    for i in num_str:
        sum += int(i)**num_len
    return num == sum

def check_leap_year(year):
    if (year % 400 == 0):
        return True
    elif (year % 100 == 0):
        return False
    elif (year % 4 == 0):
        return True

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

def is_palindrome(s):
    return str(s) == str(s)[::-1]

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
    print(check_leap_year(1900))
    print(factorial(5))
    fibonacci(5)
    print(lcm(15, 25))
    print(is_armstrong(153))
    print(is_palindrome(12321))