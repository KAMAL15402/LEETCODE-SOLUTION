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