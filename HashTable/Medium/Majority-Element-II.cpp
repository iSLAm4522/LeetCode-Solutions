class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freqMap;
        const int threshold = nums.size() / 3;
        
        for (const int num : nums) {
            if (++freqMap[num] > threshold && 
                find(ans.begin(), ans.end(), num) == ans.end()) {
                ans.push_back(num);
            }
        }
        
        return ans;
    }
};
