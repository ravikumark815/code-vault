/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <stdbool.h>

bool check_prime (int num) {
    if ((num < 2)) {
        return false;
    }
    if ((num < 3)) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i < num; i += 2) {
        if (num % i == 0) { 
            return false;
        }
    }
    return true;
}
int main()
{
    int num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (check_prime(num)) printf("%d is a prime number\n", num);
    else printf("%d is not a prime number\n", num);
    
    return 0;
}