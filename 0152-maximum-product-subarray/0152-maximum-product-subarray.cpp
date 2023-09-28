class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int curr=0,minn=1,maxx= 1,ans=nums[0];
       for(int i=0;i<nums.size();i++){
           curr = nums[i];
           int temp = minn;
           minn = min(curr,min(minn*curr,maxx*curr));
           maxx = max(curr,max(temp*curr,maxx*curr));
           ans = max(ans,max(maxx,minn));
       } 
       return ans;
    }
};