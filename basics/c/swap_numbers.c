/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

int swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main()
{
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);

    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}