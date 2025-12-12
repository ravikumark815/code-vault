/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

void swap_string_buffers(char*s1, char* s2, size_t size) {
    char temp[size];
    char *p_s3 = temp;
    char *p_s1 = s1;
    char *p_s2 = s2;

    while((*p_s3++ = *p_s1++)); 
    p_s1 = s1;
    while((*p_s1++ = *p_s2++));
    p_s2 = s2;
    p_s3 = temp;
    while((*p_s2++ = *p_s3++));
    
    return;
}

void swap_string_pointers(char **s1, char **s2) {
    char *s3 = *s1;
    *s1 = *s2;
    *s2 = s3;
}

int main()
{
    char s1[] = "ABC";
    char s2[] = "DEF";
    char* p_s1 = s1;
    char* p_s2 = s2;

    swap_string_buffers(s1, s2, sizeof(s1));
    printf("Buffer Swap: s1: %s s2: %s\n", s1, s2);
    swap_string_pointers(&p_s1, &p_s2);
    printf("Pointer Swap: s1: %s s2: %s\n", s1, s2);

    return 0;
}