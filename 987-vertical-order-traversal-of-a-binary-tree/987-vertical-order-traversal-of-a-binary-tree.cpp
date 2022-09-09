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
#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        map<int,map<int,vector<int> > > nodes;
        queue<pair<TreeNode*,pair<int,int> > > q;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<TreeNode*,pair<int,int> > p = q.front();
            q.pop();
            TreeNode* frontNode = p.first;
            int hd = p.second.first;
            int lv = p.second.second;
            
            nodes[hd][lv].push_back(frontNode->val);
            
            if(frontNode->left!=NULL){
                q.push(make_pair(frontNode->left,make_pair(hd-1,lv+1)));
            }
            if(frontNode->right!=NULL){
                q.push(make_pair(frontNode->right,make_pair(hd+1,lv+1)));
            }
        }
        
        for(auto i: nodes){
            vector<int> temp;
            for(auto j: i.second){
                sort(j.second.begin(),j.second.end());
                for(auto k: j.second){
                    temp.push_back(k);
                }

            }
             ans.push_back(temp);
        }
        return ans;
    }
};