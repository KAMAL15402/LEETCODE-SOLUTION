class Solution {
public:
    int nextGreaterElement(int n) {
       string num = to_string(n);
       int len = num.length();
       int firstdeflection = -1, seconddeflection = -1;
       int curmax = num[len-1]-'0';
       for(int i= len - 2 ;i>=0;i--){
          if(num[i]-'0'<curmax){
              firstdeflection = i;
              break;
          }
        curmax=num[i]-'0';
       }
       
       if(firstdeflection == -1){
           return -1;
       }
cout<<firstdeflection<<endl;
       int mini= 10;

       for(int i= firstdeflection+1 ;i<len;i++){
          if(num[i]-'0'>num[firstdeflection]-'0' && num[i]-'0'<mini){
              mini = num[i]-'0';
              seconddeflection = i;
              
          }

       }
    if(seconddeflection == -1){
           return -1;
       }


       swap(num[firstdeflection] ,num[seconddeflection] );
       sort(num.begin()+firstdeflection+1,num.end());
       long long result= stoll(num);
       return (result>INT_MAX?-1:result);
    }
};