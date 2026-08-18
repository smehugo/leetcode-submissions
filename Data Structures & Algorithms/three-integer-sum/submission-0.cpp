class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        vector<vector<int>> out;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            l = i + 1;
            r = nums.size() - 1;
            while (l < r) {
                if (nums[i] + nums[l] + nums[r] == 0) {
                    out.push_back({nums[l], nums[i], nums[r]});
                    l++;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }

                if ((nums[l] + nums[i] + nums[r]) < 0 && l < r) {
                    l++;
                }
                if ((nums[l] + nums[i] + nums[r]) > 0 && l < r) {
                    r--;
                }
            }
        }
        return out;
    }
};
