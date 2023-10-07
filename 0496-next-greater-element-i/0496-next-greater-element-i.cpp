class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int index = -1,j=0;
            for( j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    index = -2;
                }
                if(nums1[i]<nums2[j] && index == -2){
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if(j==nums2.size()){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};