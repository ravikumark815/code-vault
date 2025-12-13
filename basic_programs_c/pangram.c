/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

// Question: https://www.geeksforgeeks.org/dsa/pangram-checking/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_pangram(char *s) {
    int i = 0;
    int alphabet[26] = {0};
    while (i < strlen(s)) {
        if ((((int)(tolower(s[i]))) <= 122)) {
            alphabet[((int)(tolower(s[i]))) - 97]++;
        }
        i++;
    }

    for (int j = 0; j < 26; j++) {
        if (alphabet[j] <= 0) return 0;
    }
    return 1;
}

int main()
{
    char *s1 = "The quick brown fox jumps over the lazy dog";
    char *s2 = "Programming is great";

    if (is_pangram(s1))
        printf("\'%s\' is a pangram\n", s1);
    else
        printf("\'%s\' is not a pangram\n", s1);
    
    if (is_pangram(s2))
        printf("\'%s\' is a pangram\n", s2);
    else
        printf("\'%s\' is not a pangram\n", s2);

    return 0;
}