// Spiral Matrix
// Leetcode Problem Link: https://leetcode.com/problems/spiral-matrix/
// Leetcode Problem Number: 54

// Note: The matrix has the following properties:
// Integers in each row are sorted from left to right.
// Integers in each column are sorted from top to bottom.
// Binary Search Approach

// Time Complexity: O(m*n)

/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int startRow = 0;
        int endRow = m - 1;
        int startCol = 0;
        int endCol = n - 1;

        vector<int> ans;

        while(startRow <= endRow && startCol <= endCol) {
            // Traverse the top row
            for(int col = startCol; col <= endCol; col++) {
                ans.push_back(matrix[startRow][col]);
            }
            startRow++;

            // Traverse the right column
            for(int row = startRow; row <= endRow; row++) {
                ans.push_back(matrix[row][endCol]);
            }
            endCol--;

            // Traverse the bottom row (if applicable)
            if(startRow <= endRow) {
                for(int col = endCol; col >= startCol; col--) {
                    ans.push_back(matrix[endRow][col]);
                }
                endRow--;
            }

            // Traverse the left column (if applicable)
            if(startCol <= endCol) {
                for(int row = endRow; row >= startRow; row--) {
                    ans.push_back(matrix[row][startCol]);
                }
                startCol++;
            }
        }

        return ans;
    }
};

*/