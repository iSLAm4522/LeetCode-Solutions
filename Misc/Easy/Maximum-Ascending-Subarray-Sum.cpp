class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currentMaxSum = nums[0];
        int lastMaxSum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > nums[i-1]){
                currentMaxSum+=nums[i];
            }
            else{
                lastMaxSum = max(lastMaxSum,currentMaxSum);
                currentMaxSum = nums[i];
            }
        }
        return max(lastMaxSum,currentMaxSum);
    }
};
