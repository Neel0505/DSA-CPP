// Leetcode Problem: Find Missing and Repeating Values
// Leetcode Problem Number: 2965
// Leetcode Link: https://leetcode.com/problems/find-missing-and-repeated-values/description/

// Note: The array contains n numbers from 1 to n, with one number missing and one number repeating.

/*
class Solution {
public:
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {        vector<int> ans;
        unordered_set<int> seen;
        int n = grid.size();
        int a ,b;

        int expected_sum = 0;
        int actual_sum = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j<n; j++) {
                actual_sum += grid[i][j];
                if(seen.find(grid[i][j]) != seen.end()) {
                a = grid[i][j]; // repeating number
                    ans.push_back(a);
                }
                seen.insert(grid[i][j]);
            }
        }

        expected_sum = (n*n * (n*n + 1)) / 2; // sum of first n*n natural numbers
        b = expected_sum - (actual_sum - a); // missing number
        ans.push_back(b);
        
        return ans;
        
        
    }
};
*/