// First lets REV for char arr[]

// Leetcode Problem 344 Reverse String 
// https://leetcode.com/problems/reverse-string/
// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int end = s.size() - 1;
        while (st < end) {
            swap(s[st++], s[end--]);
        }
    }
};
*/


// Now for strings 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "apna college.";

    reverse(str.begin(), str.end() ); // using iterators
        cout << str << endl;
        return 0;
}