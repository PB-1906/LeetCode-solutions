class Solution {
public:
  int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        for (auto ch : tasks) mp[ch - 'A']++;
        
        int max_count = *max_element(mp.begin(), mp.end());
        
        int res = (max_count-1) * (n+1);
        for (auto f : mp) 
        if (f == max_count) res++;
        return max(res,(int)tasks.size());
      }
};