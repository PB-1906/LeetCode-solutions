class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
         vector<int> res;
        int wordLength = words[0].size();
        int numOfWords = words.size();
        map<string, int> wordFreq;
        
        if(numOfWords * wordLength  > s.size())
            return res;
        
        for(string word : words)
            wordFreq[word]++;
        
        for(int i=0; i<=s.size()-wordLength*numOfWords; i++){
            map<string, int> seen;
            int start = i;

            for(int j=0; j<numOfWords; j++){
                string str = s.substr(start, wordLength);
                
                if(wordFreq.count(str) == 0)
                    break;
                
                seen[str]++;
                
                if(seen[str] > wordFreq[str])
                    break;
                
                start += wordLength;
                
                if(j+1 == numOfWords)
                    res.push_back(i);
            }
            
        }
        
        return res;
    }
};