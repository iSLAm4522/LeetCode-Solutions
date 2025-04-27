class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
            int size = nums.size(), cnt = 0;
            for (int i = 0; i < size - 2; i++)
            {
                if (2 * (nums[i] + nums[i+2]) - nums[i+1] == 0)
                    cnt++;
            }
            return cnt;
        }
};
