/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL, *currNode = head; // head: start of result list, currNode: current node in result
        int digit1 = 0, digit2 = 0, remainder = 0; // digit1, digit2: current digits; remainder: carry
        while (l1 || l2) { // Traverse both lists
            // Get current digit values, or 0 if the list is exhausted
            if(l1)  digit1 = l1->val;
            else    digit1 = 0;
            if(l2)  digit2 = l2->val;
            else    digit2 = 0;
            // Add digits and carry
            int sum = digit1 + digit2;
            // Create new node for the current digit of the result
            ListNode* newNode = new ListNode((sum + remainder) % 10);
            // Update carry
            remainder = (sum + remainder) / 10;
            // Append new node to result list
            if(!head)   head = newNode, currNode = newNode;
            else    currNode->next = newNode, currNode = currNode->next;
            // Move to next nodes
            if(l1)  l1 = l1->next;
            if(l2)  l2 = l2->next; 
        }
        // If there is a carry left, add a new node
        if (remainder > 0) {
            ListNode* newNode = new ListNode(remainder);
            currNode->next = newNode;
        }
        return head;
    }
};
