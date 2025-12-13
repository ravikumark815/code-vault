/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <string.h>

void reverse(char *begin, char *end) {
    while (begin < end) {
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
    return;
}

char *reverse_words(char *str) {
    reverse(str, str + strlen(str) - 1);

    char *word_begin = str;
    char *word_end = str;
    while (*word_end) {
        word_end++;
        if (*word_end == '\0') {
            reverse(word_begin, word_end-1);
        } else if (*word_end == ' ') {
            reverse(word_begin, word_end - 1);
            word_begin = word_end + 1;
        }
    }

    return str;
}

int main()
{
    char *s;
    printf("Enter a string: ");
    scanf("%[a-zA-Z ]", s); // take letters and spaces
    printf("Word Reversed: %s\n", reverse_words(s));
    return 0;
}