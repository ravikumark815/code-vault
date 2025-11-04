/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/
#include <stdio.h>

void temperature_conversion (float temperature, char units)
{
    if (units == 'F') {
        printf("After Conversion: %fC\n", ((temperature - 32.0) * 5)/9);
        return;
    }
    else {
        printf("After Conversion: %fF\n", ((temperature * 9.0)/5) + 32);
        return;
    }
}

int main() 
{
    float temperature;
    char unit;
    
    printf("Enter temperature followed by units (Ex.35F): ");
    scanf("%f%c", &temperature, &unit);
    temperature_conversion(temperature, unit);
    return 0;
}