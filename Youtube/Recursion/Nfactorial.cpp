// Find the factorial of a number using recursion
// Time Complexity: O(n)
// Space Complexity: O(n) (due to the recursive call stack)

#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}

// Recurrence relation for this recursive function can be expressed as:
// T(n) = T(n-1) + O(1), where T(n) is the time taken to compute the factorial of n, and O(1) is the time taken for the current function call (multiplication and making the recursive call).

