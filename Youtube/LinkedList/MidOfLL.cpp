// Middle of a linked list
// Leetcode Problem #876
// https://leetcode.com/problems/middle-of-the-linked-list/

// Slow and fast pointer approach

// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
};
*/