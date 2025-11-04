class Solution {
public:
    // Function to delete middle node of linked list
    ListNode* deleteMiddle(ListNode* head) {
        /* Edge case: if the list is empty 
         * or has only one node, return null */
        if (head == nullptr || head->next == nullptr) {
            delete head;
            return nullptr;
        }

        // Temporary node to traverse
        ListNode* temp = head;
        
        // Variable to store number of nodes
        int n = 0;
        
        /* Loop to count the number of nodes 
        in the linked list */
        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }
        
        // Index of the middle node
        int middleIndex = n / 2;
        
        // Reset temporary node 
        // to beginning of linked list
        temp = head;
        
        /* Loop to find the node 
        just before the middle node */
        for (int i = 1; i < middleIndex; i++) {
            temp = temp->next;
        }
        
        // If the middle node is found
        if (temp->next != nullptr) {
            // Create pointer to the middle node
            ListNode* middle = temp->next;
            
            // Adjust pointers to skip middle node
            temp->next = temp->next->next;
            
            /* Free the memory allocated 
             * to the middle node */
            delete middle;
        }
        
        // Return head
        return head;
    }
};
