/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!

Question: https://leetcode.com/problems/two-sum/description/
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> res;
        for (int i=0; i<nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                res.push_back(i);
                res.push_back(m[target-nums[i]]);
            }

            m[nums[i]] = i;
        }
        return res;
    }
};

int main()
{
    vector <vector <int>> nums_vect = {{2,7,11,15}, {3,2,4}, {3,3}};
    vector <int> target = {9, 6, 6};
    Solution obj;
    int i = 0;
    for (auto v: nums_vect) {
        vector <int> result = obj.twoSum(v, target[i]);
        cout << "[" << result[0] << ", " << result[1] << "]\n";
        i++;
    }
    
    return 0;
}