class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int maxLen = 1;
        int left = 0;
        int usedBits = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            while (usedBits & nums[right])
                usedBits ^= nums[left++];
            
            usedBits |= nums[right];
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
