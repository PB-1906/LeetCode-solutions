class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int> > dp( m , vector<int> (n, -1));
        return ans(obstacleGrid,m-1,n-1,dp);
    }
    int ans(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>> &dp)
    {
        if(i==0 && j==0 && obstacleGrid[i][j]==0)return 1;
        if(i<0 or j<0 or obstacleGrid[i][j]==1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int up=0,left=0;
        up=ans(obstacleGrid,i-1,j,dp);
        left=ans(obstacleGrid,i,j-1,dp);
        return dp[i][j]=up+left;
    }
};