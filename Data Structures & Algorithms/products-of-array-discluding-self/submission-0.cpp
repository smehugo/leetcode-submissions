class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // split in half based on i
        // mult sides, mult halves
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> output(nums.size());

        // left side
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                left[i] = 1;
            } else if (i > 0) {
                left[i] = left[i - 1] * nums[i - 1];
            }
        }

        // right side
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i == nums.size() - 1) {
                right[i] = 1;

            } else {
                right[i] = right[i + 1] * nums[i + 1];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            output[i] = left[i] * right[i];
        }
        return output;
    }
};