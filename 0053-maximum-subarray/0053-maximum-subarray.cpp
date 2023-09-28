class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN,currmax=0;
        for(int i=0;i<nums.size();i++){
            if(currmax<0)currmax=0;
             maxi = max(currmax+nums[i],maxi);
             currmax= currmax+nums[i];
        }
        return maxi;
    }
};