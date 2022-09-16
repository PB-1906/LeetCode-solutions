class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<int>& nums, vector<int>& multipliers, int l, int i, int n, int m){
        if(i >= m) return 0;
        if(dp[l][i] != INT_MIN) return dp[l][i];
        
        int leftPick = solve(nums, multipliers, l + 1, i + 1, n, m) + nums[l] * multipliers[i];
        int rightPick = solve(nums, multipliers, l, i + 1, n, m) + nums[n - (i - l) - 1] * multipliers[i];
        
        return dp[l][i] = max(leftPick, rightPick);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size(), m = multipliers.size();
        dp.resize(m + 1, vector<int>(m + 1, INT_MIN));
        return solve(nums, multipliers, 0, 0, n, m);
    }
};