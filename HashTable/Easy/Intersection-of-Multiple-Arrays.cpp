class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;
        for (const auto& row : nums)
            for (const auto& num : row)
                if(++freq[num] == nums.size())
                    ans.push_back(num);

        sort(ans.begin(), ans.end());
        return ans;
    }
};
