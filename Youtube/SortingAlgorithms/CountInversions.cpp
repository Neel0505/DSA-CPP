// Count Inversions in an Array

// Brute Force Approach
// Time Complexity: O(n^2)
// Space Complexity: O(1)
/*
int countInversionsBruteForce(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}
*/

// Optimal approach using Merge Sort
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;
    int invCount = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
            invCount += (mid - i + 1); // Count inversions
            
        }
    }

    // Copy remaining elements
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy back the merged elements
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[start + idx] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) return 0;
    
    int mid = start + (end - start) / 2;
    int leftInversions = mergeSort(arr, start, mid);
    int rightInversions = mergeSort(arr, mid + 1, end);
    int invCount = merge(arr, start, mid, end);
    
    return leftInversions + rightInversions + invCount;

    return 0;
}

int main() {
    vector<int> arr = {1, 20, 6, 4, 5};
    int n = arr.size();
    int inversionCount = mergeSort(arr, 0, n - 1);
    cout << "Number of inversions: " << inversionCount << endl;
    return 0;
}