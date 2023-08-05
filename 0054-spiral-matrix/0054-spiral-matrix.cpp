class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total  = m*n;
        vector<int> v;
        int sr=0,sc=0,er=m-1,ec=n-1,count=0;
        while(count<total){
            //print starting row
            for(int i=sc;i<=ec && count < total;i++){
              v.push_back(matrix[sr][i]);
              count++;
              
            }
            sr++;

            //print end column
            for(int i=sr;i<=er  && count < total;i++){
              v.push_back(matrix[i][ec]);
              count++;
              
            }
            ec--;

            //print last/ending row
            for(int i=ec;i>=sc && count < total;i--){
              v.push_back(matrix[er][i]);
              count++;
              
            }
            er--;

             //print starting column
            for(int i=er;i>=sr && count < total;i--){
              v.push_back(matrix[i][sc]);
              count++;
              
            }
            sc++;
        }
        return v;
    }
};