class Solution {
public:
    void solve(vector<char>& s,int f,int e){
        if(f>=e){
            return;
        }
        swap(s[f],s[e]);
        cout<<s[f]<<s[e]<<endl;
        return solve(s,f+1,e-1);
    }
    void reverseString(vector<char>& s) {
        int f = 0 ,e = s.size()-1;
         solve(s,f,e);
    }
};