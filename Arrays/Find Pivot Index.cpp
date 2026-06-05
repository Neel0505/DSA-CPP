//Problem statement: Given an array of integers nums, calculate the pivot index of this array.
//The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
//If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
//Return the leftmost pivot index. If no such index exists, return -1.  
//problem link: https://leetcode.com/problems/find-pivot-index/
//leetcode question number: 724
//Not a very efficient solution, but it works. Time complexity is O(n^2) and space complexity is O(1).

/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = 0;
        int sumL = 0;
        int sumR = 0;
        for(int i=0;i<nums.size();i++){
            sumL = 0;
            sumR = 0;
            for(int j=0;j<i;j++){
                sumL+=nums[j];
            }
            
            for(int k=i+1;k<nums.size();k++){
                sumR+=nums[k];
            }
            
            if(sumL==sumR){
                nums[i] = index;
                return i;
            }
            
        }
        return -1;
    }
};
*/