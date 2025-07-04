class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> prefixIndex;
        int maxLen = 0, prefixSum = 0;
        prefixIndex[0] = -1;
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += (nums[i] == 0) ? -1 : 1;
            if (prefixIndex.count(prefixSum)) {
                maxLen = max(maxLen, i - prefixIndex[prefixSum]);
            } else {
                prefixIndex[prefixSum] = i;
            }
        }
        return maxLen;
    }
};
