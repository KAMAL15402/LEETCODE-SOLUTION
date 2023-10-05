class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        if(n<2) return nums;
        vector <int> ans;
        int first = nums[0],second=nums[0],fc=1,sc=0;
        for(int i=1;i<n;i++){
            if(first==nums[i]){
                fc++;
            }else if(second == nums[i]){
                sc++;
            }else if(fc == 0){
                    first = nums[i];
                    fc= 1;
                
             }else if(sc == 0){
                second = nums[i];
                sc = 1;
             }else{
                fc--;
                sc--;
                
            }

        }
        if(first == second) return {first};
        fc = 0;
        sc = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==first)fc++;
            if(nums[i]==second)sc++;
        }
        if(fc > n/3)
        ans.push_back(first);
        if(sc>n/3)
        ans.push_back(second);
        return ans;
    }
};