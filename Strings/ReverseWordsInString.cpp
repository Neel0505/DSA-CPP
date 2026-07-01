// Leetcode Problem: https://leetcode.com/problems/reverse-words-in-a-string/
// Leetcode Problem 151 Reverse Words in a String
// Time Complexity: O(n)

/*
class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        string ans = "";

        reverse(s.begin(), s.end()); // Reverse the entire string

        for(int i=0; i<n; i++){
        string word = "";
            while(i<n && s[i] != ' '){ // Extract the word
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end()); // Reverse the extracted word
            if(word.length() > 0){ // If the word is not empty, add it to the answer
                ans += word + " ";
            }
        }
        return ans.substr(0, ans.length()-1); // Remove the trailing space and return the answer
    }
};
*/ 