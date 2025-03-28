class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int negativeCount = 0;
            int positiveCount = 0;
            int i = 0, j = nums.size() - 1;
            
            while (i <= j) {  
                if (nums[i] > 0)
                    positiveCount++;
                else if (nums[i] < 0)
                    negativeCount++;
                
                if (i != j) {  
                    if (nums[j] > 0)
                        positiveCount++;
                    else if (nums[j] < 0)
                        negativeCount++;
                }
                
                i++, j--;
            }
            
            return max(positiveCount, negativeCount);
        }
};
