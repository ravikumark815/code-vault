/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <iostream>
using namespace std;

void temperature_conversion(int temperature, char unit) {
    if (unit == 'F') {
        cout << "After conversion: " << (((temperature - 32.0) * 5)/9) << "C\n";
    }
    if (unit == 'C') {
        cout << "After conversion: " << (((temperature * 9.0)/5) + 32) << "F\n";
    }
}

int main()
{
    int temperature;
    char unit;

    cout << "Enter temperature with units (Ex: 35F): ";
    cin >> temperature >> unit;

    temperature_conversion(temperature, unit);

    return 0;
}