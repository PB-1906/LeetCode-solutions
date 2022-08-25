class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> a;
        unordered_map<char,int> b;
        for(int i = 0 ; i < magazine.size();i++){
          a[magazine[i]]++;
        }
        for(int i = 0 ; i < ransomNote.size();i++){
          b[ransomNote[i]]++;
        }
        for(int i = 0 ; i < ransomNote.size() ;i++){
          if(b[ransomNote[i]]<=a[ransomNote[i]])continue;
          else return false;
        }
        return true;
        
    }
};