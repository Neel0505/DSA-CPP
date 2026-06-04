//problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//leetcode question number: 26
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertPos = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                nums[insertPos] = nums[i];
                insertPos++;
            }
        }
        return insertPos;
    }
};
*/