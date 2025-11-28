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
#include <stack>
#include <queue> // Queue & Priority_queue
#include <deque>
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
    cout << "\n--- Array ---\n";
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
    cout << "\n--- Vector ---\n";
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
    cout << "After resSize: " << v1.size() << endl;

    // Stack
    cout << "\n--- Stacks ---\n";
    stack <int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    st.emplace(400);
    cout << "Top: " << st.top() << endl;
    st.pop();
    cout << "Top: " << st.top() << endl;
    cout << "Empty: " << st.empty() << endl;
    cout << "Size: " << st.size() << endl;

    // Queues
    cout << "\n--- Queues ---\n";
    queue <int> qu;
    qu.push(300);
    qu.push(100);
    qu.push(150);
    qu.push(230);
    qu.push(540);
    cout << "Size: " << qu.size() << endl;
    cout << "Front: " << qu.front() << endl;
    qu.pop();
    cout << "Front: " << qu.front() << endl;
    cout << "Back: " << qu.back() << endl;
    cout << "Empty: " << qu.empty() << endl;
    
    // Deque
    cout << "\n--- Dequeue --- \n";
    deque <int> dq;
    dq.push_front(100);
    dq.push_back(500);
    dq.insert(dq.begin() + 2, 300);
    dq.push_front(800);
    dq.emplace_back(150);
    cout << "Deque: ";
    for (auto it: dq) {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size: " << dq.size() << endl;
    cout << "Empty: " << dq.empty() << endl;
    cout << "Begin: " << *dq.begin() << endl;
    cout << "End: " << *dq.end() << endl;
    cout << "End-1: " << *(dq.end()-1) << endl;
    dq.pop_back();
    dq.pop_front();
    cout << "Deque: ";
    for (auto it: dq) {
        cout << it << " ";
    }
    cout << endl;

    // Priority Queue
    cout << "\n--- Priority Queue (Heap) ---\n";
    priority_queue <int> pq;
    pq.push(100);
    pq.push(800);
    pq.push(500);
    pq.emplace(300);
    pq.emplace(200);
    cout << "Top (Max): " << pq.top() << endl;
    cout << "Size: " << pq.size() << endl;
    cout << "Empty: " << pq.empty() << endl;
    
    priority_queue <int, vector<int>, greater<int>> min_pq; // Min heap
    min_pq.push(100);
    min_pq.push(800);
    min_pq.push(500);
    min_pq.emplace(300);
    min_pq.emplace(200);
    cout << "Top (Min): " << min_pq.top() << endl;
    cout << "Size: " << min_pq.size() << endl;
    cout << "Empty: " << min_pq.empty() << endl;
    return 0;
}