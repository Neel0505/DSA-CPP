// Merge Sort Implementation
// Divide and Conquer Algorithm
// Divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.

// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st; 
    int j = mid + 1;
    

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); k++) {
        arr[st + k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    // Merge Sort function call
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}