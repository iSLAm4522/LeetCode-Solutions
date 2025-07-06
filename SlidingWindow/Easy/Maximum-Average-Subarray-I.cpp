class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixSum(n);
        int maxSum = INT_MIN, currentSum = 0;
        for (int i = 0; i < n; i++) {
            if(i == 0){
                prefixSum[i] = nums[i];
                continue;
            }
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        for (int i = 0; i < n - k + 1; i++) {
            if(i == 0)
                currentSum = prefixSum[k - 1];
            else currentSum = prefixSum[k + i - 1] - prefixSum[i - 1];
            maxSum = max(maxSum, currentSum);
        }
        return ((double)maxSum) / k + 1e-9;
    }
};
