class Solution {
public:
    int numDecodings(string s) {
        if(s.length()<1)return 0;
        if(s[0]=='0')return 0;
        if(s.length()==1)return 1;
        int value1=1,value2=1;
        for(int i=1;i<s.length();i++){
          int num1=s[i]-'0';
          int num2=(s[i-1]-'0')*10 + num1;
          int val=0;
          if(num1>=1){
            val+=value2;
          }
          if(num2>=10 && num2<=26){
            val+=value1;
          }
          value1=value2;
          value2=val;
        }
        return value2;
    }
};