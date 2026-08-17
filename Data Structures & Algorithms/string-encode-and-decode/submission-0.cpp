class Solution {
   public:
    string encode(vector<string>& strs) {
        // foreach string in strs
        // count the characters in a string
        // put a number of the character length infront of it followed by $
        string encoded_str;
        for (auto& word : strs) {
            string len = to_string(word.size());
            encoded_str += len + "$" + word;
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        string currword;
        string len;
        int lenint;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != 36) {
                len += s[i];
            } else {
                lenint = stoi(len);
                len = "";
                for (int j = 1; j < lenint + 1; j++) {
                    currword += s[i + j];
                }
                i += lenint;
                decoded_strs.push_back(currword);
                currword = "";
            }
        }
        return decoded_strs;
        // count how many number characters are in front of the first $
        //  convert those numbers to a number and delte those and the $
        //  excrat that many characters to a string
        //  remove those too, repeat
    }
};
