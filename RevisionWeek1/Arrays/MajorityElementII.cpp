// Majority Element II
// Leetcode Problem: https://leetcode.com/problems/majority-element-ii/
// Leetcode Problem #229

// Time Complexity: O(n)
// Space Complexity: O(1)

// Reference: DSA-C++\Arrays\majority_element.cpp

/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int frequency1 = 0;
        int frequency2 = 0;
        int cand1;
        int cand2;

        vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        if (frequency1 == 0 && nums[i] != cand2) {
            cand1 = nums[i];
            frequency1 = 1;
        } else if (frequency2 == 0 && nums[i] != cand1) {
            cand2 = nums[i];
            frequency2 = 1;
        } else if (nums[i] == cand1) {
            frequency1++;
        } else if (nums[i] == cand2) {
            frequency2++;
        } else {
            frequency1--;
            frequency2--;
        }
    }
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == cand1) {
            count1++;
        } else if (nums[i] == cand2) {
            count2++;
        }
    }

    if (count1 > nums.size() / 3) {
        ans.push_back(cand1);
    }
    if (count2 > nums.size() / 3) {
        ans.push_back(cand2);
    }

    return ans;
    }

};
*/