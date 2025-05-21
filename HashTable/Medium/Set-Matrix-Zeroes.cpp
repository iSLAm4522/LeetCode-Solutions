class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int size1 = matrix.size();
        int size2 = matrix[0].size();
        unordered_set<int> rowMark, columnMark;
        for (int i = 0; i < size1; i++) {
            for (int j = 0; j < size2; j++) {
                if(matrix[i][j] == 0) {
                    rowMark.insert(i);
                    columnMark.insert(j);
                }
            }
        }
        
        for (int row : rowMark) {
            for (int j = 0; j < size2; j++) {
                matrix[row][j] = 0;
            }
        }
        
        for (int col : columnMark) {
            for (int i = 0; i < size1; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};