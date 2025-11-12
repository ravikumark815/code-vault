/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Using characters: ";
    for (char i = 'A'; i <= 'Z'; i++) {
        cout << i << ' ';
    }

    cout << "\nUsing ASCII: ";
    for (int i = 65; i <= 90; i++) {
        printf("%c ", i);
    }
    cout << endl;
    return 0;
}