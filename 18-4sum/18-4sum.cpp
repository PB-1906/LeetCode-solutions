#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      
      int len = nums.size();
        vector<vector<int>> sol;
      if(len==0)return sol;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < len; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            for(int j = i + 1; j < len; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                long long s = nums[i] + nums[j];
                int a = j + 1, b = len - 1;
                while(a < b)
                {
                    long long sum = nums[a] + nums[b] + s; 
                    if(sum == target)
                    {
                        sol.push_back({nums[i], nums[j], nums[a], nums[b]});
                        a++;
                        while(a < len && nums[a] == nums[a - 1])
                            a++;
                    }
                    else if(sum > target)
                        b--;
                    else
                        a++;
                }
            }
        }
        return sol;
    }
};