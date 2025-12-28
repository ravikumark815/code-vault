/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

// Question: https://www.geeksforgeeks.org/dsa/check-whether-two-strings-are-anagram-of-each-other/

#include <stdio.h>
#include <string.h>

int is_anagram(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    int freq_s1[256] = {0};
    int freq_s2[256] = {0};

    for (int i = 0; i < strlen(s1); i++) {
        freq_s1[(int)(s1[i])]++;
    }

    for (int i = 0; i < strlen(s2); i++) {
        freq_s2[(int)(s2[i])]++;
    }

    for (int i = 0; i < strlen(s2); i++) {
        if (freq_s1[(int)(s1[i])] != freq_s2[(int)(s2[i])]) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char *s1 = "Ravi";
    char *s2 = "iaavR";
    
    if (is_anagram(s1, s2)) {
        printf("%s and %s are anagrams\n", s1, s2);
    } else {
        printf("%s and %s are not anagrams\n", s1, s2);
    }
    
    return 0;
}