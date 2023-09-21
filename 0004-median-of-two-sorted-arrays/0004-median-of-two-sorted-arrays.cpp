class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int>ans;
    for(auto n: nums1){
        ans.push_back(n);

    }
    for(auto n:nums2){
        ans.push_back(n);
    }
    sort(ans.begin(),ans.end());
    if(ans.size()%2!=0){
        return ((double)(ans[ans.size()/2]));
    }

    double sol = ((double)(ans[ans.size()/2]+ans[(ans.size()/2)-1])/2);
       return sol;

    }
};