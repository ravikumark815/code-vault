/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

// Question: https://www.geeksforgeeks.org/dsa/counting-frequencies-of-array-elements/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void) {
    int x = *(int *)(x_void);
    int y = *(int *)(y_void);

    return (x - y);
}

int count_frequencies(int arr[], int length) {
    qsort(arr, length, sizeof(int), compare);
    int i = 0;
    while(i < length) {
        int cur = arr[i];
        int j = i;
        int count = 0;
        while ((j < length) && (cur == arr[j])) {
            count++;
            j++;
        }
        printf("cur: %d\tFreq: %d\n", arr[i], count);
        i = j;
    }
    return 0;
}

int main()
{
    int arr[] = {10,10,1,1,1,4,3,9,2,7,5,56,89,12,20,34,55,20,89,2,3,2,4,8,12,64};
    count_frequencies(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}