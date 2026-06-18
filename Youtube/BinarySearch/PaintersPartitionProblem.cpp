// Youtube Problem: Painters Partition Problem
// Algorithm: Binary Search


/* QUESTION:
Painter's Partition Problem

Given are N boards of length of each given in the form of array, and Mpainters, such
that each painter takes 1 unit of time to paint 1 unit of the board.

The task is to find the minimum time to paint all boards under the constraints that any
painter will only paint continuous sections of boards

*/

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){ // Time Complexity: O(n)
    int painterCount = 1;
    int boardSum = 0;

    for(int i=0; i<n; i++){
        if(boardSum + arr[i] <= maxAllowedTime){
            boardSum += arr[i];
        }
        else{
            painterCount++;
            boardSum = arr[i];
        }
    }
    return painterCount <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){ // Time Complexity: O(n*log(sum of array))
    int sum = 0;
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++){ // Time Complexity: O(n)
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int start = maxVal;
    int end = sum;
    int ans = -1;

    while(start <= end){ // Time Complexity: O(log(sum of array))
        int mid = start + (end - start)/2;

        if(isPossible(arr, n, m, mid)){ //left side is possible, so we will try to minimize the time
            ans = mid;
            end = mid - 1;
        }
        else{ // right side is possible, so we will try to maximize the time
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40,30,10,20};
    int n = arr.size();
    int m = 2;
    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}