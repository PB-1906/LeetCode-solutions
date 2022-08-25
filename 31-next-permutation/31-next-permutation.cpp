class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int ind1=-1;
        int ind2=0;
        int n=nums.size();
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
      
        for(int i=n-1;i>=0 && ind1>=0 ;i--){
            if(nums[i]>nums[ind1]){
                ind2=i;
                swap(nums[ind1],nums[ind2]);
                break;
            }
        }
       
        reverse(nums.begin()+ind1+1,nums.end());
        
    }
};