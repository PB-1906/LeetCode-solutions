class Solution {
public:
      bool isBipartiteHelper(vector<vector<int>>& graph, vector<int>& color, int startNode){
        
        bool ans = true;
        int n = graph.size();
        queue<int> q;        
        int curColor = -1;
        q.push(startNode);
        color[startNode] = curColor;
        
        while(!q.empty()){
            
            int frontNode = q.front();            
            
            for(int i = 0; i < graph[frontNode].size(); i++){
                
                if(color[graph[frontNode][i]] == 0){
                    
                    q.push(graph[frontNode][i]);
                    color[graph[frontNode][i]] = -1*color[frontNode];
                    
                }else if(color[graph[frontNode][i]] == color[frontNode]){
                    return false;
                }
                
            }
            q.pop();
            curColor = -1*curColor;
            
            
        }
        
        return true;
        
    }
    
    bool isBipartite(vector<vector<int>>& graph){
        
        int n = graph.size();
        int result = true;
        vector<int> color(n, 0);
        
        for(int i = 0; i < n; i++){
            
            if(color[i] == 0){
                result = (result && isBipartiteHelper(graph, color, i));
                if(!result) break;
            }
            
        }
        
        return result;
        
}
};