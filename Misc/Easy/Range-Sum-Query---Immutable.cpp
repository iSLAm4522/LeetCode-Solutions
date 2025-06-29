class NumArray {
    vector<int> prefixSumArray;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSumArray.resize(n);
        prefixSumArray[0] = nums[0];
        for (int i = 1; i < n; i++)
            prefixSumArray[i] = prefixSumArray[i-1] + nums[i];
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return prefixSumArray[right];
        return prefixSumArray[right] - prefixSumArray[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */