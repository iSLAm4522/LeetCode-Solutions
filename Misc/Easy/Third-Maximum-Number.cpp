class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        set<int, greater<int>> uniqueNums;
        for (int num : nums) {
            uniqueNums.insert(num);
            if (uniqueNums.size() == 3) {
                return num;
            }
        }
        
        return *uniqueNums.begin();  
    }
};
