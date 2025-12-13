/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

// Question: https://www.geeksforgeeks.org/dsa/given-a-string-find-its-first-non-repeating-character/

#include <stdio.h>
#include <string.h>

char first_non_repeating_char(char *s) {
    int freq[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freq[(int)s[i]]++;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[(int)s[i]] == 1) {
            return s[i];
        }
    }

    return '\0';
}

int main()
{
    char *s;
    printf("Enter a string: ");
    scanf("%s", s);
    printf("First non-repeating char in %s: %c\n", s, first_non_repeating_char(s));
    return 0;
}