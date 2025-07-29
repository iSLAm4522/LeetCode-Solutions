class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        unordered_multimap<char, int> charMap;
        for (int i = 0; i < n; i++)
            charMap.insert({s[i], indices[i]});
        for (const auto& [ch, index] : charMap)
            s[index] = ch;
        return s;
    }
};