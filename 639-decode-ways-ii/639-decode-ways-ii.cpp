class Solution {
public:
   vector<int> dp;
    long long solve(string& s,int ind){
        if(ind==s.size()) return   1;
        if(s[ind]=='0') return 0;
        if(ind==s.size()-1){
            return s[ind]=='*' ? 9 : 1;
        }
        if(dp[ind]!=-1) return dp[ind];
        long long sum = 0;
        sum+=( s[ind]=='*'?9:1) * solve(s,ind+1);
        if(s[ind]=='*' || s[ind+1]=='*'){
            if(s[ind]=='*' && s[ind+1]=='*'){ 
                sum+=15*solve(s,ind+2);
            }
            else if(s[ind]=='*'){ 
                sum+=(stoi(s.substr(ind+1,1))<=6 ? 2 : 1)*solve(s,ind+2);
            }
            else{
                sum+=(stoi(s.substr(ind,1))==1 ? 9 : (stoi(s.substr(ind,1))==2?6 : 0)) * solve(s,ind+2);
            }
        }
        else if(stoi(s.substr(ind,2))<=26){ 
            sum+=solve(s,ind+2);
        }
        return dp[ind] = sum%1000000007;
        
    }
    int numDecodings(string s) {
         dp.resize(s.size(),-1);
        return solve(s,0);
    }
};