class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (vector<int>& customer : accounts) {
            int currentMax = 0;
            for (int& wealth : customer)
                currentMax+= wealth;
            maxWealth = max(maxWealth, currentMax);
        }
        return maxWealth;
    }
};
