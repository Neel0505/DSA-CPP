// Check if the given array is sorted or not using recursion
// Time Complexity: O(n)
// Space Complexity: O(n) (due to the recursive call stack)

// Recurrence relation for this recursive function can be expressed as:
// T(n) = T(n-1) + O(1), where T(n) is the time taken to check if the array of size n is sorted, and O(1) is the time taken for the current function call (comparison and making the recursive call).
// tc = total calls * time taken for each call = (n + 1) * O(1) = O(n)


#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int arr[], int n) {
    if(n == 1 || n == 0) {
        return true; // Base case: an array of size 0 or 1 is sorted
    }
    if(arr[n - 1] < arr[n - 2]) {
        return false; // If the last element is smaller than the second last, array is not sorted
    }
    return isSorted(arr, n - 1); // Recursive call to check the rest of the array
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array
    int n = arr.size();
    if(isSorted(arr.data(), n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
