


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
    int freqArray[201] = {0};
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;
        freqArray[head->val + 100]++;
        ListNode* cur=head;
        while(cur && cur->next){
            if (freqArray[cur->next->val + 100] == 0) {
                freqArray[cur->next->val + 100]++;
                cur = cur->next;
            }
            else {
                ListNode* temp = cur->next->next;
                cur->next->next=nullptr;
                cur->next=temp;
            }
        }
        return head;
    }
};