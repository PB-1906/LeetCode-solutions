class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]>=nums[low]){
             if(nums[mid]==nums[low]){
                low = low+1;
              }
             else if(target<nums[mid] && target>=nums[low]){
                high = mid-1;
              }
             else{
                low = mid+1;
              }
            }
           
            
            else{
                if(target>nums[mid] && nums[high]>=target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
                
            }
            
        }
        
        return false;
      
    }
};