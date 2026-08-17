class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        // set the nums
        // look for the next num from the idx
        // store high range
        if (nums.size() < 1) {
            return 0;
        }
        unordered_set<int> s;
        int max;
        int high;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        for (auto& num : s) {
            if (s.find(num - 1) != s.end()) {
                continue;
            }
            high = 1;
            while (s.find(num + high) != s.end()) {
                high++;
            }
            if (high > max) {
                max = high;
            }
        }
        return max;
    }
};