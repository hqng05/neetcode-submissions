class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // <thieu, index>
        unordered_map<int, int> m;
        vector<int> a;
        for(int i = 0; i < nums.size(); i++) {
            int d = target - nums[i];
            if(m.count(nums[i])) {
                a.push_back(m[nums[i]]);
                a.push_back(i);
                return a;
            }
            m[d] = i;
        }
        return a;
    }
};
