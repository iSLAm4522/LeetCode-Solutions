class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxNum = nums[0], indexOfMax = 0, size = nums.size();
        for (int i = 1; i < size; i++)
            if(maxNum < nums[i])
                maxNum = nums[i], indexOfMax = i;
        for (int i = 0; i < size; i++){
            if(i == indexOfMax)
                continue;
            if(maxNum < 2 * nums[i])
                return -1;
        }
        return indexOfMax;
    }
};