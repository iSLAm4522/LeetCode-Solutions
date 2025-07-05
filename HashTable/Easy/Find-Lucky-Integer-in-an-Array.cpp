class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size(), largestLucky = -1;
        unordered_map<int, int> freqMap;
        unordered_set<int> uniqueNums;
        for (int i = 0; i < n; i++){
            freqMap[arr[i]]++;
            uniqueNums.insert(arr[i]);
        }
        for (const auto& num : uniqueNums)
            if(num == freqMap[num])
                largestLucky = max(largestLucky, num);
        return largestLucky;
    }
};