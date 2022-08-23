class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        int ind=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
      if(ind!=n && nums[ind]==target)ans.push_back(ind);
      else ans.push_back(-1);
       ind=upper_bound(nums.begin(),nums.end(),target)-nums.begin();ind--;
      if(ind>=0 && nums[ind]==target)ans.push_back(ind);
      else ans.push_back(-1);
      return ans;
    }
};