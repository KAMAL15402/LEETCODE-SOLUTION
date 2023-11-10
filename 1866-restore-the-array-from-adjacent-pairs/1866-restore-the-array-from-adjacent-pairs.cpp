class Solution {
public:
    void dfs(map<int,vector<int>> &m ,set<int>& s,int a, vector<int>&ans){
        if(s.find(a)!= s.end())return;
        ans.push_back(a);
        s.insert(a);
        for(auto x: m[a]){
            dfs(m,s,x,ans);
        }
    }

    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>> m;
        //just making the adjacency list
        for(auto a: adjacentPairs){
            m[a[0]].push_back(a[1]);
            m[a[1]].push_back(a[0]);
        }
        int head = 0;

        for(auto a: m){
            if(a.second.size()==1){
                head = a.first;
            }
        }
        set<int> s;
        vector<int> ans;
        dfs(m,s,head,ans);
       return ans;
    }
};