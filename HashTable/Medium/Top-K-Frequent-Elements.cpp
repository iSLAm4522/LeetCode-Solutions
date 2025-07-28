struct compareFreq{
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2){
        return p1.second < p2.second;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> freqMap;
        priority_queue<pair<int, int>, vector<pair<int, int>>, compareFreq> pq;
        for (const auto& num : nums)
            freqMap[num]++;
        for (const auto& [first, second] : freqMap) {
            pq.push({first, second});
        }
        while (k--) {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};
