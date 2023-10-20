class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int  n = nums.size();
        vector<int>  ans (n);
        int p=0,neg=1;
        for(auto x : nums){
            if(x>=0){
                ans[p]= x;
                p += 2;
            }else{
                ans[neg]= x;
                neg+=2;
            }


        }
        return ans;
    }
};