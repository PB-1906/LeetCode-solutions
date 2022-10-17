class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;                  
        unordered_map<int,int>m;
        
        for(int i=0;i<numbers.size();i++)    
        {
            int val = target-numbers[i];
            if(m.find(val)!=m.end())  
            {
                ans.push_back(m.find(val)->second+1);
                ans.push_back(i+1);
                break;
            }
            m.insert(pair<int,int>(numbers[i],i)); 
        }
        return ans;
    }
};