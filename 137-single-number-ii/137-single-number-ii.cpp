class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a=nums.size(); 
        if(a==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[a-1]!=nums[a-2]) return nums[a-1];
        for(int i=1; i<a; i+=3){
            if(nums[i-1]!=nums[i+1]) return nums[i-1];
        }
        return 0; 
    }
};