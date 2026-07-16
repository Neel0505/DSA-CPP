// Leetcode Question: 46. Permutations
// https://leetcode.com/problems/permutations/

/*
class Solution {
public:
    void getAllPermutations(vector<int>& nums, vector<vector<int>>& ans, int index){
        // Base Case
        if(index == nums.size()){
            ans.push_back({nums});
            return;
        }

        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            getAllPermutations(nums, ans, index + 1);
            swap(nums[index], nums[i]); // backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getAllPermutations(nums, ans, 0);
        return ans;

    }
};
*/ 