// Find All Anagrams in a String
// Leetcode Problem: https://leetcode.com/problems/find-all-anagrams-in-a-string/
// Leetcode Problem Number: 438

// Reference: DSA-C++\Strings\PermutationInString.cpp

/*
class Solution {
public:
bool isFreqSame(int freq1[], int freq2[]){ //Time Complexity: O(26) = O(1)
        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        

        vector<int>result;
        vector<int> result;
        if(p.size() > s.size()) return result;
        int freq1[26] = {0}; // Frequency array for string p
        int freq2[26] = {0}; // Frequency array for current window in string s

        for(int i=0; i<p.length(); i++){
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }

        for(int i=p.length(); i<s.length(); i++){
            if(isFreqSame(freq1, freq2)){
                result.push_back(i-p.length());
            }
            freq2[s[i]-'a']++;
            freq2[s[i-p.length()]-'a']--;
        }

        if(isFreqSame(freq1, freq2)){
            result.push_back(s.length()-p.length());
        }

        return result;  
        
    }
};

*/
