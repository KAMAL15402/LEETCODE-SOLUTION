class Solution {
public:
    void sortColors(vector<int>& nums) {
        //1st approach use library function :)
        //2nd  count the no of 0,1,2 and then fill the vector accoriding to it
        
        
        
        
        //3 pointer approach
        int l=0,m=0,h=nums.size()-1;  //l is low , m is medium , h is high 
        while(m<=h){
            if(nums[m]==1){
                m++;
            }
            else if(nums[m]==0){
                int temp =  nums[l];
                nums[l]= 0;
                nums[m]= temp;
                l++;
                m++;
            }
            else{
                int temp =  nums[h];
                nums[h]= 2;
                nums[m]= temp;
                
                h--;
                
            }
        }
    }
};