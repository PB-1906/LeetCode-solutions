class Solution {
public:
     string frequencySort(string s) {
    unordered_map<char,int>ump;
    for(auto &ch :s){
        ump[ch]++;
    }
    priority_queue<pair<int,char>>maxHeap;
    for(auto &it:ump){
        maxHeap.push({it.second,it.first});
    }
    string res(s.size(),' ');
    int j=0;
    while(maxHeap.size()>0){
        pair<int,char> top_element = maxHeap.top();
        for(int i=0;i<top_element.first;++i){
            res[j]=top_element.second;
            ++j;    
        }
        maxHeap.pop();
    }
    return res;
}
};