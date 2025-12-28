/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string using_reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

string using_iterators(string str) {
    return string(str.rbegin(), str.rend());
}

string using_stack(string str) {
    stack<char> st;
    for (char c : str) {
        st.push(c);
    }
    str.clear();

    while (!st.empty()) {
        str.push_back(st.top());
        st.pop();
    }
    return str;
}

string using_pointer_swap(string str) {
    int left = 0, right = str.length() - 1;
    char c;
    while (left < right) {
        c = str[left];
        str[left] = str[right];
        str[right] = c;

        left++; right--;
    }
    return str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Using reverse of function: " << using_reverse(str) << endl;
    cout << "Using iterators: " << using_iterators(str) << endl;
    cout << "Using stack: " << using_stack(str) << endl;
    cout << "Using pointer swap: " << using_pointer_swap(str) << endl;
    return 0;
}