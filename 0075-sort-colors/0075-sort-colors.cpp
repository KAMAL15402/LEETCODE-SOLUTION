class Solution {
public:
    void sortColors(vector<int>& nums) {
      int arr[3]={0},n = nums.size();
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
      /*  for(int i=0;i<3;i++){
            cout<<arr[i];
        }*/
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[c] != 0 ){
            nums[i] = c ;  
            arr[c]--;    
            }else{
                c++;
                i--;
            }
             
        }
    }
};