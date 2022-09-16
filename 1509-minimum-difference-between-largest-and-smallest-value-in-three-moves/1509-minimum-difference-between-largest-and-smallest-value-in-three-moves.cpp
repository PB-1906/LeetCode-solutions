class Solution {
public:
    int minDifference(vector<int>& nums) {
        int size=nums.size();
        if(nums.size()<=4)return 0;
        sort(nums.begin(),nums.end());
         int min1 = nums[size - 4] - nums[0];
        int min2 = nums[size - 3] - nums[1];
        int min3 = nums[size - 2] - nums[2];
        int min4 = nums[size - 1] - nums[3];
        return min({min1, min2, min3, min4});      
    }
};