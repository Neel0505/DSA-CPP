// Rat in a Maze Problem
// Time Complexity: O(4^(n*n)
// Space Complexity: O(n*m) 

#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>>& mat, int row, int col, string path, vector<string>& ans, vector<vector<bool>>& visited) {
    int n = mat.size();

    if (row < 0 || col < 0 || row >= n || col >= n) {
        return;
    }
    if (mat[row][col] == 0 || visited[row][col]) {
        return;
    }

    if (row == n - 1 && col == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[row][col] = true;

    helper(mat, row + 1, col, path + 'D', ans, visited); // Down
    helper(mat, row, col + 1, path + 'R', ans, visited); // Right
    helper(mat, row - 1, col, path + 'U', ans, visited); // Up
    helper(mat, row, col - 1, path + 'L', ans, visited); // Left

    visited[row][col] = false;
}

vector<string> findPath(vector<vector<int>>& mat) {
    int n = mat.size();

    vector<string> ans;
    string path = "";
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    helper(mat, 0, 0, path, ans, visited);
    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int n = mat.size();
    vector<string> paths = findPath(mat);

    for (const string& path : paths) {
        cout << path << endl;
    }

    return 0;
}

   
