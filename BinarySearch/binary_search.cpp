//Leetcode Problem: 704. Binary Search
// https://leetcode.com/problems/binary-search/
// This implementation of binary search is optimized to prevent potential integer overflow when calculating the mid index.
// Instead of using (start + end) / 2, we use start + (end - start) / 2
// TIME COMPLEXITY: O(log n)

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
    int end = nums.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1; 
    }
};


*/