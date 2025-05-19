class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans;
        ans.reserve(len);

        for (int num : nums)
            if (num % 2 == 0)
                ans.push_back(num);
        
        for (int num : nums)
            if (num % 2 != 0)
                ans.push_back(num);
        
        return ans;
    }
};
