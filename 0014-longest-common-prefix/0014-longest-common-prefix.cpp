class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return "";

        string prefix = strs[0];  // start by assuming the whole first string is the answer

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);  // shrink prefix by one character
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};