class Solution {
public:
    int countLargestGroup(int n) {
        std::unordered_map<int, int> umap;
        int cnt = 0;
        for (int num = 1; num <= n; num++) {
            int sum = 0, x = num;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            umap[sum]++;
        }
        int maxFreq = 0;
        for (const auto& pair : umap)
            maxFreq = max(maxFreq, pair.second);
        for (const auto& pair : umap)
            if(pair.second == maxFreq)
                cnt++;
        return cnt;
    }
};
