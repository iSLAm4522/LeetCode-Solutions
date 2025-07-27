
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int hills = 0, valleys = 0;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] == nums[i - 1])
                continue;
            int j = i - 1, k = i + 1;
            int left = nums[j], right = nums[k];
            while (j >= 0)
            {
                if(nums[j] != nums[i]){
                    left = nums[j];
                    break;
                }
                j--;
            }
            while (k < n)
            {
                if(nums[k] != nums[i]){
                    right = nums[k];
                    break;
                }
                k++;
            }
            if(left < nums[i] && right < nums[i])
                hills++;
            if(left > nums[i] && right > nums[i])
                valleys++;
        }
        return hills + valleys;
    }
};
