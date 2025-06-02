class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int i = 1; i < n; i++)
            if(nums[i - 1] == key)
                freq[nums[i]]++;

        int maxFreq = 0;
        int target;
        for (const auto& pair  : freq)
            if(pair.second > maxFreq)
                maxFreq = pair.second, target = pair.first;
        return target;
    }
};
