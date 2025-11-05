/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum: " << sum(a, b) << endl;
    return 0;
}