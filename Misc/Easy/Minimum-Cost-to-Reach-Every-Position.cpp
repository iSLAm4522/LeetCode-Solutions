class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> ans(n);
        int leastCost = INT_MAX;
        for (int i = 0; i < n; i++) {
            if(leastCost > cost[i]) leastCost = cost[i];
            ans[i] = leastCost;
        }
        return ans;
    }
};
