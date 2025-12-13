/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <string.h>

void is_palindrome(char *s) {
    for (int i = 0, j = (strlen(s)-1); i <= j; i++, j--) {
        // printf("i: %c j: %c\n", s[i], s[j]);
        if (s[i] != s[j]) {
            printf("%s is not a palindrome.\n", s);
            return;
        }
    }
    printf("%s is a palindrome\n", s);
    return;
}

int main()
{
    char *str;

    printf("Enter a string: ");
    scanf("%s", str);
    is_palindrome(str);

    return 0;
}