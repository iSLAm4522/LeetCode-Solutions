class Solution {
public:
    bool areOccurrencesEqual(string str) {
        std::unordered_map<char, int> umap;
        for(const char& ch: str)
            umap[ch]++;
        int appearance = umap[str[0]];
        for (const auto& pair :umap)
            if(appearance != pair.second)
                return false;
        return true;
    }
};
