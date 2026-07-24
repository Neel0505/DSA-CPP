// Linked List Cycle Detection
// Leetcode Problem #141
// https://leetcode.com/problems/linked-list-cycle/
// Detect and Remove Cycle in a Linked List 

// Slow and fast pointer approach

// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) { // Cycle detected
                return true; 
            }
        }
        return false;
    }
};
*/