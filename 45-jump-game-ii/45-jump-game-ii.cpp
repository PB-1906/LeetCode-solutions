class Solution {
public:
    int jump(vector<int>& nums) {
         int cur = 0; 
        int jump = 0;
        int dest = 0;
        for(int i =0;i<nums.size()-1;i++){
            dest = max(dest,nums[i]+i);
            if(i==cur){
                cur = dest;
                jump++;
            }
        }
        return jump;
    }
};