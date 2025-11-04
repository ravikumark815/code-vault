/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter integer: ");
    scanf("%d", &num);

    printf("Sum of %d natural numbers: %d\n", num, ((num+1)*num)/2);
    return 0;
}