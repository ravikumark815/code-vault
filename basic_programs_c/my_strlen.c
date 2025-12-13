/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>

int my_strlen(char *s) {
    int res = 0;
    while (s[res]) {
        res++;
    }
    return res;
}

int main()
{
    char *s;
    printf("Enter string: ");
    scanf("%s", s);
    printf("Length of %s: %d\n", s, my_strlen(s));
    return 0;
}