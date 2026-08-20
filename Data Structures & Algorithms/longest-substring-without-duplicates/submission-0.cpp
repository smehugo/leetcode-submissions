class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> range;
        int l = 0;
        int out = 0;

        for (int r = 0; r < s.size(); r++) {
            while (range.find(s[r]) != range.end()) {
                range.erase(s[l]);
                l++;
            }
            range.insert(s[r]);
            out = max(out, r - l + 1);
        }
        return out;
    }
};