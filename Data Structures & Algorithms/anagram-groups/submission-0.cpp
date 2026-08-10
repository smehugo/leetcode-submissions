class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> result;

        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            sort(word.begin(), word.end());

            anagrams[word].push_back(strs[i]);
        }
        
        for (auto& anagram : anagrams) {
            result.push_back(anagram.second);
        }
        return result;
    }
};