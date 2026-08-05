// Reverse Pairs 
// Leetcode Problem 493
// leetcode Problem: https://leetcode.com/problems/reverse-pairs/

// Time Complexity: O(n log n)
// Space Complexity: O(n)

// Difficulty Level: Hard
// Merge Sort based solution

/*
class Solution {
public:
    long long totalCount = 0;

    long long countPairs(vector<int>& nums, int st, int mid, int end) {
        long long count = 0;
        int i = st, j = mid + 1;
        for (i = st; i <= mid; i++) {
            while (j <= end && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        return count;
    }

    void merge(vector<int>& nums, int st, int mid, int end) {
        vector<int> temp;
        int i = st;
        int j = mid + 1;

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= end) {
            temp.push_back(nums[j]);
            j++;
        }
        for (int k = 0; k < temp.size(); k++) {
            nums[st + k] = temp[k];
        }
    }

    void mergeSort(vector<int>& arr, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;

            mergeSort(arr, st, mid);
            mergeSort(arr, mid + 1, end);

            totalCount += countPairs(arr, st, mid, end); // count BEFORE merging
            merge(arr, st, mid, end);                    // then sort
        }
    }

    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return totalCount;
    }
};
*/