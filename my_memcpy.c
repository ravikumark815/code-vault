/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <string.h>

int my_memcpy(char *dest, char *src, size_t n) {
    char *c_src = (char*) src;
    char *c_dest = (char*) dest;
    
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    
    return 0;
}

int main()
{
    char src[] = "Source";
    char dest[100];

    my_memcpy(dest, src, sizeof(src));
    printf("Copied: %s\n", dest);

    return 0;
}