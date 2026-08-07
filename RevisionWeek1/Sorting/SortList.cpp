// Sort List 
// LeetCode 148
// https://leetcode.com/problems/sort-list/

// Time Complexity: O(n log n)
// Space Complexity: O(log n)

// Difficulty Level: Medium

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                current->next = l1;
                l1 = l1->next;
                current = current->next;
            } else {
                current->next = l2;
                l2 = l2->next;
                current = current->next;
            }
        }

        if (l1 != nullptr) {
            current->next = l1;
        } else {
            current->next = l2;
        }

        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* mid = middleNode(head);
        ListNode* secondHalf = mid->next;
        mid->next = nullptr;

        ListNode* left = sortList(head);
        ListNode* right = sortList(secondHalf);

        return merge(left, right);
    }
};
*/