class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int> a;
        for(int i=0;i<nums.size();i++){
          a[nums[i]]++;
        }
       for(auto x:a){
         if(x.second>n/2)return x.first;
       }
      return 0;
    }
};