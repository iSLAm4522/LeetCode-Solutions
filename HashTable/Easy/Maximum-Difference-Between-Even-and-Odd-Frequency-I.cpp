class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freqMap;
        for (const auto& ch : s)
            freqMap[ch]++;
        int maxOdd = INT_MIN, minEven = INT_MAX;
        for (const auto& pair : freqMap) {
            if(pair.second % 2 == 0) minEven = min(minEven, pair.second);
            else maxOdd = max(maxOdd, pair.second);
        }
        return maxOdd - minEven;
    }
};
