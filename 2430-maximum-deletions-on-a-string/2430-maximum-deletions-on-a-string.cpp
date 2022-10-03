class Solution {
public:
      int dp[4002];
    int solve(int i, int j, string_view& s)
    {
        if(j-i>s.size()-j)
            return 1;
        
        if(dp[i]!=-1)
            return dp[i];
        
        string_view s1 = s.substr(i, j-i);
        string_view s2 = s.substr(j, j-i);
        
        if(s1==s2)
            return dp[i]=max(1+solve(j, j+1, s), solve(i, j+1, s));
        
        return dp[i]=solve(i, j+1, s);
    }
    
    int deleteString(string s) {
        memset(dp, -1, sizeof(dp));
        string_view sv({s.c_str(), s.size()});
        return solve(0, 1, sv);
    }
};