// Leetcode Problem: Find the Duplicate Number
// Leetcode Problem Number: 287
// Leetcode Link: https://leetcode.com/problems/find-the-duplicate-number/description/


/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int val : nums) {
            if(seen.find(val) != seen.end()) {
                return val; // duplicate number found
            }
            seen.insert(val);
        }
            return -1; // no duplicate found (though the problem guarantees there is one)
        
    }
};
*/
// Time Complexity: O(n)
// Space Complexity: O(n)

// this code will run and submit too but we have one constraint
// You must solve the problem without modifying the array nums and using only constant extra space.

// Slow and Fast Pointer Approach
// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Finding the intersection point of the two runners.
        do {
            slow = nums[slow]; // move slow pointer by 1 step
            fast = nums[nums[fast]]; // move fast pointer by 2 steps
        } while (slow != fast);

        // Phase 2: Finding the entrance to the cycle.
        slow = nums[0]; // reset slow pointer to the start
        while (slow != fast) {
            slow = nums[slow]; // move slow pointer by 1 step
            fast = nums[fast]; // move fast pointer by 1 step
        }
        return slow; // the entrance to the cycle is the duplicate number
    }
};
*/