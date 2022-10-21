class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         int l = nums.size();
  int i = 0;
  int j = 0;
  int winsize = k+1;
  map<int,int>mp;
  while(j < l)
  {
      mp[nums[j]]++;
      if(j-i+1 < winsize)
      {
          if(mp.size() < j-i+1)
          {
              return true;
          }
          j++;
      }else
      {
          if(j-i+1 == winsize)
          {
              if(mp.size() < j-i+1)
              {
                  return true;
              }
              mp[nums[i]]--;
              if(mp[nums[i]] == 0)
              {
                  mp.erase(nums[i]);
              }
              i++;
              j++;
          }
      }
  }
  return false;
    }
};