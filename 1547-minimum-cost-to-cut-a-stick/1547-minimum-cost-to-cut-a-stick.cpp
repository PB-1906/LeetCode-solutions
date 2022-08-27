class Solution {
public:
   int minCost(int n, vector<int>& cuts) 
{
    int m = cuts.size();
    cuts.push_back(n);
    cuts.insert(cuts.begin(), 0);
    sort(cuts.begin(), cuts.end());
    
    vector<vector<int>> dp(101, vector<int>(101, -1));
    return memSoln(1, m, cuts, dp);
}
int memSoln(int i, int j, vector<int> &cuts, vector<vector<int>> &dp)
{
    if(i > j)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int ans = 1e9;
    for(int k = i; k <= j; k++)
        ans = min(ans,  memSoln(i, k-1, cuts, dp) + memSoln(k+1, j, cuts, dp) + cuts[j+1] - cuts[i-1]);         

    return dp[i][j] = ans;
}
};