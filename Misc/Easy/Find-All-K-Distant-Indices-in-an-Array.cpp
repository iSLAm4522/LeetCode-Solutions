class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> distantIndices;
        for (int i = 0, j = 0; i < n; i++)
            if(nums[i] == key)
                for (j = max(j, i - k); j < n && j <= i + k; j++) 
                    distantIndices.push_back(j);
        return distantIndices;
    }
};
