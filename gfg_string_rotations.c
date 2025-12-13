/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

// Question: https://www.geeksforgeeks.org/dsa/a-program-to-check-if-strings-are-rotations-of-each-other/

#include <stdio.h>
#include <string.h>

int check_rotations(char *s1, char *s2){
    int n = strlen(s1);

    for (int i = 0; i < n; i++) {
        if (!strcmp(s1, s2)) {
            return 1;
        }
        char temp = s1[n-1];
        for (int j = n - 1; j > 0; j--) {
            s1[j] = s1[j-1];
        }
        s1[0] = temp;
    }
    return 0;
}

int main()
{
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    
    if (check_rotations(s1, s2)) {
        printf("Rotation present\n");
    } else {
        printf("No rotations present\n");
    }
    
    return 0;
}