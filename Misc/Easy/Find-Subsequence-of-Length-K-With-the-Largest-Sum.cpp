class Solution {
private:
    static bool compareByIndex(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    }
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> pairs, selected;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            pairs.push_back({nums[i], i});
        }
        
        sort(pairs.begin(), pairs.end(), greater<pair<int, int>>());
        
        
        for (int i = 0; i < k; i++) {
            selected.push_back(pairs[i]);
        }
        sort(selected.begin(), selected.end(), compareByIndex);
        
        for (const auto& p : selected) {
            result.push_back(p.first);
        }
        
        return result;
    }
};
