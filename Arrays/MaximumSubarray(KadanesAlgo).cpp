// Problem: Find the contiguous subarray with the largest sum.
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
// Leetcode: https://leetcode.com/problems/maximum-subarray/
// #53 

/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int current_sum = 0;
        int n = nums.size();
        
    for(int i = 0; i < n; i++){
        current_sum += nums[i];
        max_sum = max(max_sum, current_sum);
        if(current_sum < 0){
            current_sum = 0;
        }
    }
    return max_sum;
    }
};
*/
// Brute Force Approach
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int n = nums.size();
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int sum = 0;
            for(int i = start; i <= end; i++){
                sum += nums[i];
            }
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
    }
};
*/
 