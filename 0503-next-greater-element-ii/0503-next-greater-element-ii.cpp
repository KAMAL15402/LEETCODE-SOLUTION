class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
     stack <int> s;
     vector<int> ans,res;
        for(int i=(2*nums.size())-1;i>=0;i--){
            int idx = i%nums.size();
            while(!s.empty() && nums[idx]>=s.top()){
                s.pop();
            }
            int result = (s.empty())?-1:s.top();
            cout<<result <<endl;
            ans.push_back(result);
            s.push(nums[idx]);
        }
       reverse(ans.begin(),ans.end());


        
        for(int i=0;i<nums.size();i++){
         res.push_back(ans[i]);
        }
        return res;
    }
};