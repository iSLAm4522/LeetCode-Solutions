class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int, int> umap;
        int maxEle = *max_element(nums.begin(), nums.end());
        if(nums.size() != maxEle + 1)
            return false;
        for (const auto& ele : nums){
            umap[ele]++;
            if(ele != maxEle && umap[ele] > 1)
                return false;
        }
        if(umap[maxEle] != 2)
            return false;
        return true;
    }
};
