class Solution{
public:
int f(vector<int>& nums1, vector<int>& nums2,int n,int m,vector<vector<int>> &dp){
    if(n==-1 || m==-1) return 0;
    
    if(dp[n][m]!=-1) return dp[n][m];
    
    int ans=0;
    
    ans=f(nums1,nums2,n-1,m,dp);
    ans=f(nums1,nums2,n,m-1,dp);
    
    if(nums1[n]==nums2[m]){
        ans=f(nums1,nums2,n-1,m-1,dp)+1;
    }else{
        ans=0;
    }
    return dp[n][m]=ans;
}
int findLength(vector<int>& nums1, vector<int>& nums2) {
       int m = nums1.size(), n = nums2.size(), repeat = 0;
        
        vector<int> prev(n+1, 0);
        
        for(int i = 1; i <= m; i++){
            vector<int> curr(n+1, 0);
            for(int j = 1; j <= n; j++){
                if(nums1[i-1] == nums2[j-1]){
                    curr[j] = 1 + prev[j-1];
                    repeat = max(curr[j], repeat);
                }
            }
            prev = curr;
        }
        return repeat;
}
};