// Longest Palindromic Substring
// Leetcode Problem: https://leetcode.com/problems/longest-palindromic-substring/
// Leetcode Problem Number: 5'
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Reference: DSA-C++\Strings\ValidPalindrome.cpp

/*
class Solution {
public:

int expandAroundCenter(string &s, int left, int right){
    while(left >= 0 && right < s.length() && s[left] == s[right]){
        left--;
        right++;
    }
    return right - left - 1;
}
    string longestPalindrome(string s) {
        int start = 0, end = 0;
        for(int i=0; i<s.length(); i++){
            int len1 = expandAroundCenter(s, i, i); // Odd length palindrome
            int len2 = expandAroundCenter(s, i, i+1); // Even length palindrome
            int len = max(len1, len2);
            if(len > end - start){
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end - start + 1);

    }
};
*/