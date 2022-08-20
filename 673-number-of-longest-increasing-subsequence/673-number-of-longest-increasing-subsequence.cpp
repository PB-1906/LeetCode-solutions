class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
         int n=nums.size();
        vector<int> dp(n,1);
        vector<int> count(n,1);
      int maximum=-1;
     for(int i=0; i<=n-1; i++){
        for(int prev = 0; prev <=i-1; prev ++){
            
            if(nums[prev]<nums[i] && 1 +dp[prev]>dp[i]){
                dp[i] = max(dp[i], 1 + dp[prev]);
                count[i]=count[prev];
            }
          else if(nums[prev] < nums[i] && dp[i] == 1+dp[prev])
            count[i]+=count[prev];
        }
       maximum=max(maximum,dp[i]);
    }
    
    int ans = 0;
    
    for(int i=0; i<=n-1; i++){
        if(dp[i]==maximum)ans+=count[i];
    }
  return ans;
    }
};