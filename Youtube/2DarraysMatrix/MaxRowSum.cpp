#include<iostream>
#include<climits>
using namespace std;

int getMaxRowSum(int arr[][3], int rows, int cols) {
    int maxSum = INT_MIN;

    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;

    int maxRowSum = getMaxRowSum(matrix, rows, cols);
    cout << "Maximum row sum: " << maxRowSum << endl;

    return 0;
}