class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> umap;
        for (const int& num : nums)
            umap[num]++;
        int majorElement = INT_MIN, freq = nums.size() / 2;
        for (const auto& pair : umap)
            if(pair.second > freq){
                majorElement = pair.first, freq = pair.second;
                break;
            }
        return majorElement;
    }
};
