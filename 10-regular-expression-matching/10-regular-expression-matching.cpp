class Solution {
    bool solve(int i,int j,string &s, string &p, vector<vector<int>> &dp){
        if(i<0&&j<0) return true;
        if(i<0||j<0){
            if(i<0&&j>0&&p[j]=='*') return solve(i,j- 2,s,p,dp);
            return false;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(p[j]=='.'||s[i]==p[j]) return dp[i][j]=solve(i-1,j-1,s,p,dp);
		
        else if(p[j]=='*') return dp[i][j]=((p[j-1]=='.'||s[i]==p[j-1])&&solve(i-1,j,s,p,dp))||solve(i,j-2,s,p,dp);
        return dp[i][j]=false;
    }
public:
    bool isMatch(string &s, string &p) {
        int m=s.size(),n=p.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,s,p,dp);
    }
};