// Copy List with Random Pointer
// Leetcode Problem #138
// https://leetcode.com/problems/copy-list-with-random-pointer/


// Time Complexity: O(n) 
// Space Complexity: O(n) 


/*
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) {  // Edge case: If the original list is empty, return nullptr
            return nullptr;
        }

        unordered_map<Node*, Node*> nodeMap;  // Map to store the mapping from original nodes to copied nodes
        
        
        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        nodeMap[head] = newHead;  // Store the mapping for the head node

        while(oldTemp != nullptr) {
            Node* copyNode = new Node(oldTemp->val);
            nodeMap[oldTemp] = copyNode;  // Store the mapping from original node to copied node
            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        
        oldTemp = head;
        newTemp = newHead;

        while(oldTemp != nullptr) {
            newTemp->random = nodeMap[oldTemp->random];  // Set the random pointer for the copied node
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        
        return newHead;  // Return the head of the copied list
};
*/