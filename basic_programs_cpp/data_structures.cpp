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
#include <list>
#include <forward_list>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

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

    // List
    cout << "\n--- List ---\n";
    list <int> ls;
    ls.push_back(100);
    ls.push_front(200);
    ls.push_back(200);
    ls.push_back(100);
    ls.emplace_back(300);
    ls.emplace_front(800);
    auto it = ls.begin();
    advance(it, 2);
    ls.insert(it, 400);
    cout << "List: ";
    for (auto it: ls) {
        cout << it << " ";
    }
    cout << endl;
    ls.remove(400);
    ls.sort();
    ls.reverse();
    ls.unique(); //Remove duplicates
    cout << "List: ";
    for (auto it: ls) {
        cout << it << " ";
    }
    cout << endl;
    list <int> ls2 = {750,650,850,250};
    ls.merge(ls2);
    // ls.sort();
    // ls.reverse();
    cout << "List: ";
    for (auto it: ls) {
        cout << it << " ";
    }
    cout << endl;
    ls.splice(ls2.begin(), ls); // Transfer all elements from ls to ls2
    cout << "List: ";
    for (auto it: ls) {
        cout << it << " ";
    }
    cout << endl;
    cout << "List2: ";
    for (auto it: ls2) {
        cout << it << " ";
    }
    cout << endl;

    // Forward List (Singly Linked List)
    cout << "\n--- Forward List ---\n";
    forward_list <int> fl;
    fl.push_front(800);
    fl.push_front(600);
    fl.push_front(700);
    fl.push_front(650);
    fl.push_front(200);
    fl.push_front(200);
    fl.emplace_front(300);

    cout << "Forward list: ";
    for (auto i: fl) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Empty: " << fl.empty() << endl;
    cout << "Front: " << fl.front() << endl;
    
    auto it_fl = fl.before_begin();
    advance(it_fl, 2);
    fl.insert_after(it_fl, 900);
    fl.remove(650);
    fl.erase_after(it_fl);
    fl.unique();
    fl.sort();
    fl.reverse();

    cout << "Forward list: ";
    for (auto i: fl) {
        cout << i << " ";
    }
    cout << endl;

    // Map (Red-black tree, k-v pairs, ordered(sorted))
    cout << "\n--- Map ---\n";
    map <int, string> m;
    map <int, string, greater<int>> m_d; // descending keys
    m.insert({100, "Hundred"});
    m.emplace(200, "Two Hundred");
    m.emplace(800, "Eight Hundred");
    m.emplace(600, "Six Hundred");
    
    cout << "Map: ";
    for (auto it : m) {
        cout << it.first << ":" << it.second << ", ";
    }
    cout << endl;

    m.erase(200);
    m.erase(m.begin());
    cout << "Size: " << m.size() << endl;
    cout << "Empty: " << m.empty() << endl;

    cout << "Map: ";
    for (auto it : m) {
        cout << it.first << ":" << it.second << ", ";
    }
    cout << endl;

    // Multimap (Ordered, allows duplicate keys)
    cout << "\n--- Multimap ---\n";
    multimap <int, string> mm;
    mm.insert({100, "Hundred"});
    mm.emplace(200, "Two Hundred");
    mm.emplace(200, "Two Hundred");
    mm.emplace(300, "Three Hundred");
    mm.emplace(300, "Three Hundred");
    mm.emplace(300, "Three Hundred");
    mm.emplace(400, "Four Hundred");
    mm.emplace(400, "Four Hundred");
    mm.emplace(400, "Four Hundred");
    mm.emplace(400, "Four Hundred");

    mm.erase(400);

    cout << "Multimap: ";
    for(auto it: mm) {
        cout << it.first << ":" << it.second << ", ";
    }
    cout << endl;

    cout << "Count300: " << mm.count(300) << endl;

    // Unordered Map (Hashmap)
    cout << "\n--- Unordered Map ---\n";
    unordered_map <int, string> um;
    um[100] = "Hundred";
    um.insert({200, "Two Hundred"});
    um.emplace(300, "Three Hundred");
    um.emplace(400, "Four Hundred");
    um[500] = "Five Hundred";

    cout << "Unordered Map: ";
    for (auto it: um) {
        cout << it.first << ":" << it.second << ", ";
    }
    cout << endl;

    cout << "Size: " << um.size() << endl;
    cout << "Empty: " << um.empty() << endl;
    // cout << "Contains 500: " << um.contains(500) << endl; // C++20
    cout << "Count: " << um.count(500) << endl;
    cout << "Find: " << (*um.find(400)).first << ":" << (*um.find(400)).second << endl;
    cout << "Bucket Count: " << um.bucket_count() << endl;
    cout << "Load Factor: " << um.load_factor() << endl;
    um.erase(400);

    cout << "Unordered Map: ";
    for (auto it: um) {
        cout << it.first << ":" << it.second << ", ";
    }
    cout << endl;
   
    // Unordered multimap
    cout << "\n--- Unordered Multimap ---\n";
    unordered_multimap <int, string> umm;
    umm.insert({100, "Hundred"});
    umm.insert({100, "Hundred"});
    umm.emplace(200, "Two Hundred");
    umm.emplace(200, "TwoHundred");

    cout << "Unordered Multimap: ";
    for (auto it: umm) {
        cout << it.first << ":" << it.second << ", ";
    }
    cout << endl;

    cout << "Size: " << umm.size() << endl;
    cout << "Empty: " << umm.empty() << endl;
    cout << "Count 200: " << umm.count(200) << endl;

    // Set (Ordered, unique)
    cout << "\n--- Sets ---\n";
    set <int> s;
    s.emplace(200);
    s.emplace(200);
    s.insert(100);
    s.emplace(200);
    s.emplace(200);
    s.insert({100,200,300,400,500,600});
    
    cout << "Set: ";
    for (int it: s) {
        cout << it << " ";
    }
    cout << endl;
    
    cout << "Size: " << s.size() << endl;
    cout << "Empty: " << s.empty() << endl;
    cout << "Count: " << s.count(100) << endl;

    s.erase(300);
    s.erase(s.begin(), s.find(200));

    cout << "Set: ";
    for (int it: s) {
        cout << it << " ";
    }
    cout << endl;

    // Multiset (Ordered, Duplicates)
    cout << "\n--- MultiSet ---\n";
    multiset <int> ms;
    ms.insert(300);
    ms.emplace(200);
    ms.insert(300);
    ms.emplace(200);
    ms.insert(100);
    ms.emplace(800);

    cout << "Multiset: ";
    for (int m : ms) {
        cout << m << " ";
    }
    cout << endl;

    ms.erase(300);

    cout << "Multiset: ";
    for (int m : ms) {
        cout << m << " ";
    }
    cout << endl;
    
    // Unordered Set (unordered, unique) Hashset
    cout << "\n--- Unordered Set ---\n";
    unordered_set <int> us;
    us.insert(300);
    us.insert(300);
    us.insert(300);
    us.emplace(100);
    us.insert(500);
    us.emplace(412);
    us.insert(175);

    cout << "Unordered Set: ";
    for (int u : us) {
        cout << u << " ";
    }
    cout << endl;

    cout << "Size: " << us.size() << endl;
    cout << "Empty: " << us.empty() << endl;
    cout << "Count: " << us.count(300) << endl;
    cout << "Bucket count: " << us.bucket_count() << endl;
    cout << "Load factor: " << us.load_factor() << endl;
    us.rehash(100); // Set bucket count
    us.reserve(100); // reserve for at least 100 elements
    cout << "Unordered Set: ";
    for (int u : us) {
        cout << u << " ";
    }
    cout << endl;
    cout << "Bucket count: " << us.bucket_count() << endl;
    cout << "Load factor: " << us.load_factor() << endl;
    
    return 0;
}