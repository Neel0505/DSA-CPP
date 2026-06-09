//Problem: Find the majority element in an array (an element that appears more than n/2 times)
// Leetcode: https://leetcode.com/problems/majority-element/
// Leetcode problem number: 169

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/*
Brute Force Approach
Time Complexity: O(n^2)
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
*/

// Optimal Approach 
// O(n log n) time complexity using sorting

int majorityElement(vector<int>& nums) {
    int n = nums.size();

    //sorting the array will bring the majority element to the middle
    sort(nums.begin(), nums.end());

    //frequency count 
    int frequency = 1, ans = nums[0];
    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i-1]){
            frequency++;
        }
        else{
            frequency = 1;
        }

        if(frequency > n/2){
            return ans;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl;

    return 0;
}