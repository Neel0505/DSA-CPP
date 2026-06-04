// Move Zeroes to the End of the Array
//problem link: https://leetcode.com/problems/move-zeroes/
//leetcode question number: 283
/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;

        // Step 1: Shift all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPos] = nums[i];
                insertPos++;
            }
        }

        // Step 2: Fill the rest of the array with zeroes
        for (int i = insertPos; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
*/