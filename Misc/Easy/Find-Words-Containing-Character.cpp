class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int len = words.size(), index = 0;
        vector<int> ans;
        for (const auto& word : words) {
            if(word.find(x) != string::npos)
                ans.push_back(index);
            index++;
        }
        return ans;
    }
};
