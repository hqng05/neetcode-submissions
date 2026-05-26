class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> f;
        for(int i : nums) f[i]++;
        int n = nums.size();
        vector<vector<int>> b(n + 1);
        for(auto [fs, sc] : f) b[sc].push_back(fs);
        vector<int> a;
        for(int i = n; i >= 1; i--) {
            for(int ns : b[i]) {
                a.push_back(ns);
                if(a.size() == k) {
                    return a;
                }
            }
        }
        return a;
    }
};
