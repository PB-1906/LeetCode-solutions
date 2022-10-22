class Solution {
public:
    string minWindow(string s, string t) {
      map<char,int> mp;
      for(int i=0;i<t.length();i++) mp[t[i]]++;
        int rem = t.length();
        int l=0,r=0,minStart = 0, minLen = INT_MAX;
        
        while(r<s.length())
        {
            mp[s[r]]--;
            if(mp[s[r]]>=0) rem--;
            r++;
            
            while(rem==0)
            {
                if(r-l<minLen)
                {
                    minLen = r-l;
                    minStart = l;
                }
                
                mp[s[l]]++;
                if(mp[s[l]]>0) rem++;
                l++;
            }
        }
        
        return minLen!=INT_MAX ? s.substr(minStart, minLen) : "";
    }
};