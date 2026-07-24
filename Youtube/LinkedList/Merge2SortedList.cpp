// Merge 2 Sorted Linked List
// Leetcode Problem #21
// https://leetcode.com/problems/merge-two-sorted-lists/

// Time Complexity: O(n + m) where n and m are the lengths of the two linked lists
// Space Complexity: O(n + m) for the recursive stack space

/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr || list2 == nullptr) {
            return list1 == nullptr ? list2 : list1;
        }

        // Case 1 : list1's value is smaller than list2's value
        if(list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else { // Case 2 : list2's value is smaller than list1's value
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }

        
    }
};
*/