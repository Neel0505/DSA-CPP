// Leetcode Problem: 9. Palindrome Number
// leetcode Problem Link: https://leetcode.com/problems/palindrome-number/

// Reverse the number and check if it is equal to the original number

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
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;

        // Reverse the number and check if it is equal to the original number
        return x == reverse(x);
        return true;
    }
};
*/