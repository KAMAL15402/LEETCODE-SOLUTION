class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack <int> s;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && nums2[i]>s.top()){
                s.pop();
            }
            int result = (s.empty())?-1:s.top();
            m.insert({nums2[i],result});
            s.push(nums2[i]);
        }

        vector<int> ans;
        for(auto x: nums1){
            ans.push_back(m[x]);
        }
        return ans;
    }
};