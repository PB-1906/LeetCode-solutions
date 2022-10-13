/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode *prev,*cur;
      node->val=node->next->val;
      cur=node->next->next;
      prev=node;
      prev->next=cur;
      
      
    
    
    }
};