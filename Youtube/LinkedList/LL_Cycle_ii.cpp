// Linked List Cycle Detection ii 
// Leetcode Problem #142
// https://leetcode.com/problems/linked-list-cycle-ii/

// Slow and fast pointer approach
// Time Complexity: O(n)
// Space Complexity: O(1)

// We know if slow and fast pointer meet, then there is a cycle in the linked list.
// Then initialize slow = head and move both slow and fast one step only at the sames speed 
// Now this time when they meet, the meeting point will be the starting point of the cycle in the linked list.


/*
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next; 
            fast = fast->next->next;

            if (slow == fast) { // Cycle detected
                slow = head; // Reset slow to head

                while (slow != fast) { // Move both pointers at the same speed
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; // Meeting point is the start of the cycle
            }
        }
        return nullptr; // No cycle detected
        
    }
};
*/
