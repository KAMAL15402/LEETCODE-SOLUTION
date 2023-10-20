class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=1,n=nums.size(),ans=0;
        set<pair<int,int>> s;
        while(j<n){
            if((nums[j]-nums[i])== k && i!=j){
                //ans++;
                s.insert({nums[i],nums[j]});
                i++;
                j++;
            }else if((nums[j]-nums[i]) > k ){
                i++;
            } 
            else{
                j++;
            }
        }
        return s.size();
    }
};