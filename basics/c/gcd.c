/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

int find_gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    
    int min = b;
    if (a < b) min = a;

    for (int i = min; i >= 2; i--) {
        if (((a % i) == 0) && ((b % i) == 0)) {
            return i;
        }
    }

    return 0;
}

int main()
{
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("GCD: %d\n", find_gcd(a,b));
    return 0;
}