/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!

Question: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without duplicate characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;
        int res = 0;
        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            while (us.count(s[right])) {
                us.erase(s[left]);
                left++;
            }
            us.insert(s[right]);
            res = max(res, right-left+1);
        }
        return res;
    }
};

int main()
{
    vector <string> string_vect = {"abcabcbb", "bbbbb", "pwwkew"};
    Solution obj;
    
    for (auto st: string_vect) {
        cout << obj.lengthOfLongestSubstring(st) << endl;
    }
    return 0;
}