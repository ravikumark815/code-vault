/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

int factorial_loop (int  num) {
    int res = 1;
    
    for (int i = 1; i <= num; i++) {
        res *= i;
    }

    return res;
}

int factorial_recursion (int num) {
    if (num == 1) return 1;
    return num * factorial_recursion (num - 1);
}

int main()
{
    int num = 0;
    
    printf("Enter integer: ");
    scanf("%d", &num);

    printf("Factorial using loop: %d\n", factorial_loop(num));
    printf("Factorial using recursion: %d\n", factorial_recursion(num));
    
    return 0;
}