
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
    int lengthOfList(ListNode* head) {
        int cnt = 0;
        while (head) {
            head = head->next;
            cnt++;
        }
        return cnt;
    }

    ListNode* getNth(ListNode* head, int nodeNumber) {
        int cnt = 0;
        for (;head; head = head->next) {
            if (++cnt == nodeNumber) {
                return head;
            }
        }
        return nullptr;
    }
    ListNode* getTail(ListNode* head, int len) {
        int cnt = 0;
        for (; head;head = head->next) {
            if (++cnt == len) {
                return head;
            }
        }
        return nullptr;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int len = lengthOfList(head);
        if ( (len <= 1) || (k % len == 0))
            return head;
        k%=len;
        ListNode* nth = getNth(head,len-k);
        ListNode* tail = getTail(head,len);
        tail->next = head;
        head = nth->next;
        nth->next = nullptr;
        tail = nth;
        return head;

    }
};