class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.size();
        int i=0,j=0;
        map<char,int> mp;
        vector<int> ans;
        for(int i=0;i<k;i++)
          mp[p[i]]++;
        int count = mp.size();
        while(j<s.size()){
          mp[s[j]]--;
          if(mp[s[j]]==0)count--;
          if(j-i+1<k)j++;
          else if(j-i+1==k){
            if(count==0)
              ans.push_back(i);
            mp[s[i]]++;
            if(mp[s[i]]==1)count++;
            i++;
            j++;
          }
        }
        return ans;
    }
};