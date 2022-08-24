class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int,int> m;
          stack <int> s;
          vector <int> v;
          for(int i=0;i<nums2.size();i++){
          while(!s.empty() && nums2[i]>s.top()){
            m[s.top()] = nums2[i];
            s.pop();
          }
          s.push(nums2[i]);
          }
          for(int i=0;i<nums1.size();i++){
            if(m.find(nums1[i])!=m.end()) v.push_back(m[nums1[i]]);
            else v.push_back(-1);
          }
          return v;

      
    }
};