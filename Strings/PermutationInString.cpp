//Leetcode problem: https://leetcode.com/problems/permutation-in-string/
// Time Complexity: O(n)
// Leetcode Problem 567 Permutation in String

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
    bool checkInclusion(string s1, string s2) { // Time Complexity: O(n)
        int freq[26] = {0};
        for( int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }
        
        int windSize = s1.length();

        for(int i=0; i<s2.length(); i++){ // Window Sliding Technique
            int WindIdx = 0, idx =1;
            int WindFreq[26] = {0};
            while(WindIdx < windSize && (i+idx-1) < s2.length()){
                WindFreq[s2[i+idx-1]-'a']++;
                WindIdx++;
                idx++;
            }
            if(isFreqSame(freq, WindFreq)){ // Found the permutation of s1 in s2
                return true;
            }
        }
        return false;
    }
};

*/