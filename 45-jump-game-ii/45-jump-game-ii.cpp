class Solution {
public:
    int jump(vector<int>& nums) {
         int current = 0; 
        int jump = 0;
        int des = 0;
        for(int i =0;i<nums.size()-1;i++){
            des = max(des,nums[i]+i);
            if(i==current){
                current = des;
                jump++;
            }
        }
        return jump;
    }
};