// Maximum Product Subarray
// Leetcode Problem: https://leetcode.com/problems/maximum-product-subarray/
// Leetcode Problem #152

// Time Complexity: O(n)
// Space Complexity: O(1)

// Reference: \DSA-C++\Arrays\MaximumSubarray(KadanesAlgo).cpp

// Have to deal with negative numbers as well

/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int newMax = nums[0];
        int newMin = nums[0];
        int max_pro = nums[0];
        int current_pro=0;
        int n = nums.size();

        
    for(int i = 1; i < n; i++){
        int temp = newMax;
        current_pro *= nums[i];
        newMax = max(nums[i], max(temp * nums[i], newMin * nums[i]));
        newMin = min(nums[i], min(temp * nums[i], newMin * nums[i]));
        max_pro = max(max_pro, newMax);
    }
    return max_pro;
        
    }
};
*/