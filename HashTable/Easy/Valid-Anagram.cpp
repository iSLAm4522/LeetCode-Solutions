class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        unordered_map<char, int> umap1;
        unordered_map<char, int> umap2;
        for (const auto& ch : s)
            umap1[ch]++;
        for (const auto& ch : t)
            umap2[ch]++;
        for (const auto& ch : s)
            if(umap1[ch] != umap2[ch])
                return false;
        return true;
    }
};
