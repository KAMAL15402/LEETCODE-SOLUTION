class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         //1st sol 
        //sort the array and then check the adjacent element 
        //time complexcity - nlogn sort + n checking the adjacent  space 0(n) as space is used while sorting
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1])
        //         return nums[i];
        // }
        
        //negative marking method
        
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])]<0){
                return abs(nums[i]);
            }else{
                nums[abs(nums[i])] *= -1;
                
            }
        }
        
        
        return -1;
    }
};