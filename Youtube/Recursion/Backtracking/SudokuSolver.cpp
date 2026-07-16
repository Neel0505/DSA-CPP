// Leetcode Problem : https://leetcode.com/problems/sudoku-solver/
// Leetcode Question : 37. Sudoku Solver


// Time Complexity: O(9^(n*n)) - In the worst case, we have to fill n*n cells, and for each cell, we have 9 choices (digits 1-9). Therefore, the time complexity is O(9^(n*n)).
// Space Complexity: O(n*n) - The space complexity is O(n*n) due to
 /*
class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char dig) {
        // Horizontal
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == dig) {
                return false;
            }
        }

        // Vertical
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == dig) {
                return false;
            }
        }

        // grid
        int startRow = (row/3)*3, startCol = (col/3)*3;
        for (int i = startRow; i < startRow +  3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == dig) {
                    return false;
                }
            }
        } 
        return true;
    }

    bool helper(vector<vector<char>>& board, int row = 0, int col = 0) {
        if (row == 9) {
            return true;
        }
        
        int nextRow =  row, nextCol = col + 1;
        if (nextCol == 9) {
            nextRow++;
            nextCol = 0;
        }
        
        if (board[row][col] != '.') {
            return helper(board, nextRow, nextCol);
        }
        
        //Place the digits 
        for (char dig = '1'; dig <= '9'; dig++) {
            if (isSafe(board, row, col, dig)) {
                board[row][col] = dig;
                if (helper(board, nextRow, nextCol)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }
};
*/