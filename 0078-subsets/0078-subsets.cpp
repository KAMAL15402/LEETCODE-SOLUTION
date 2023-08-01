/** 
                   ITERATIVE APPROACH   GOOD TIME BUT TAKES MORE STORAGE 
                   TIME COMPLEXITY - (N*2^N)    SPACE COMPLEXITY -   (  N* 2^N )

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> temp;
        v.push_back(temp);
        for (int num:nums){
            int n = v.size();
            for(int j=0;j<n;j++){
                vector<int> temp1=v[j];
                temp1.push_back(num);
                v.push_back(temp1);
            }
        }  
        return v;
    }
};
**/



class Solution {
public:
    void solve(vector <int> nums,vector <int> o,int index,vector<vector<int>>& ans){
       
        if(index >= nums.size()){
            ans.push_back(o);
            return ;
        } 
        
        solve(nums, o,index+1,ans);
        int element = nums[index];
        o.push_back(element);
        solve(nums, o,index+1,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> o ;
        int index=0;
        solve(nums,o,index,ans);
        return ans;
    }
};