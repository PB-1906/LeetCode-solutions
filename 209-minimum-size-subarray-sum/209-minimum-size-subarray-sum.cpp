class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        int sum=0;
        int ans=INT_MAX;
        while(j<nums.size()){
          sum+=nums[j];
          j++;
          if(sum>=target){
            while(sum>=target){
              sum-=nums[i];
              i++;
            }
            ans=min(ans,j-i+1);
          }
        }
      if(ans==INT_MAX)return 0;
      return ans;
    }
};