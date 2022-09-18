class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> p;
        int n=arr.size();
        for(int i=0;i<n;i++){
          p.push({abs(arr[i]-x),arr[i]});
          if(p.size()>k)p.pop();
        }
        vector<int> a;
        while(p.size()>0){
          int b=p.top().second;
          a.push_back(b);
          p.pop();
        }
        sort(a.begin(),a.end());
        return a;
    }
};