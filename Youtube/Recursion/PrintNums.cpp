// Print numbers from n to 1 using recursion
// Time Complexity: O(n)
// recursion means a function calling itself. In this case, the function will call itself with a decremented value of n until it reaches 1.

#include <iostream>
using namespace std;

void printNumbers(int n) {
    if(n == 0) {
        return; // Base case: if n is 0, stop the recursion
    }
    cout << n << " "; // Print the current number
    printNumbers(n - 1); // Recursive call with n decremented by 1
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the number from the user
    printNumbers(n); // Call the recursive function to print numbers from n to 1
    return 0;
}

// Stack frames are created for each recursive call, and they are popped off the stack as the function returns back up the call stack. This is how recursion works in C++.

// Recurrence relation for this recursive function can be expressed as:
// T(n) = T(n-1) + O(1), where T(n) is the time taken to print numbers from n to 1, and O(1) is the time taken for the current function call (printing the number and making the recursive call).