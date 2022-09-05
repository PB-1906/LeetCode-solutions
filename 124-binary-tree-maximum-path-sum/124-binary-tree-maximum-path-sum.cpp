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
    int maxPathSum(TreeNode* root) {
        int maximum=INT_MIN;
        calculatePath(root,maximum);
        return maximum;
    }
    int calculatePath(TreeNode* root,int &maximum){
      if(root==NULL)return 0;
      int left=max(0,calculatePath(root->left,maximum));
      int right=(0,calculatePath(root->right,maximum));
      maximum=max(maximum,root->val+left+right);
      maximum=max(maximum,root->val+left);
      maximum=max(maximum,root->val+right);
      return root->val+max(left,right);
    }
};