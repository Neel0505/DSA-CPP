// Running Sum of 1D Array (#1480)
//problem link: https://leetcode.com/problems/running-sum-of-1d-array/
//leetcode question number: 1480
/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        return nums;  
    }
};
*/