// leetcode question number: 31
// Problem: Next Permutation
// link: https://leetcode.com/problems/next-permutation/


// Time Complexity: O(n)
// Space Complexity: O(1)
/*
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // find the pivot point
        int pivot = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

// find the next greater element

        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

// reverse the elements after the pivot point
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};


*/