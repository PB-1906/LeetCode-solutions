class Solution {
public:
    bool isSelfDivisible(int num)
    {
        int duplicant = num;
        while(duplicant)
        {
            int rem = duplicant %10;
            duplicant /= 10;
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
            if(isSelfDivisible(i))
                ans.push_back(i);
        }
        return ans;
    }
};