class Solution {
public:
    string solve(string num1, string num2,int l1,int l2, int carry){
        //base case
        if(l1<0 && l2<0 ){
            if(carry!=0){
               return string(1,carry+'0');//string of 1 size 
            }
            return "";
        }

        //ek case solve 
        int n1= (l1>=0? num1[l1]:'0')-'0';
        int n2= (l2>=0? num2[l2]:'0')-'0';
        int sum = n1+ n2+carry;
        int digit = sum % 10;
        carry = sum/10;
        string ans = "";
        ans.push_back(digit+'0'); //0 is added to change int into char
         ans += solve(num1,num2,l1-1,l2-1,carry);
         return ans;
    }


    string addStrings(string num1, string num2) {
       int l1= num1.length()-1,l2 = num2.length()-1;
       int carry = 0;
       string ans = solve(num1,num2,l1,l2,carry);

       reverse (ans.begin(),ans.end());
       return ans; 
    }
};