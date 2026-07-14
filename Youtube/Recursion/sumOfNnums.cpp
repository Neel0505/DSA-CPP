// Find the sum of first n natural numbers using recursion
// Time Complexity: O(n)
// Space Complexity: O(n) (due to the recursive call stack)

#include <iostream>
using namespace std;

int sumOfN(int n) {
    if(n == 0) {
        return 0; // Base case: sum of first 0 natural numbers is 0
    }
    return n + sumOfN(n - 1); // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sumOfN(n) << endl;
    return 0;
}

// Recurrence relation for this recursive function can be expressed as:
// T(n) = T(n-1) + O(1), where T(n) is the time taken to compute the sum of first n natural numbers, and O(1) is the time taken for the current function call (addition and making the recursive call).

 // tc = total calls * time taken for each call = (n + 1) * O(1) = O(n) 