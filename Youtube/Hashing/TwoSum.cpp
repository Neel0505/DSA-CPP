// Leetcode Problem Two Sum
// Leetcode Problem Link: https://leetcode.com/problems/two-sum/
// Leetcode Problem Number: 1
// Note: The array is not sorted and there is exactly one solution.


// Total 3 approaches are given below to solve this problem.


//  1. Brute Force Approach
// Time Complexity: O(n^2)

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
*/

// 2. Better Approach Sorting 
// Time Complexity: O(nlogn)

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr;
        for(int i=0; i<n; i++) {
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        
        int left = 0, right = n-1;
        while(left < right) {
            int sum = arr[left].first + arr[right].first;
            if(sum == target) {
                return {arr[left].second, arr[right].second};
            } else if(sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};
*/

// 3. Optimal Approach Hashing
// Time Complexity: O(n)

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++) {
            int first = nums[i];
            int second = target - first;
            if(mp.find(second) != mp.end()) {
                ans.push_back(mp[second]);
                ans.push_back(i);
                break;
            }
            mp[first] = i;
        }
        return ans;
    }
};
*/