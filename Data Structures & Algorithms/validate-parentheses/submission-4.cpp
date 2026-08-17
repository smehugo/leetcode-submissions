class Solution {
   public:
    bool isValid(string s) {
        stack<char> seen;
        map<char, char> m;
        m['('] = ')';
        m['{'] = '}';
        m['['] = ']';
        for (auto& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                seen.push(c);
                continue;
            }
            if (seen.empty()) {
                return false;
            }
            char current = seen.top();
            if (m[current] != c) {
                return false;
            }
            seen.pop();
        }
        return(seen.empty());
    }
};
