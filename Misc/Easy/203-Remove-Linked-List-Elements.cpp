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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head)
            return head;
        for (ListNode* cur = head,*prev = nullptr; cur;) {
            if (cur->val == val) {
                ListNode* next = cur->next;
                if (cur == head)
                    head = next;
                else
                    prev->next = next;

                cur->next = nullptr;
                cur = next;
            }
            else {
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};