class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        int cnt = 0;
        string result = \\;
        for (int i = 0; i < strs[0].length(); i++) {
            string prefix = strs[0].substr(0, i + 1);
            bool isCommon = true;
            for (int j = 1; j < strs.size(); j++) {
                if(prefix != strs[j].substr(0, i + 1)){
                    isCommon = false;
                    break;
                }
            }
            if (isCommon)
                result = prefix;
        }
        return result;
    }
};