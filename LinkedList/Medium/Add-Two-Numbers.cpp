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
        ListNode* head = NULL, *currNode = head;
        int digit1 = 0, digit2 = 0, remainder = 0;
        while (l1 || l2) {
            if(l1)  digit1 = l1->val;
            else    digit1 = 0;
            if(l2)  digit2 = l2->val;
            else    digit2 = 0;
            int sum = digit1 + digit2;
            ListNode* newNode = new ListNode((sum + remainder) % 10);
            remainder = (sum + remainder) / 10;
            if(!head)   head = newNode, currNode = newNode;
            else    currNode->next = newNode, currNode = currNode->next;
            if(l1)  l1 = l1->next;
            if(l2)  l2 = l2->next; 
        }
        if (remainder > 0) {
            ListNode* newNode = new ListNode(remainder);
            currNode->next = newNode;
        }
        return head;
    }
};
