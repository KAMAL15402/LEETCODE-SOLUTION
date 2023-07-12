class Solution {
public:
    bool dfs(int node ,vector<vector<int>>& adj , vector<bool>& visit ,vector<bool>& instack ){
        if(instack[node]){
            return true;
        }
        
        if(visit[node]){
            return false;
        }
        
        visit[node] = true;
        instack[node] = true;
        
        for(auto neigh: adj[node]){
            if(dfs(neigh , adj , visit, instack)){
                return true;
            }
        }
        instack[node] = false;
        return false;
    }
    
    
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector <vector<int>>adj(n);  // adjaceny matrix hai
       
        
        for(int i = 0;i<n;i++){
            for(auto node: graph[i]){
                adj[i].push_back(node);
            }
        }
        
        vector <bool> visit(n), instack(n);
        
        for(int i = 0;i<n;i++){
           dfs(i,adj,visit,instack);
               
        }
        
        
        //return type is vector . the value not int stack 
        
        vector<int> safeNodes;
        for(int i=0;i<n;i++){
            if(!instack[i]){
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};