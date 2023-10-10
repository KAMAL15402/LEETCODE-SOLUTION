class Solution {
public:
    int minOperations(vector<int>& nums) {
        int len = nums.size(),ans =0;
        set<int> s;
        for(auto x: nums){
            s.insert(x);
        }
        nums.clear();
        for(auto x: s){
            nums.push_back(x);
            cout<<x;
        }
        sort(nums.begin(),nums.end());
        int maxi = INT_MIN;
        int n = nums.size(),end = 0;
        for(int i=0;i<n;i++){
            while( end<n && nums[end]<nums[i]+len ){
                end++;
            }
            int temp = end-i;
            maxi = max(temp , maxi);
        }
        return len-maxi;
    }
};