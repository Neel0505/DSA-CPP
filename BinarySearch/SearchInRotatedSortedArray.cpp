// Leetcode 33: Search in Rotated Sorted Array
// Leetcode Problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Approach: Binary Search
/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0;
        int end = nums.size()-1;


    while(st<=end){
        int mid = st + (end - st)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[st]<=nums[mid]){ //lhs of mid sorted 
            if(nums[st] <= target && target <= nums[mid]){
                end = mid -1;
            }else{  
            st = mid + 1;
        }
        }else{ //RHS of mid sorted 
            if(nums[mid] <= target && target <= nums[end]){
                st = mid + 1;
            }else 
                end = mid -1;
         }
        } return -1;
    }  
};


*/