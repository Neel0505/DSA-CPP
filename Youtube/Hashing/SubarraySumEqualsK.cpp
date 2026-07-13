// Leetcode Link: https://leetcode.com/problems/Subarray-sum-equals-k/
// Leetcode Problem Number: 560 
// Total 2 approaches are given below to solve this problem.


// 1. Brute Force Approach
// Time Complexity: O(n^2)
// Space Complexity: O(1)

/*
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++) { // Starting index of the subarray
            int sum = 0;
            for(int j=i; j<n; j++) {
                sum += nums[j];
                if(sum == k) {
                    count++;
                }
            }
        }
        return count;
    }  
};
*/

// 2. Optimal Approach Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

/*
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        vector<int> prefixSum(n, 0);
        prefixSum[0] = nums[0];
        for(int i=1; i<n; i++) {
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

         unordered_map<int, int> prefixSumCount;


        for(int j=0; j<n; j++) {
            if(prefixSum[j] == k) {
                count++;
            }
            if(prefixSumCount.find(prefixSum[j] - k) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum[j] - k];
            }
            prefixSumCount[prefixSum[j]]++;
        }
        return count;
    }
};
*/