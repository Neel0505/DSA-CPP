// Flatten a Doubly Linked List 
// Leetcode Problem #430
// https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL){   // Base case
            return head
        }

        Node*curr = head;
        while(curr !=NULL){
        if(curr->child !=NULL){
            // Flatten the child nodes
            Node* next = curr->next;
            curr->next = flatten(curr->child);

            curr->next->prev = curr;
            cur->child = NULL;

            // Find the tail

            while(curr->next != NULL){
                curr = curr->next;

            }


            // Attach tail with next ptr
            if(next != NULL){
                curr->next = next;
                next->prev = curr;
            }

        }
        curr = curr->next;
        }

        return head;
    }
};
*/