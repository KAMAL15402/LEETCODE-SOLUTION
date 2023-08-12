class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector <int> diff;
        for(int i=0;i<n;i++){
            diff.push_back(abs(arr[i]-x));
        }
        int l=0,h=n-1;
        while(h-l>=k){
            if(diff[l]>diff[h]){
                l++;
            }else{
                h--;
            }
        }
        cout<<l<<" "<<h<<endl;
        vector<int> ans;
        for(int i= l;i<=h;i++){
            cout << i<<endl;
            ans.push_back(arr[i]);
        }
        return ans;
    }
};