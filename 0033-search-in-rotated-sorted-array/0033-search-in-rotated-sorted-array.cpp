class Solution {
public:
    int binary(vector<int>& nums , int s ,int e,int target){
        int mid=s+((e-s)>>1);
        while(s<=e){
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                s=mid+1;
            else 
                e=mid-1;
            
            mid=s+((e-s)>>1);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int s=0,n=nums.size()-1,i=0;
       for( i=0;i<n;i++){
           if(nums[i]>nums[i+1])
               break;
       }
        cout<<i<<endl;
        int a=binary( nums,0,i,target);
        int b=binary(nums,i+1,n,target);
        cout<<b;
        if(a==-1 && b==-1)
            return -1;
        int ans= max(a,b);
        return ans;
    }
};