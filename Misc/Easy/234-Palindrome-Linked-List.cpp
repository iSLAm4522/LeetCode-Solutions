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
    ListNode* front {NULL};
    bool isPalindromeHelper(ListNode* current) {
      if(!current)
        return true;
      
      bool isPal = isPalindromeHelper(current->next);
      
      if(!isPal || current->val != front->val) 
        return false;
      
      front = front->next;
      return true;
    }
    bool isPalindrome(ListNode* head) {
        front = head;
        return isPalindromeHelper(head);
    }
};