//Problem Merge Sorted Array
//problem link: https://leetcode.com/problems/merge-sorted-array/
//leetcode question number: 88
/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i = 0; i < n; i++) {
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }

};
*/

// Youtube Approach: Two Pointer Approach
// Time Complexity: O(m+n)
// Space Complexity: O(1)
/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int idx = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[idx--] = nums1[i--];
            } else {
                nums1[idx--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[idx--] = nums2[j--];
        }
    }
};
*/