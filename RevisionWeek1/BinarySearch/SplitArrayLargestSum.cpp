// Split Array Largest Sum 
// Leetcode Problem: https://leetcode.com/problems/split-array-largest-sum/
// Leetcode Problem #410

// Time Complexity: O(n * log(sum of array))
// Space Complexity: O(1)

// Reference: DSA-C++\Youtube\BinarySearch\BookAllocationProblem.cpp
// Reference: DSA-C++\Youtube\BinarySearch\PaintersPartitionProblem.cpp

/*
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        bool isPossible(vector<int> &arr, int n, int m, int maxAllowedSum){ // Time Complexity: O(n)
            int subarrayCount = 1;
            int subarraySum = 0;

            for(int i=0; i<n; i++){
                if(arr[i] > maxAllowedSum) return false; // If a single element is greater than maxAllowedSum, it's not possible to split

                if(subarraySum + arr[i] <= maxAllowedSum){
                    subarraySum += arr[i];
                }
                else{
                    subarrayCount++;
                    subarraySum = arr[i];
                }
            }
            return subarrayCount <= m;
        }

        int n = nums.size();
        int sum = 0;
        int maxVal = INT_MIN;
        for(int i=0; i<n; i++){ // Time Complexity: O(n)
            sum += nums[i];
            maxVal = max(maxVal, nums[i]);
        }
        
    }
};
*/