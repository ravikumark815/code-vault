/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

int find_lcm (int a, int b) {
    int max = b;

    if (a > b) max = a;
    while (1) {
        if (((max % a) == 0) && ((max % b) == 0)) {
            return max;
        }
        ++max;
    }
    return 0;
}

int main()
{
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("LCM: %d\n", find_lcm(a, b));
    return 0;
}