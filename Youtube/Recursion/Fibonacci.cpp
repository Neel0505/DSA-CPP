// Fibonacci using recursion
// Time Complexity: O(2^n)
// Space Complexity: O(n) (due to the recursive call stack)


// LeetCode: https://leetcode.com/problems/fibonacci-number/
// Leetcode Problem: 509. Fibonacci Number


#include <iostream>
using namespace std;

int fibonacci(int n) {
    if(n <= 1) {
        return n; // Base case: return n if it's 0 or 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive calls
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    return 0;
}

// Recurrence relation for this recursive function can be expressed as:
// T(n) = T(n-1) + T(n-2) + O(1), where T(n) is the time taken to compute the nth Fibonacci number, and O(1) is the time taken for the current function call (addition and making the recursive calls).
// tc = total calls * time taken for each call = O(2^n) * O(1) = O(2^n)

// Leetcode Solution 

/*
class Solution {
public:
    int fib(int n) {
        if(n <= 1) {
        return n; // Base case: return n if it's 0 or 1
    }
    return fib(n - 1) + fib(n - 2); // Recursive calls
        
    }
};
*/