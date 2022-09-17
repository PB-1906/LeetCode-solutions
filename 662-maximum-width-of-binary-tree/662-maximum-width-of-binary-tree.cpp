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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        queue<pair<TreeNode *,int>> q;
        q.push({root,0});
        int minimum;
        while(!q.empty()){
          int size=q.size();
          minimum=q.front().second;//to make the id starting from 0 again on a new level
          int first,last;
          for(int i=0;i<size;i++){
            int current=q.front().second - minimum;
            TreeNode *node=q.front().first;
            q.pop();
            if(i==0)first=current;
            if(i==size-1)last=current;
            if(node->left)q.push({node->left,2LL*current+1LL});
            if(node->right)q.push({node->right,2LL*current+2LL});
          }
          ans=max(ans,last-first+1);
        }
        return ans;
    }
};