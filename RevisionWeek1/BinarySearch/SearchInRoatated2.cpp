// Search in Rotated Sorted Array II
// Leetcode Problem: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Leetcode Problem #81

// Time Complexity: O(n)
// Space Complexity: O(1)

// Reference: DSA-C++\Arrays\SearchInRotatedSortedArray.cpp

/*
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target)
                return true;

            if (nums[st] == nums[mid] && nums[mid] == nums[end]) {
                st++;
                end--;
            }
            else if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target < nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            else {
                if (nums[mid] < target && target <= nums[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return false;
    }
};
*/