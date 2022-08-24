class Solution {
public:
    int totalMoney(int n) {
        if(n==0)return 0;
        int a=n/7;
        int sum=0;
        sum+=28*a+(7*a*a)/2-(7*a)/2;
        int b=n%7;
        int count=a+1;
        for(int i=0;i<b;i++){
          sum+=count;
          count++;
        }
          
        return sum;
    }
};