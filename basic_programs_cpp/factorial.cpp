/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <iostream>
using namespace std;

int factorial_loop (int num) {
    int res = 1;

    if (num == 0) return 0;
    if (num == 1) return 1;
    
    for (int i = 2; i <= num; i++) {
        res *= i;
    }
    
    return res;
}

int factorial_recursion (int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;

    return num * factorial_recursion(num - 1);
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Factorial loop: " << factorial_loop(num) << endl;
    cout << "Factorial recursion: " << factorial_recursion(num) << endl;
    
    return 0;
}