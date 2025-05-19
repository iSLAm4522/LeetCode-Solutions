class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int len = heights.size(), cnt = 0;
        vector<int> freqArray(101, 0);
        
        for (int& height : heights)
            freqArray[height]++;

        int expectedIndex = 0;
        for (int height = 1; height <= 100; height++) {
            while (freqArray[height]--) {
                if (heights[expectedIndex] != height)
                    cnt++;
                expectedIndex++;
            }
        }
        
        return cnt;
    }
};
