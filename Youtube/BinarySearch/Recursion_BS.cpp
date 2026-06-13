#include<iostream>
#include<vector>
using namespace std;

// This implementation of binary search uses recursion to find the target element in the sorted array.
// TIME COMPLEXITY: O(log n)

int binarySearch(vector<int> arr, int target, int start, int end){
    if(start > end){
        return -1; // Base case: Target not found
    }

    int mid = start + (end - start) / 2; // Optimized way to calculate mid to avoid potential overflow

    if(arr[mid] == target){
        return mid; // Target found at index mid
    }
    else if(arr[mid] < target){
        return binarySearch(arr, target, mid + 1, end); // Search in the right half
    }
    else{
        return binarySearch(arr, target, start, mid - 1); // Search in the left half
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;

    int result = binarySearch(arr, target, 0, arr.size() - 1);

    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }

    return 0;
}