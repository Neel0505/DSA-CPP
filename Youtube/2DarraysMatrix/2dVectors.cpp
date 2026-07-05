#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Creating a 2D vector
    vector<vector<int>> matrix(4, vector<int>(4));

    // Initializing the matrix
    int val = 1;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matrix[i][j] = val++;
        }
    }

    // Printing the matrix
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
