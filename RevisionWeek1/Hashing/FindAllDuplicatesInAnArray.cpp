// Find All Duplicates in an Array
// Leetcode Problem: https://leetcode.com/problems/find-all-duplicates-in-an-array/
// Leetcode Problem Number: 442

/*
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>dup;
        unordered_set<int> seen;
        for(int num : nums) {
            if(seen.count(num)) {
                dup.push_back(num);
            }
            seen.insert(num);
        }
        return dup;
    }
};
        

*/