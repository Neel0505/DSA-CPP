// Longest Consecutive Sequence
// Leetcode Problem: https://leetcode.com/problems/longest-consecutive-sequence/
// Leetcode Problem Number: 128

/*
class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longestStreak = 0;

    for (int num : numSet) {
        if (!numSet.count(num - 1)) { // Check if it's the start of a sequence
            int currentNum = num;
            int currentStreak = 1;

            while (numSet.count(currentNum + 1)) {
                currentNum++;
                currentStreak++;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}
};
*/