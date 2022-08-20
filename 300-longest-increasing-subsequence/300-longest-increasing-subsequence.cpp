#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
      int n=arr.size();
      vector<int> dp(n,1);
    
    for(int i=0; i<=n-1; i++){
        for(int prev = 0; prev <=i-1; prev ++){
            
            if(arr[prev]<arr[i]){
                dp[i] = max(dp[i], 1 + dp[prev]);
            }
        }
    }
    
    int ans = -1;
    
    for(int i=0; i<=n-1; i++){
        ans = max(ans, dp[i]);
    }
    
    return ans;
      }
    
};