#include <iostream> 
#include <vector>
using namespace std;

// Function to print all subsets of the given array using recursion
// Time Complexity: O(2^n * n) where n is the number of elements in the array, as each element can either be included or excluded from a subset.
// Space Complexity: O(n) for the recursive call stack and the space used to store the current subset.

void printSubsets(vector<int> &arr, vector<int> &ans, int index) {
    // Base case: if we have processed all elements, print the current subset
    if (index == arr.size()) {
        cout << "{ ";
        for (int x : ans) {
            cout << x << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Include the current element in the subset
    ans.push_back(arr[index]);
    printSubsets(arr, ans, index + 1);

    // Exclude the current element from the subset (backtrack)
    ans.pop_back();
    printSubsets(arr, ans, index + 1);
}

int main() {
    vector<int> arr = {1, 2, 3}; // Example array
    vector<int> ans; // To store the current subset
    printSubsets(arr, ans, 0); // Start the recursion from index 0

    return 0;
}