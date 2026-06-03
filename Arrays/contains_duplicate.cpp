// Problem: Contains Duplicate (LeetCode #217)
// Difficulty: Easy
// Approach: Hash Set O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums) {
            if(seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};