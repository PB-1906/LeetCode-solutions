class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        vector<int> a;
        for(auto it=mp.begin();it!=mp.end();it++){
          p.push({it->second,it->first});
          if(p.size()>k)p.pop();
        }
        while(p.size()>0){
          a.push_back(p.top().second);
          p.pop();
        }
        return a;
    }
};