class Solution {
public:
       
/*                   recursion solution will give tle as dp not used

 int solve(string &a,string &b, int i,int j){
        if(i == a.length() ||j == b.length()){
            return 0;
        }
        
        
        int ans;
        if(a[i]==b[j]){
            ans = 1+ solve(a,b,i+1,j+1);
        }else{
            ans = max(solve(a,b,i+1,j),solve(a,b,i,j+1));
        }
        return ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        return solve(text1,text2,0,0);
    }
*/
    
    
    
    
    
    int solve(string &a,string &b, int i,int j, vector<vector<int>>&dp){
        if(i == a.length() ||j == b.length()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        
        int ans;
        if(a[i]==b[j]){
            ans = 1+ solve(a,b,i+1,j+1,dp);
        }else{
            ans = max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return solve(text1,text2,0,0,dp);
    }
};