class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        unordered_set<int> uniqueFrequencies;
        for (const auto& num : arr)
            freqMap[num]++;
        for (const auto& [_, freq] : freqMap) {
            if(uniqueFrequencies.count(freq))
                return false;
            uniqueFrequencies.insert(freq);
        }
        return true;
    }
};
