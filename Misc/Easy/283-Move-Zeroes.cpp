
class Solution {
public:
    inline void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int nonZeroIndex = 0;
        for (int i = 0; i < size;i++) {
            if(nums[i] != 0)
            {
                swap(nums[i], nums[nonZeroIndex]);
                nonZeroIndex++;
            }
        }
    }
};