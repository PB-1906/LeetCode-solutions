class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(auto a:nums){
            x=x^a;
        }
      return x;
    }
};