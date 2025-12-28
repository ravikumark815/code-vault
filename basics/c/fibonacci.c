/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

void fibonacci_loops(int num) {
    int prev = 0, curr = 1, next = 0;
    for (int i = 0; i < num; i++ ) {
        printf("%d ", next);
        prev = curr;
        curr = next;
        next = prev + curr;
    }
    return;
}

void fibonacci_recursion(int num, int prev1, int prev2) {
    if (num < 3) {
        return;
    }
    printf("%d ", prev1 + prev2);
    return fibonacci_recursion (num - 1, prev2, prev1 + prev2);
}

int main()
{
    int num;

    printf("Enter number of fibonacci numbers to print: ");
    scanf("%d", &num);

    if (num == 0) {
        return 0;
    }

    if (num == 1) {
        printf ("%d\n", 0);
        return 0;
    }

    if (num == 2) {
        printf ("%d %d\n", 0, 1);
        return 0;
    }

    
    printf("Loops: \n");
    fibonacci_loops(num);
    printf("\nRecursive: \n");
    printf ("%d %d ", 0, 1);
    fibonacci_recursion(num, 0, 1);
    printf("\n");
    
    return 0;
}