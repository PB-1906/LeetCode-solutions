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
    int numComponents(ListNode* head, vector<int>& nums) {
         unordered_set<int> us(nums.begin(),nums.end());
        int prev = -1,result = 0;
        ListNode *temp = head;
        while(temp){
            int value = temp->val;
            if(us.find(value)==us.end()){
                prev = -1;
            }
            else{
                if(prev==-1){
                    result++;
                }
                prev = value;
            }
            temp = temp->next;
        }
        return result;
      
    }
};