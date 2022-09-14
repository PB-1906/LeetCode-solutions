class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
      string s=countAndSay(n-1);
      string res="";
      int counter=0;
      for(int i=0;i<s.length();i++){
          counter++;
            //segregating into groups
          if(i==s.length()-1 || s[i]!=s[i+1]){
            string s1=to_string(counter)+s[i];
            res=res.append(s1);
            counter=0;
          }
      }
      return res;
    }
  
};