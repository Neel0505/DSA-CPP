// Leetcode 3Sum Problem
// Leetcode Problem Number: 15
// Leetcode Link: https://leetcode.com/problems/3sum/
// Note: The array is not sorted and there can be multiple solutions.


// Total 3 approaches are given below to solve this problem.


// 1. Brute Force Approach
// Time Complexity: O(n^3)
// Space Complexity: O(1)
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        set<vector<int>> s; // to store unique triplets

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j+1; k<n; k++) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());

                        if(s.find(temp) == s.end()) {
                            s.insert(temp);
                            ans.push_back(temp);
                        }
                        
                    }
                }
            }
        }
        

        return ans;

    }
};
*/

// 2. Better Approach Sorting + Hashing
// Time Complexity: O(n^2logn)
// Space Complexity: O(n)


/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        set<vector<int>> uniqueTriplets; // to store unique triplets


        for(int i=0; i<n; i++) {
            int target = -nums[i];
            set<int> s; // to store the elements we have seen so far

            for(int j=i+1; j<n; j++) {
                int third = target - nums[j];

                if(s.find(third) != s.end()) {
                    vector<int> trip = {nums[i], nums[j], third};
                    sort(trip.begin(), trip.end());

                    if(uniqueTriplets.find(trip) == uniqueTriplets.end()) {
                        uniqueTriplets.insert(trip);
                        ans.push_back(trip);
                    }
                }

                s.insert(nums[j]);
            }
        }

        return ans;
    }
};
*/

// 3. Optimal Approach Sorting + Two Pointers
// Time Complexity: O(n^2 + nlogn)  (nlogn for sorting and n^2 for two pointers)
// Space Complexity: O(1)

/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end()); // Sort the array to use two pointers


        for(int i=0; i<n; i++) {
        if(i > 0 && nums[i] == nums[i-1]) continue; // Skip duplicates for the first element
            int j = i + 1;
            int k = n - 1;

            

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0) {
                    j++;
                } else if(sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while(j < k && nums[j] == nums[j - 1]) j++; // Skip duplicates for the second element
                } 
            }
        }

        return ans;
    }
};
*/