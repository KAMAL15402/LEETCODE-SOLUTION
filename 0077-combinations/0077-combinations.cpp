class Solution {
public:

    void solve(int i,int n,int k,vector<int>& subset  ,vector<vector<int>>& ans){
        //base condition
        if(i>n){
            if(k==0){
                ans.push_back(subset);
            }
            return;
        }
        
        //take the ith element
        subset.push_back(i);
        solve(i+1,n,k-1,subset,ans);

        //skip the ith element
        subset.pop_back();
        solve(i+1,n,k,subset,ans);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans ;
        vector<int> subset;
        solve(1,n,k,subset,ans);
        return ans;
    }
};