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
    ListNode* oddEvenList(ListNode* head) {
        
        if (head == nullptr || head->next == nullptr ) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenhead = head->next;
        
        while(even!=nullptr && even->next != nullptr)
        {
            odd->next = even->next;
            odd = odd->next;
            
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        
        return head;
        
        
        
        
    }
};
