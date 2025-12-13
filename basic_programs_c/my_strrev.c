/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <string.h>

void my_strrev(char *str) {
    int i = 0, j = strlen(str) - 1;
    char *s = str;

    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++; j--;
    }

    return;
}

int main()
{
    char *s;

    printf("Enter the string: ");
    scanf("%s", s);
    my_strrev(s);
    printf("Reversed: %s\n", s);

    return 0;
}