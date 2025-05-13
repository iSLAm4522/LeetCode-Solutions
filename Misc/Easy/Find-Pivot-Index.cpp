class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size(), leftSum = 0;
        vector<int> prefixSum(size);
        prefixSum[0] = nums[0];
        for (int i = 1; i < size; i++)
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        for (int i = 0; i < size; i++){
            if(leftSum == prefixSum[size - 1] - prefixSum[i])
                return i;
            leftSum = prefixSum[i];
        }
        return -1;
    }
};
