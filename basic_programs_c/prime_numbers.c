/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>

int check_prime(int n) {
    if ((n == 0) || (n == 1)) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) { 
        return 0;
    }
    for (int i = 3; i < n; i = i + 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (check_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}