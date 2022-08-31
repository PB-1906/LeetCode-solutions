class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> a;
        for(int i=0;i<n;i++){
          a[nums[i]]++;
        }
        for(auto x:a){
          if(x.second>1)return true;
        }
        return false;
    
    }
};