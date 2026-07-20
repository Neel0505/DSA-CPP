// Leetcode 131. Palindrome Partitioning
// Leetcode link: https://leetcode.com/problems/palindrome-partitioning/


// Time Complexity: O(N * 2^N)
// Space Complexity: O(N)


/*
class Solution {
public:

    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

void getAllParts(string s, vector<string> partition, vector<vector<string>>& ans) {
        if (s.empty()) {
            ans.push_back(partition);
            return;
        }
        
        for (int i = 1; i <= s.size(); i++) {
            string prefix = s.substr(0, i);
            if (isPalindrome(prefix)) {
                partition.push_back(prefix);
                getAllParts(s.substr(i), partition, ans);
                partition.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;

        getAllParts(s, partition, ans);
        return ans;
    }
};

*/