/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", sum(a, b));
    
    return 0;
}