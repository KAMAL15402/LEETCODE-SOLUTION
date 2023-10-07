class Solution {
public:
      /*        pure brute force
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
      */


    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         unordered_map <int,int> umap;
         stack <int> st;
         int n = nums2.size();
         for(int i=n-1;i>=0;i--){
             int ele = nums2[i];
             while(!st.empty()&& st.top()<= ele){
               st.pop();
             }
             int result = (st.empty())?-1:st.top();
             umap.insert({ele,result});
             st.push(ele); 
         }
         vector <int> ans ;
         for(auto x: nums1){
             ans.push_back(umap[x]);
         }
         return ans;
    } 
};