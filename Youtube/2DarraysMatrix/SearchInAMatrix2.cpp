// Variation of the above problem where the matrix is sorted in a different way.
// Leetcode Problem Link: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Leetcode Problem Number: 240


// Note: The matrix has the following properties:
// Integers in each row are sorted from left to right.
// Integers in each column are sorted from top to bottom.


// Binary Search Approach
// Time Complexity: O(m+n)

/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0;
        int col = n - 1;

        while(row < m && col >= 0) {
            if(matrix[row][col] == target) {
                return true;
            } else if(matrix[row][col] > target) {
                col--;
            } else {
                row++;
            }
        }
    
    return false;
    }
    
};
*/