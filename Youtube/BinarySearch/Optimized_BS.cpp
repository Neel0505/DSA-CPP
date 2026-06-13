#include<iostream>
#include<vector>
using namespace std;
// This implementation of binary search is optimized to prevent potential integer overflow when calculating the mid index.
// Instead of using (start + end) / 2, we use start + (end - start) / 2, which ensures that we do not exceed the maximum value of an integer when start and end are large.
// TIME COMPLEXITY: O(log n)

 
int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;   // Optimized way to calculate mid to avoid potential overflow

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1; // Target not found
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;

    int result = binarySearch(arr, target);

    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
