class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> ans;
        int index = 0;
        while (index < n - k + 1) {
            ans.push_back(s.substr(index, k));
            index += k;
        }
        if(n % k == 0)
            return ans;
        string subStr = s.substr(n - (n % k));
        index = subStr.size();
        while (index++ < k)
            subStr+= fill;
        ans.push_back(subStr);
        return ans;
    }
};
