#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      int n=nums.size();
      vector<vector<int>> dp(n,vector<int>(n+1,-1));
      return lis(nums,n,0,-1,dp);
      }
 int lis(vector<int> &nums, int n,  int ind, int prev, vector<vector<int>>& dp){
    
    // base condition
    if(ind == n)
        return 0;
        
    if(dp[ind][prev+1]!=-1)
        return dp[ind][prev+1];
    
    int notTake = 0 + lis(nums,n,ind+1,prev,dp);
    
    int take = 0;
    
    if(prev == -1 || nums[ind] > nums[prev]){
        take = 1 + lis(nums,n,ind+1,ind,dp);
    }
    
    return dp[ind][prev+1] = max(notTake,take);
}
    
};