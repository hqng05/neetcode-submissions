class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> tc = strs;
        for(string& s : tc) ranges::sort(s);
        map<string, vector<string>> vsc;
        for(int i = 0; i < strs.size(); i++) vsc[tc[i]].push_back(strs[i]);
        vector<vector<string>> ans;
        for(auto [i, v] : vsc) ans.push_back(v);
        return ans;
    }
};
