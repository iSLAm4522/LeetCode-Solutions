class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int cntRed = 0, cntWhite = 0, cntBlue = 0;
        int index = 0;
        while (index < len) {
            if(nums[index] == 0)
                cntRed++;
            else if (nums[index] == 1)
                cntWhite++;
            else if(nums[index] == 2)
                cntBlue++;
            index++;
        }

        int i = 0;
        while (i < cntRed)
            nums[i] = 0, i++; 
        while (i < cntRed + cntWhite)
            nums[i] = 1, i++;
        while (i < len)
            nums[i] = 2, i++;
    }
};
