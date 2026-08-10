class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(target - nums[i])) {
                int j = seen[target - nums[i]];
                vector<int> result = {i, j};
                sort(result.begin(), result.end());
                return result;
            }
            else
            {
                seen.insert({nums[i], i});
            }
        }
    }
};
