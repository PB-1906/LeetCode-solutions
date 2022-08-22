class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> a;
        for(int i=0;i<n;i++){
          a[nums[i]]++;
        }
      vector<int> b;
        for(auto x:a){
          if(x.second>n/3)b.push_back(x.first);
        }
      return b;
    }
};