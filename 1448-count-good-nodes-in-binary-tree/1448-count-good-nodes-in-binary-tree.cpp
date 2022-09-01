/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
       if(root==NULL)return 0;
       int prevNode =INT_MIN;
       int countGoodNodes = 0 ;
       countGood(root,prevNode ,countGoodNodes);
       return countGoodNodes;
    }
    void countGood(TreeNode* root,int prevNode ,int &countGoodNodes){
        if(root==NULL)return ;
        if(root->val>=prevNode)countGoodNodes++;
        prevNode = max(prevNode,root->val);
        countGood(root->left,prevNode,countGoodNodes);
        countGood(root->right,prevNode,countGoodNodes);
    } 
};