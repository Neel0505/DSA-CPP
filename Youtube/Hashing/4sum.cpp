// Leetcode Problem Number: 18
// Leetcode Link: https://leetcode.com/problems/4sum/
// Note: The array is not sorted and there can be multiple solutions.


// Optimal Approach Sorting + Two Pointers
// Time Complexity: O(n^3 + nlogn)  (nlogn for sorting and n^3 for three nested loops)
// Space Complexity: O(1)



// 3 Optimizations for 4Sum Problem


/*
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> ans;
        int n = nums.size();    

        sort(nums.begin(), nums.end()); // Sort the array to use two pointers

        for(int i=0; i<n; i++) {
        // First Optimization: Skip duplicates for the first element
            if(i > 0 && nums[i] == nums[i-1]) continue; // Skip duplicates for the first element
             for(int j=i+1; j<n; j++) {

             int p = j + 1;
             int q = n - 1;

             while(p < q) {
                 long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                 if(sum < target) {
                     p++;
                 } else if(sum > target) {
                     q--;
                 } else { // sum == target
                     ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                     p++;
                     q--;
// Third Optimization: Skip duplicates for the third and fourth elements
                     while(p < q && nums[p] == nums[p - 1]) p++; // Skip duplicates for the third element
                     while(p < q && nums[q] == nums[q + 1]) q--; // Skip duplicates for the fourth element
                 }
             }
            // Second Optimization: Skip duplicates for the second element
                
                while(j + 1 < n && nums[j] == nums[j + 1]) j++;
            }  // close for j
        }  // close for i
        return ans;
    }  // close function
};  // close class
*/