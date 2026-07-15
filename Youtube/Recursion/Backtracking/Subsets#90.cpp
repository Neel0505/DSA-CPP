// This question has a variation from #78 
// That the values can be repeated in the input array, and we need to return only unique subsets.

// Leetcode Problem: 90. Subsets II
// https://leetcode.com/problems/subsets-ii/


// Time Complexity = (2^n * n)

/*
class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
    // Base Case 

        if(i == nums.size()){
            allSubsets.push_back(ans);
            return;
        
        }
        // include
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i+1, allSubsets);

        ans.pop_back();

        int idx = i + 1;
        while(idx < nums.size() && nums[idx] == nums[idc - 1]) idx++

        // exclude
        getAllSubsets(nums, ans, idx, allSubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
     
        vector<vector<int> allSubsets;
        vector<int> ans;

        getAllSubsets(nums, ans, 0, allSubsets);

        return allSubsets;
    }
};
*/