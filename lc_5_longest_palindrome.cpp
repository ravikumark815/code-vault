/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!

Question: https://leetcode.com/problems/longest-palindromic-substring/

5. Longest Palindromic Substring
Given a string s, return the longest palindromic substring in s.

Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:
Input: s = "cbbd"
Output: "bb"

Constraints:
1 <= s.length <= 1000
s consist of only digits and English letters.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    void expand(const string& s, int left, int right, int& max_len, int& start_index) {
        while ((left >= 0) && (right < s.length()) && (s[left] == s[right])) {
            left--;
            right++;
        }
        int current_len = right - left - 1;
        
        if ((right - left - 1) > max_len) {
            max_len = right - left - 1;
            start_index = left + 1;
        }
        return; 
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if (n < 2) {
            return s;
        }

        int max_len = 0;
        int start_index = 0;
        
        for (int i = 0; i < n; i++) {
            expand(s, i, i, max_len, start_index);
            expand(s, i, i + 1, max_len, start_index);
        }

        return s.substr(start_index, max_len);;
    }
};

int main()
{
    vector <string> string_vect = {"babad", "cbbd"};
    Solution obj;
    
    for (auto s: string_vect) {
        cout << obj.longestPalindrome(s) << endl;
    }

    return 0;
}