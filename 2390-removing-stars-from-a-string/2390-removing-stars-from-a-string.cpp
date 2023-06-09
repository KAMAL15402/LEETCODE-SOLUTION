class Solution {
public:
    string removeStars(string s) {
       stack<char> stack;
        string ans ="";
        
        for(int i=0;i<s.length();i++){
            if(s[i]== '*'){
                stack.pop();
            }else{
                stack.push(s[i]);
            }
        }
        while(!stack.empty()){
            ans += stack.top();
            stack.pop();
        }
                    reverse(ans.begin(), ans.end());
        return ans;
    }
};