/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <iostream>
#include <string>
#include <utility> // pair

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
    return 0;
}