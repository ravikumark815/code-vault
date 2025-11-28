/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <utility> // pair
#include <array>
#include <vector>

using namespace std;
/*
pair

array
vector

stack

queue
deque
priority_queue

list
forward_list

map
multimap
unordered_map
unordered_multimap

set
multiset
unordered_set
unordered_multiset
*/

int main()
{
    // --- Pairs ---
    cout << "--- Pair ---\n";
    pair <int, string> p1(1, "one");
    cout << "P1: " << p1.first << "-" << p1.second << endl;
    pair <int, string> p2 = make_pair(2, "two");
    cout << "P2: " << p1.first << "-" << p2.second << endl;
    
    // Swap
    p1.swap(p2);
    cout << "P1: " << p1.first << "-" << p1.second << endl;
    cout << "P2: " << p2.first << "-" << p2.second << endl;
    
    // Unpack
    auto [number, text] = p1;
    cout << "P1: " << number << "-" << text << endl;
    
    // Update Values
    p1.first = 1;
    p1.second = "first";
    cout << "P1: " << p1.first << "-" << p1.second << endl;
    
    // Compare
    cout << "== " << (p1 == p2) << endl;
    cout << "!= " << (p1 != p2) << endl;
    cout << ">= " << (p1 >= p2) << endl;
    cout << "<= " << (p1 <= p2) << endl;

    // --- Array---
    cout << "--- Array ---\n";
    array<int, 5> arr;
    arr = {800,500,900,200,700};

    // Iterate
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Begin: " << *arr.begin() << endl;
    cout << "End: " << *arr.end() << endl;
    cout << "End-1: " << *(arr.end() - 1) << endl;
    cout << "Front: " << arr.front() << endl;
    cout << "Back: " << arr.back() << endl;
    cout << "CBegin: " << arr.cbegin() << endl;
    cout << "CEnd: " << arr.cend() << endl;
    cout << "*CBegin: " << *arr.cbegin() << endl;
    cout << "*CEnd: " << *arr.cend() << endl;
    cout << "Empty: " << arr.empty() << endl;
    cout << "At4: " << arr.at(4) << endl;
    cout << "Size: " << arr.size() << endl;
    cout << "Max size: " << arr.max_size() << endl;
    cout << "Sizeof: " << sizeof(arr) << endl;
    cout << "*Data: " << *arr.data() << endl;
    
    // Fill
    cout << "Fill: ";
    array<string, 5> sarr;
    sarr.fill("abc");
    for (auto i : sarr) {
        cout << i << " ";
    }
    cout << endl;
    // Sort
    sort(arr.begin(), arr.end());
    cout << "Sorted: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    
    // Swap
    array <int, 5> arr1;
    arr1.fill(10);
    arr.swap(arr1);
    cout << "Swap: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Vector
    vector <int> v1 = {900,200,600};
    vector <int> v2(5, 100);
    v1.push_back(300);
    v1.emplace_back(800);
    v1.insert(v1.end(),500);
    v1.erase(v1.end()-1);
    for (auto it : v1) {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size: " << v1.size() << endl;;
    cout << "Capacity: " << v1.capacity() << endl;
    cout << "Empty: " << v1.empty() << endl;
    v1.resize(10);
    cout << "After reSize: " << v1.size() << endl;;

    return 0;
}