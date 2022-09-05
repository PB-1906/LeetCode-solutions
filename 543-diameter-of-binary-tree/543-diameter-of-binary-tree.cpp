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
    int diameterOfBinaryTree(TreeNode* root) {
      int ans=-1;
      maxFind(root,&ans);
      return (ans-1);
    }
    void maxFind(TreeNode *root,int *max){
       if(root){
            int currentDia=height(root->left)+height(root->right)+ 1;
            if(currentDia>= *max) *max = currentDia;
        maxFind(root->left,max);
        maxFind(root->right,max);
       }
    }
    int height(TreeNode *root){
      if(root==NULL)return 0;
      return max(height(root->left),height(root->right))+1;
    }
};