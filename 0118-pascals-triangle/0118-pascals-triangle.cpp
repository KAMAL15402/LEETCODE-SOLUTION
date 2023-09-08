class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        vector <int> temp1 = {1};
        ans.push_back(temp1);
        if(n==1){
            return ans;
        }
        vector <int> temp2 = {1,1};
        ans.push_back(temp2);
        if(n==2){
            return ans;
        }
        
         for(int i=2;i<n;i++){
             int j = 0;
            vector <int> temp3;
             while(j<=i){
                 if(j==0 || j== i){
                temp3.push_back(1);
                 j++;
                 }else{
                temp3.push_back(ans[i-1][j-1]+ans[i-1][j] ); 
                  j++;
                }
            }
             ans.push_back(temp3);
        }
        
        return ans;
    }
};