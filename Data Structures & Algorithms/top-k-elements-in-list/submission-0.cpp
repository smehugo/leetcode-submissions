class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> out;

        for (int i = 0; i < nums.size(); i++) {
            seen[nums[i]]++;
        }

        for (auto& pair : seen) {
            freq[pair.second].push_back(pair.first);
        }

        for (int i = freq.size() - 1; i >= 0; i--) {
            for (auto& x : freq[i]) {
                out.push_back(x);
                
                if (out.size() == k) {
                    return out;
                }
            }
        }
    }
};