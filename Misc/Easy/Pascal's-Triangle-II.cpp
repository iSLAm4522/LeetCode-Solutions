class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vec(rowIndex + 1, vector<int>());
        vec[0] = {1};
        for (int i = 1; i <= rowIndex; i++) {
            vec[i].resize(i + 1);
            vec[i][0] = 1;
            for (int j = 1; j <= i - 1; j++)
                vec[i][j] = vec[i - 1][j - 1] + vec[i - 1][j];
            vec[i][i] = 1;
        }
        return vec[rowIndex];
    }
};
