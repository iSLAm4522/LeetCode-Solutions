class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = -1, minNum = nums[0];
        for (int i = 1; i < n; i++)
            if(nums[i] <= minNum)   minNum = nums[i];
            else maxDiff = max(maxDiff, nums[i] - minNum);
        return maxDiff;
    }
};
