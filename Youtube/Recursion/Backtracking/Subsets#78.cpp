// Leetcode Problem: 78. Subsets
// https://leetcode.com/problems/subsets/
// Time Complexity: O(2^n * n) where n is the number of elements in the array, as each element can either be included or excluded from a subset.
// Space Complexity: O(n) for the recursive call stack and the space used to store the current subset.

// Recurrence relation for this recursive function can be expressed as:
// T(n) = 2 * T(n-1) + O(1), where T(n) is the time taken to generate all subsets of size n, and O(1) is the time taken for the current function call (adding/removing an element and making the recursive calls).

/*
class Solution {
public:

    void generateSubsets(vector<int>& nums, vector<int>& ans, int index, vector<vector<int>>& allSubsets) {
        // Base case: if we have processed all elements, add the current subset to the list of all subsets
        if (index == nums.size()) {
            allSubsets.push_back({ans});
            return;
        }

        // Include the current element in the subset
        ans.push_back(nums[index]);
        generateSubsets(nums, ans, index + 1, allSubsets);

        // Exclude the current element from the subset (backtrack)
        ans.pop_back();
        generateSubsets(nums, ans, index + 1, allSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        generateSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};
*/