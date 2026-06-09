//Problem: Find the majority element in an array (an element that appears more than n/2 times)
// Leetcode: https://leetcode.com/problems/majority-element/
// Leetcode problem number: 169

/*
brute force approach: O(n^2) time complexity, O(1) space complexity
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=0;
        m=nums.size()/2;
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;
        for(int j = 0; j < nums.size(); j++) {
        if(nums[i]==nums[j]){
            count++;
        }
    }
    if(count>m){
        return nums[i];
    }
}
return -1;
    }

};


optimal approach: O(n) time complexity, O(1) space complexity
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int frequency = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (frequency == 0) {
            ans = nums[i];
        }

        if (ans == nums[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }

    return ans;
    }

};
*/