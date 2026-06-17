// leetcode Problem: 852. Peak Index in a Mountain Array
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Approach: Binary Search
// Leetcode Problem: https://leetcode.com/problems/peak-index-in-a-mountain-array/
/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int end = arr.size() - 2;
        int mid;
        while(st <= end) {
             mid = st + (end - st)/2;
             if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) {
                    return mid;
             } else if(arr[mid-1] < arr[mid]) {
                    st = mid + 1;  
                } else {
                    end = mid - 1;
                }
        }
        return -1;
    }
};
*/