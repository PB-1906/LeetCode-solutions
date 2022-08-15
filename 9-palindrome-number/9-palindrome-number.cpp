class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        long sum=0,rem;
        long x1=x;
        while(x>0)
        {
            rem=x%10;
            sum=sum*10+rem;
            x=x/10;
        }
        if(x1==sum)
            return true ;
        else 
            return false ;
        
    }
};