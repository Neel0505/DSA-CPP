// Leetcode problem: Sort Colors (LeetCode #75)
// Difficulty: Medium
// Problem link: https://leetcode.com/problems/sort-colors/
// Pending Approach: Dutch National Flag Algorithm (One Pass) 
// Pending Youtube video 25 for DNF Algorithm

// Brute Force Approach Ascending Order
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i=0;i<n;i++){
            int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_index]) {
            min_index = j;
            }
        }
            if (min_index != i) {
            std::swap(nums[i], nums[min_index]);
            }
        }
 }  
};
*/