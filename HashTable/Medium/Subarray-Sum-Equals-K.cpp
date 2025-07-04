class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), cnt = 0, prefixSum = 0;
        unordered_map<int, int> sumFrequency;
        
        sumFrequency[0] = 1;
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            if (sumFrequency.find(prefixSum - k) != sumFrequency.end())
                cnt += sumFrequency[prefixSum - k];
            sumFrequency[prefixSum]++;
        }
        
        return cnt;
    }
};
