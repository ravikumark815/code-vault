/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <iostream>
using namespace std;
void fibonacci_loops (int num) {
    int prev = 0, curr = 1, next = 0;
    for (int i = 0; i < num; i++) {
        cout << next << " ";
        prev = curr;
        curr = next;
        next = prev + curr;
    }
}

void fibonacci_recursion (int num, int prev1, int prev2) {
    if (num < 3) return;
    cout << prev1 + prev2 << " ";
    fibonacci_recursion (num - 1, prev2, prev1+prev2);
    return;
}

int main()
{
    int num = 0;
    cout << "Enter an integer: ";
    cin >> num;

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

    cout << "Fibonacci Loop:\n";
    fibonacci_loops(num);
    cout << "\nFibonacci Recursion:\n";
    printf ("%d %d ", 0, 1);
    fibonacci_recursion(num, 0, 1);

    return 0;
}