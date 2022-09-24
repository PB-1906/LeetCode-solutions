class Solution {
public:
   vector<vector<int>> dp1;
	bool IsPalindrome(string& s, int i, int j) {
		if (i >= j) return true;
		if (dp1[i][j] != -1) return dp1[i][j];
		if (s[i] == s[j]) return dp1[i][j] = IsPalindrome(s, i + 1, j - 1);
		return dp1[i][j] = false;
	}
   int minCut(string s) {
        dp1.resize(s.size(),vector<int> (s.size(),-1));
        int n = s.size();
        vector<int> dp(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
            int mini=1e9;
            for(int j=i;j<n;j++)
            {
                if(IsPalindrome(s,i,j))
                {
                    int cost = 1+dp[j+1];
                    mini = min(mini,cost);
                }

            }
            dp[i]=mini;
        }
        return dp[0]-1;

        
    }
};