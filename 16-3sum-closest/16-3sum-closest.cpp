class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int minimum=INT_MAX;
        int ans = nums[0]+nums[1]+nums[2];
      
        int minnn=0;
        for(int i = 0;i<nums.size();i++){
            int low=i+1,high=nums.size()-1;
            while(low<high)
            {
              int dummy = nums[i]+nums[low] + nums[high];
              if(abs(dummy - target )<abs(ans -target)){
                ans=dummy;
              }
              else if(dummy < target)low++;
              else high--;
            }    
        }
        return ans;
        
      
    }
};