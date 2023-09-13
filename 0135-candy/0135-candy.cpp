class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>leftarr,rightarr;
        int com = 1;
        leftarr.push_back(1);
        rightarr.push_back(1);
        for(int i=1;i<ratings.size();i++){
          if(ratings[i]>ratings[i-1]){
              com++;
              leftarr.push_back(com);
          }else{
              com=1;
              leftarr.push_back(com);
          }
        }
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
              com++;
              rightarr.push_back(com);
          }else{
              com=1;
              rightarr.push_back(com);
          }
        }
        reverse(rightarr.begin(),rightarr.end());
        int sum=0;
        for(int i=0;i<ratings.size();i++){
            int temp = max(leftarr[i],rightarr[i]);
            sum+=temp;
        }
        return sum;
    }
};