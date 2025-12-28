/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <limits.h>

int my_atoi(char *s) {
    int i = 0, res = 0, sign = 1;
    
    while (s[i] == ' ') {
        i++;
    }
    if (s[i] == '-' || s[i] == '+') {
        if (s[i++] == '-') sign = -1;
    }

    while ((s[i] >= '0') && (s[i] <= '9')) {
        if (res >= (INT_MAX/10)) {
            printf("Buffer Overflow\n");
            return 0;
        }
        res = (10 * res) + (s[i++] - '0');
    }
    return res*sign;
}

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("Integer: %d\n", my_atoi(s));
    return 0;
}