class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int start = 0;
        int len = 0;

        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) != m.end()) {
                start = max(start, m[s[i]] + 1);
            }
            m[s[i]] = i;
            len = max(len, i - start + 1);
        }
        return len;
    }
};