class Solution {
public:
    int partitionString(string s) {
        int arr[26]={0},ans =0;
         int n = sizeof(arr) / sizeof(arr[0]);
        for(int i=0;i<s.length();i++){
           if(arr[s[i] - 'a'] == 0){
            arr[s[i] - 'a']++;   
           }else{
               ans++;
             memset(arr, 0, n*sizeof(arr[0]));  
               arr[s[i] - 'a']++;
           }
            
             
        }
       
         
        return ans+1;
    }
};