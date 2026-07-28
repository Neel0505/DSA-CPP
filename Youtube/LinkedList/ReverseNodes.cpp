// Reverse Nodes in k-Group
// Leetcode Problem: https://leetcode.com/problems/reverse-nodes-in-k-group/
// Leetcode Problem #25

// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;

    // Check if there are at least k nodes left in the linked list
    while(count < k){
        if(temp == NULL){
            return head; 
        
        }
        temp = temp->next;
        count++; 
    }

    // Recursively call the function for the next k nodes

    ListNode* prevNode = reverseKGroup(temp, k);

    

    // Reverse the current k nodes
    temp = head;
    count = 0;

    while(count<k){
        ListNode* nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
        count++;

    
    }
        return prevNode; // Return the new head of the reversed group
    }
};
*/