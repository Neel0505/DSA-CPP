// Leetcode Problem Link: https://leetcode.com/problems/search-a-2d-matrix/
// Leetcode Problem Number: 74

// Note: The matrix has the following properties:
// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.


// Binary Search Approach
// Time Complexity: O(log(m*n))


/*
class Solution {
public:

    bool searchInRow(vector<vector<int>>& mat, int target, int row) {
        int n= mat[0].size();
        int st =0, end = n-1;

        while(st <= end) {
            int mid = st + (end - st)/2;
            if(target == mat[row][mid]) {
                return true;
            }else if(target > mat[row] [mid]) {
                st=mid +1;
            } else {
                end =mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

// binary search on Total Rows 
        int m = matrix.size();
        int n = matrix[0].size();
        
        int startRow = 0;
        int endRow = m - 1;
        
        while(startRow <= endRow) {
            int midRow = startRow + (endRow - startRow) / 2;
            
            if(target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
               return searchInRow(matrix, target, midRow);
                
            } else if(target >= matrix[midRow][n - 1]) {
                // Move to the next row
                startRow = midRow + 1;
            } else {
                // Move to the previous row
                endRow = midRow - 1;
            }

        }
        
        return false; 
        
        
    }
};

*/