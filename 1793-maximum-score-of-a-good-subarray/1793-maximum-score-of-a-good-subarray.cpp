
class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i=k;int j=k;
        int n=nums.size();
        int minimum=nums[k];
        int ans=minimum;
        while(i>0 || j<nums.size()-1){
          if(i==0 || (j<nums.size()- 1 && nums[i-1]<=nums[j+1])){
            j++;
            minimum=min(minimum,nums[j]);
            int m=j-i+1;
            ans=max(ans,minimum*m);
          }
          else{
            i--;
            minimum=min(minimum,nums[i]);
            ans=max(ans,minimum*(j-i+1));
          }
             
        }
        return ans;
        
    }
};