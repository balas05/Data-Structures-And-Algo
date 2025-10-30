#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // Function to add two numbers represented as linked lists
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1); // Dummy node to simplify head handling
        ListNode* curr = dummy;
        int carry = 0;

        // Traverse both lists until both are null
        while (l1 != nullptr || l2 != nullptr) {
            int sum = carry; // Start with carry from previous addition

            // Add l1 node value if present
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add l2 node value if present
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Create a new node with the digit part of the sum
            curr->next = new ListNode(sum % 10);

            // Update carry for next iteration
            carry = sum / 10;

            // Move to the next node
            curr = curr->next;
        }

        // If there's any remaining carry, add a final node
        if (carry) {
            curr->next = new ListNode(carry);
        }

        return dummy->next; // Return the actual head
    }
};

// ------------------ Helper Functions for Testing ------------------

// Function to create a linked list from an array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Function to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// ------------------ Main Function for Local Testing ------------------

int main() {
    // Example 1: (2 -> 4 -> 3) + (5 -> 6 -> 4)
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};

    ListNode* l1 = createList(arr1, 3);
    ListNode* l2 = createList(arr2, 3);

    Solution s;
    ListNode* result = s.addTwoNumbers(l1, l2);

    cout << "Sum: ";
    printList(result); // Expected output: 7 -> 0 -> 8

    return 0;
}
