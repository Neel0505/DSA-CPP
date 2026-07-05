#include<iostream>
using namespace std;


// Brute Force Approach
// Time Complexity: O(n^2)
int diagonalSum(int arr[][4], int rows, int cols) {
    int sum = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == j || j == cols - 1 - i) {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

// Optimized Approach
// Time Complexity: O(n)

int diagonalSumOptimized(int arr[][4], int rows, int cols) {
    int sum = 0;

    for(int i = 0; i < rows; i++) {
        sum += arr[i][i]; // Primary diagonal
        if(i != cols - 1 - i) { // Avoid double counting the center element in odd-sized matrices
            sum += arr[i][cols - 1 - i]; // Secondary diagonal
        }
    }

    return sum;
}


int main() {
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int rows = 4;
    int cols = 4;

    int sum = diagonalSumOptimized(matrix, rows, cols);
    cout << "Sum of diagonals: " << sum << endl;

    return 0;
}