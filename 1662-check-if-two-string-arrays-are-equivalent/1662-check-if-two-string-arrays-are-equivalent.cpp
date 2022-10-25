class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="",b="";
        for(int i=0;i<word1.size();i++){
          a=a+word1[i];
        }
        for(int j=0;j<word2.size();j++){
          b=b+word2[j];
        }
        return a==b;
    }
};