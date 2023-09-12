class Solution {
public:
    int minDeletions(string s) {
        vector <int> v(26);
        for(auto c: s){
            v[c-'a']++;
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        int f= v[0];//threshold frequency
        for(auto a:v){
            if(a>f){
                if(f>0)
                ans+=a-f;
                else
                ans+=a;
            }
            f=min(f-1,a-1);
        }
        return ans;
    }
};