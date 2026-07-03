// Leetcode Problem: Reverse Integer
// leetcode Problem Link: https://leetcode.com/problems/reverse-integer/
/*
class Solution {
public:
    int reverse(int x) {
        int revNum = 0;

        while (x != 0) {
            int digit = x % 10;

            // Check for positive overflow
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && digit > 7))
                return 0;

            // Check for negative overflow
            if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && digit < -8))
                return 0;

            revNum = revNum * 10 + digit;
            x /= 10;
        }

        return revNum;
    }
};
*/


#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    cout << "Enter an integer: ";
    cin >> num;
    int digit = 0; // Initialize digit variable
    while (num != 0) {
        digit = num % 10; // Get the last digit
        if (reversedNum > (INT_MAX - digit) / 10) { // Check for overflow
            cout << "Overflow occurred while reversing the number." << endl;
            return 1; // Exit with error code
        }   
        reversedNum = reversedNum * 10 + digit; // Append digit to reversed number
        num /= 10; // Remove the last digit from num
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}