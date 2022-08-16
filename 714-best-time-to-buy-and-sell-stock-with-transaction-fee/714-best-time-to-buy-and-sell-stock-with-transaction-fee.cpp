class Solution {
public:
    long getAns(vector<int> &prices, int ind, int buy, int n, vector<vector<int>> &dp,int fee ){

    if(ind>=n) return 0; //base case
    
    if(dp[ind][buy]!=-1)
        return dp[ind][buy];
        
    int profit;
    
    if(buy==0){// We can buy the stock
        profit = max(getAns(prices,ind+1,0,n,dp,fee), -prices[ind] + getAns(prices,ind+1,1,n,dp,fee));
    }
    
    if(buy==1){// We can sell the stock
        profit = max(getAns(prices,ind+1,1,n,dp,fee), -fee + prices[ind] + getAns(prices,ind+1,0,n,dp,fee));
    }
    
    return dp[ind][buy] = profit;
}


int maxProfit(vector<int> &prices,int fee)
  {
    //Write your code here
    int n=prices.size();
    vector<vector<int>> dp(n,vector<int>(2,-1));
    
    if(n==0) return 0;
    int ans = getAns(prices,0,0,n,dp,fee);
    return ans;
  }
};