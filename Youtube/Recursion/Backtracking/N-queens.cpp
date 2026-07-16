// N-Queens Problem using Backtracking
// This program finds all possible arrangements of N queens on an N x N chessboard

// Leetcode Problem: https://leetcode.com/problems/n-queens/
// Leetcode Question: 51. N-Queens

// Time Complexity: O(N!) - The number of valid arrangements of N queens on an N x N chessboard is factorial in nature, leading to a time complexity of O(N!).
// Space Complexity: O(N^2) - The space complexity is O(N^2) due to the storage of the chessboard and the recursive call stack.

/*
class Solution {
public:


    bool isSafe(vector<string> &board, int row, int col, int n) { // Time Complexity: O(N) 
        // Horitontal Check
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }
        // Vertical Check 
        for(int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        // Left Diagonal Check
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // Right Diagonal Check
        for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
    if (row == n) {
        ans.push_back(board);
        return;
    }
    for (int j = 0; j < n; j++) {
        if (isSafe(board, row, j, n)) {
            board[row][j] = 'Q';
            nQueens(board, row + 1, n, ans);
            board[row][j] = '.';
        }
    }
}

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        nQueens(board, 0, n, ans);
        return ans;
    }
};

*/