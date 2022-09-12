class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0, j=tokens.size()-1;
        int score=0;
        int ans=0;
        
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                i++;
                score++;
                ans=max(ans, score);
                 
            }else{
                if(score==0) break;
                
                power+=tokens[j];
                j--;
                score--;   
            }
        }
        return ans;
    }
};