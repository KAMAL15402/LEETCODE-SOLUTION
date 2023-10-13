class Solution {
public:
    void solve(string &s, string part){
       int idx= s.find(part);
       if(idx != string:: npos){
           s.erase(idx, part.length());
           cout<<s<<endl;
       }else{
           return;
       }
       solve(s,part);

    }
    string removeOccurrences(string s, string part) {
     solve(s,part);   
     return s;
    }
};