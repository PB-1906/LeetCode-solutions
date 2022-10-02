class Solution {
    int mod=1e9+7;
    int solve(int n, int k , int target , vector<vector<int>>& dp){
		  if(n < 0 || target < 0) return 0;
		  if(target == 0 && n == 0) return 1;
		  if(dp[n][target] != -1) return dp[n][target];
		  long long ans = 0;
		  for(int i = 1 ; i <= k ; i++){
			  ans += solve(n-1,k,target-i,dp);
			  ans %= mod;
		  }
		  return dp[n][target] = ans;
	  }
    public:
	  int numRollsToTarget(int n, int k, int target) {
		  vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
		  int ans = solve(n,k,target,dp);
		  return ans;
  	}
};