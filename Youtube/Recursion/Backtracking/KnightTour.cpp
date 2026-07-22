// Leetcode Problem: Check Knight Tour Configuration
// Leetcode Link: https://leetcode.com/problems/check-knight-tour-configuration/
// Leetcode Number: 2596


// Time Complexity: O(8^n^2) where n is the size of the grid (n x n)
// Space Complexity: O(n^2) for the recursion stack and the grid itself


/*
class Solution {
public:

    bool isValid(vector<vector<int>>& grid, int row, int col, int n, int expVal) {
        if (row < 0 || row >= n || col < 0 || col >= n || grid[row][col] != expVal) return false; // Base case: out of bounds or not the expected value

        if (expVal == n * n - 1) return true; // Base case: last expected value reached

        // 8 possible knight moves
        int ans1 = isValid(grid, row + 2, col + 1, n, expVal + 1);
        int ans2 = isValid(grid, row + 2, col - 1, n, expVal + 1);
        int ans3 = isValid(grid, row - 2, col + 1, n, expVal + 1);
        int ans4 = isValid(grid, row - 2, col - 1, n, expVal + 1);
        int ans5 = isValid(grid, row + 1, col + 2, n, expVal + 1);
        int ans6 = isValid(grid, row + 1, col - 2, n, expVal + 1);
        int ans7 = isValid(grid, row - 1, col + 2, n, expVal + 1); 
        int ans8 = isValid(grid, row - 1, col - 2, n, expVal + 1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8; // Return true if any of the moves lead to a valid configuration   
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return isValid(grid, 0, 0, grid.size(), 0); // Start from the top-left corner with expected value 0
    }
};

*/