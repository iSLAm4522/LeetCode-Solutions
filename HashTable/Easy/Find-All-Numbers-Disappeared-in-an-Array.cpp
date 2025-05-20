class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> freqMap;
        vector<int> ans;
        
        for (int num : nums)
            freqMap[num]++;

        for (int num = 1; num <= len; num++)
            if (freqMap.find(num) == freqMap.end())
                ans.push_back(num);
                
        return ans;
    }
};