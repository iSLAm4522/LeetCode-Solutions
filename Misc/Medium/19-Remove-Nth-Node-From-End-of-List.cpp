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
    int getLength(ListNode* head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* getNode(ListNode* node, int index) {
        if (index <= 1)
            return node;
        int i = 1;
        while (i < index) {
            node = node->next;
            i++;
        }
        return node;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head)
            return head;
        int len = getLength(head);
        if(n%len == 0){
            ListNode* temp = head->next;
            head->next = nullptr;
            head = temp;
            return head;
        }
        ListNode* prevNode = getNode(head, (len - n));
        if (!prevNode->next) {
            prevNode = prevNode->next;
        }
        else {
            ListNode* temp = prevNode->next->next;
            prevNode->next->next = nullptr;
            prevNode->next = temp;
        }
        return head;
    }
};