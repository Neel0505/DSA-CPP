// Binary Search using Recursion
// Time Complexity: O(log n)
// Space Complexity: O(log n) (due to the recursive call stack)

// LeetCode: https://leetcode.com/problems/binary-search/
// Leetcode Problem: 704. Binary Search



/*
class Solution {
public:
    // Helper function for binary search
    int binarySearchHelper(vector<int>& arr, int target, int left, int right) {
        if(left > right) {
            return -1; // Base case: target not found
        }
        int mid = left + (right - left) / 2; // Calculate mid to avoid overflow
        if(arr[mid] == target) {
            return mid; // Target found
        } else if(arr[mid] < target) {
            return binarySearchHelper(arr, target, mid + 1, right); // Search in the right half
            } else {
                return binarySearchHelper(arr, target, left, mid - 1); // Search in the left half
            }
        return -1; // Target not found
    }
    int search(vector<int>& arr, int target) {
        return binarySearchHelper(arr, target, 0, arr.size() - 1); // Initial call to helper function
    }
*/

// Recurrence relation for this recursive function can be expressed as:
// T(n) = T(n/2) + O(1), where T(n) 
// Tc = total calls * time taken for each call = O(log n) * O(1) = O(log n)