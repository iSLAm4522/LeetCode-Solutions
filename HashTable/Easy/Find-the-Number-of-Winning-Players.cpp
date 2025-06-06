class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        unordered_map<int, unordered_map<int, int>> playerPicks;
        vector<bool> winners(n, false);
        int ans = 0;
        
        for (const auto& row : pick) {
            int player = row[0], color = row[1];
            playerPicks[player][color]++;
            
            if (playerPicks[player][color] >= player + 1 && !winners[player]) {
                ans++;
                winners[player] = true;
            }
        }
        return ans;
    }
};
