#include <stack>
class Solution {
public:
    bool isValid(string s) {
        
        stack <char> stack;
        //cout<<s.length();
            stack.push(s[0]);
        for(int i=1;i<s.length();i++){
            if( !stack.empty() ){
            if(  (stack.top()=='('&& s[i]==')') || (stack.top()=='['&& s[i]==']' ) || ( stack.top()=='{'&& s[i]=='}' ) ){
                stack.pop();
            }else{
                stack.push(s[i]);
            }
            }else{
                stack.push(s[i]);
            }
        }
        if(stack.empty()){
            return true;
        }
        cout<<stack.top();
        return false;
    }
};