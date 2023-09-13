class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> umap;
    for (auto i : nums) {
        umap[i]++;
    }
    vector<int> ans;
    vector<pair<int, int>> vec;
    copy(umap.begin(), umap.end(), back_inserter(vec));

    // Sort using a lambda expression
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    for (int i = 0; i < k; i++) {
        ans.push_back(vec[i].first);
    }

    return ans;
}

};