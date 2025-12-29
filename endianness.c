/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>

/*
Testing with 1
------------------------------------------------------------
Address | Big Endian (MSB first) | Little Endian (LSB First)
------------------------------------------------------------
&x + 0  |           00           |            01
------------------------------------------------------------
&x + 1  |           00           |            00
------------------------------------------------------------
&x + 2  |           00           |            00
------------------------------------------------------------
&x + 3  |           01           |            00
------------------------------------------------------------

Testing with 0x01020304
------------------------------------------------------------
Address | Big Endian (MSB first) | Little Endian (LSB First)
------------------------------------------------------------
&x + 0  |           01           |            04
------------------------------------------------------------
&x + 1  |           02           |            03
------------------------------------------------------------
&x + 2  |           03           |            02
------------------------------------------------------------
&x + 3  |           04           |            01
------------------------------------------------------------
*/

// Create a multi-byte integer, take its address, cast it to a character pointer (char*), and check what is stored in the very first byte
void check_endianness_char() {
    unsigned int a = 1;
    char *ca = (char*)(&a);
    if (*ca)
        printf("Using char*: Little Endian \n");
    else
        printf("Using char*: Big Endian \n");
    
    return;
}

// Union method: Since all members of a union share the same memory location, checking the first element of a character array reveals the byte order.
void check_endianness_union() {
    union EndianCheck{
        unsigned int i;
        char c[4];
    };
    union EndianCheck e;
    e.i = 0x01020304;

    if (e.c[0] == 0x01 && e.c[3] == 0x04)
        printf("Using union: Big Endian \n");
    else if (e.c[0] == 0x04 && e.c[3] == 0x01)
        printf("Using union: Little Endian \n");
    else if (e.c[0] == 0x02 && e.c[1] == 0x01 && e.c[2] == 0x04 && e.c[3] == 0x03)
        printf("Using union: Middle Endian \n");
    return;
}

int main()
{
    check_endianness_char();
    check_endianness_union();
    #if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
        printf("Using macros: Little Endian \n");
    #elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
        printf("Using macros: Big Endian \n");
    #endif
}