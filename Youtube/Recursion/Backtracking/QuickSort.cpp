// Quick Sort Implementation
// Divide and Conquer Algorithm
// Picks an element as pivot and partitions the given array around the picked pivot.

// Time Complexity: O(n log n) 
// Space Complexity: O(log n) due to recursive stack space


#include<iostream>
#include<vector> 
using namespace std;
int partition(vector<int> &arr, int st, int end){
    int idx = st -1;
    int pivot = arr[end];

    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;


}

void quickSort(vector<int> &arr, int st, int end){
    if(st<end){
        int pivIdx = partition(arr,st, end);

        quickSort(arr, st, pivIdx-1); // Left subarray
        quickSort(arr, pivIdx+1, end); // Right subarray
    }
}

int main(){
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quickSort(arr, 0, n-1);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}