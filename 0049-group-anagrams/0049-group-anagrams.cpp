class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> map;
    
    for (const string& s : strs) {
        string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end());
        
        // Check if the sorted string is in the map
        if (map.find(sortedStr) == map.end()) {
            // If not found, add it to the map with an empty vector
            map[sortedStr] = vector<string>();
        }
        
        // Add the original string to the corresponding group
        map[sortedStr].push_back(s);
    }
    
    // Convert the map values to the final result vector
    for (const auto& pair : map) {
        ans.push_back(pair.second);
    }
    
    return ans;
}
};