class Solution {
public:
    bool isSelfDiv(int num)
    {
        int dupn = num;
        while(dupn)
        {
            int rem = dupn%10;
            dupn /= 10;
            if(rem == 0 || num % rem != 0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for(int i=left; i<=right; i++)
        {
            if(isSelfDiv(i))
                ans.push_back(i);
        }
        return ans;
    }
};