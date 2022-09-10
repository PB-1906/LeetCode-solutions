class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        map<char,int> a,b;
        for(int i=0;i<s.size();i++)a[s[i]]++;
        for(int i=0;i<t.size();i++)b[t[i]]++;
        return a==b;
    }
};