/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

// Question: https://www.geeksforgeeks.org/dsa/roman-number-to-integer/

#include <stdio.h>
#include <string.h>

int value(char c) {
    if (c == 'i' || c == 'I') return 1;
    if (c == 'v' || c == 'V') return 5;
    if (c == 'x' || c == 'X') return 10;
    if (c == 'l' || c == 'L') return 50;
    if (c == 'c' || c == 'C') return 100;
    if (c == 'd' || c == 'D') return 500;
    if (c == 'm' || c == 'M') return 1000;
    return 0;
}

int roman_decimal(char *s){
    int i = 0;
    int res = 0;

    while (i < strlen(s)) {
        if ((i + 1) < strlen(s)) {
            if (value(s[i]) < value(s[i + 1])) {
                res = res + value(s[i + 1]) - value(s[i]);
                i++;
            } else {
                res = res + value(s[i]);
            }
        } else {
            res = res + value(s[i]);
        }
        i++;
    }
    
    return res;
}

int main() {
    char *s;
    printf("Enter the Roman Number: ");
    scanf("%s", s);
    printf("Decimal form: %d\n", roman_decimal(s));

    return 0;
}