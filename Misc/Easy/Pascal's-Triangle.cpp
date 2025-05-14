class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0] = {1};
        for (int i = 1; i < numRows; i++) {
            ans[i].resize(i + 1);
            ans[i][0] = 1;
            for (int j = 0; j < ans[i - 1].size() - 1; j++)
                ans[i][j + 1] = ans[i - 1][j] + ans[i - 1][j + 1];
            ans[i][i] = 1;
        }
        return ans;
    }
};
