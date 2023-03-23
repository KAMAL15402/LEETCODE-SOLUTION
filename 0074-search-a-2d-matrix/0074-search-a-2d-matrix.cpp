class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m = matrix.size(),n=matrix[0].size();
      //cout<<m<<n;
      int s=0,e= (m*n) - 1 ;
      while(s<=e){
        int mid = (s+e)/2;
        if(matrix[mid/n][mid%n]==target){
          return true;
        }else if(matrix[mid/n][mid%n]<target){
          s = mid+1;
        }else if(matrix[mid/n][mid%n]>target){
          e=mid-1;
        }
      }
      return false;
    }
};