class Solution {
public:
  static bool compare(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),compare);
        int maxi = INT_MIN;
        int ans=0;
        for(auto x:properties){
            if(maxi>x[1]) ans++;
            else maxi=x[1];
        }
        return ans;
    }
};