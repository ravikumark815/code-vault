/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <string.h>

int my_memmove(char *destination, char *source, size_t n) {
    char *dst = (char *) destination;
    char *src = (char *) source;

    if (!dst || !src) return -1;
    
    if (src < dst && dst < (src + n)) {
        for (dst += n, src += n; n--;) {
            *--dst = *--src;
        }
    } else {
        while (n--) {
            *dst++ = *src++;
        }
    }

    return 0;
}

int main()
{
    char src[] = "Source";
    char dest[100];

    my_memmove(dest, src, strlen(src) + 1);
    printf("Copied: %s\n", dest);

    return 0;
}