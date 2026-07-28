// Swap Nodes in Pairs
// Leetcode Problem: https://leetcode.com/problems/swap-nodes-in-pairs/
// Leetcode Problem #24

// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head; // Base case: If the list is empty or has only one node, return the head
        }

        ListNode* firstNode = head;
        ListNode* secondNode = head->next;
        ListNode* prevNode = NULL;

        // Swap the first two nodes

        while(firstNode != NULL && secondNode != NULL){
            ListNode* third = secondNode->next; // Store the next pair of nodes
            firstNode->next = third; // Link the first node to the third node

            if(prevNode != NULL){
                prevNode->next = secondNode; // Link the previous node to the second node
            }else{
                head = secondNode; // Update the head to the new first node
            }
            secondNode->next = firstNode; // Link the second node to the first node

            prevNode = firstNode; // Update the previous node
            firstNode = third; // Move to the next pair
            if(firstNode != NULL){
                secondNode = firstNode->next;
            }
        }

        

        return head; // Return the new head of the swapped pair
        
    }
};
*/