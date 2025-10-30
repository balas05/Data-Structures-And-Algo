/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode *sortList(ListNode *head) {
        // Handle empty or single-node list
        if (head == NULL || head->next == NULL) 
            return head;

        // Dummy heads for 0s, 1s, and 2s
        ListNode *dummy0 = new ListNode(-1);
        ListNode *dummy1 = new ListNode(-1);
        ListNode *dummy2 = new ListNode(-1);

        // Pointers to build each sublist
        ListNode *zero = dummy0;
        ListNode *one = dummy1;
        ListNode *two = dummy2;

        // Traverse and distribute nodes
        ListNode *temp = head;
        while (temp) {
            if (temp->val == 0) {
                zero->next = temp;
                zero = zero->next;
            } 
            else if (temp->val == 1) {
                one->next = temp;
                one = one->next;
            } 
            else { // temp->val == 2
                two->next = temp;
                two = two->next;
            }
            temp = temp->next;
        }

        // Connect 0s → 1s → 2s
        zero->next = (dummy1->next) ? dummy1->next : dummy2->next;
        one->next = dummy2->next;
        two->next = NULL;  // terminate the final list

        // New head after segregation
        ListNode *newHead = dummy0->next;

        // Free dummy nodes
        delete dummy0;
        delete dummy1;
        delete dummy2;

        return newHead;
    }
};
