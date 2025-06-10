class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freqMap;
        for (const auto& ch : s)
            freqMap[ch]++;
        int maxDiff = INT_MIN;
        for (const auto& pair1 : freqMap) {
            if(pair1.second % 2 == 0)
                continue;
            for (const auto& pair2 : freqMap) {
                if(pair2.second % 2 != 0)
                    continue;
                maxDiff = max(maxDiff, pair1.second - pair2.second);
            }
        }
        return maxDiff;
    }
};
