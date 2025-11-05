/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <iostream>
using namespace std;

bool check_prime (int num) {
    if ((num == 0) || (num == 1)) {
        return false;
    }
    if (num < 4) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i < num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Prime numbers upto " << num << ": \n";
    
    for (int i = 2; i <= num; i++) {
        if (check_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}