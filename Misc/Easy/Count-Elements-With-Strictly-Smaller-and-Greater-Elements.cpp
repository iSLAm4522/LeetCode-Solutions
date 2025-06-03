class Solution {
public:
    int countElements(vector<int>& nums) {
        int minEle = *min_element(nums.begin(), nums.end());
        int maxEle = *max_element(nums.begin(), nums.end());
        int cnt = 0;
        for (const auto& num : nums)
            if(num > minEle && num < maxEle)
                cnt++;
        return cnt;
    }
};