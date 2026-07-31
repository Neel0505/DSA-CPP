// Group Anagrams
// Leetcode Problem: https://leetcode.com/problems/group-anagrams/
// Leetcode Problem Number: 49

// Reference: DSA-C++\Strings\ValidPalindrome.cpp
// Reference: DSA-C++\Arrays\contains_duplicate.cpp

/*
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;

        for(int i=0; i<strs.size();i++){
            string word = strs[i];
            string key = word;
            sort(key.begin(),key.end());

            mp[key].push_back(word);
        }

        vector<vector<string>>result;
        for(auto &pair : mp){
            result.push_back(pair.second);
        }
        return result;
        
    }
};
*/

// Time Complexity: O(n * k log k)
// Space Complexity: O(n * k)
// where n = number of words, k = average word length