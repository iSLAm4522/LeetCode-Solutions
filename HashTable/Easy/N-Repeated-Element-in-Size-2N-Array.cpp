class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> umap;
        const int targetCount = nums.size() / 2;
        for (const auto &num : nums){
            umap[num]++;
            if(umap[num] == targetCount)
                return num;
        }
        return -1;
    }
};
