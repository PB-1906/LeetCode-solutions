class Solution {
public:
   int SolveByTabulation(int n)
    {
        vector<vector<int>> dp(n+2, vector<int> (n+2,1));
        
        for(int start = n ; start>= 1 ; start--)
        {
            for(int end = start+1 ; end<= n ; end++)
            {
                  int count  = 0;
                  for(int k = start ; k<= end ; k++)
                   {
                    int left = dp[k+1][end];
                    int right = dp[start][k-1];
                    count+= left * right;
                   }                    
                    dp[start][end] = count;
                
            }
        }
          return dp[1][n];
    }
    
    
    
    
public:
    int numTrees(int n) {
        return SolveByTabulation(n);
    }
};