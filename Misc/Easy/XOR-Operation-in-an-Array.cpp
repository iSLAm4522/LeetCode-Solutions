class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> vec(n);
        int result = 0;
        for (int i = 0; i < n; i++) {
            vec[i] = start + 2 * i;
            result ^= vec[i];
        }
        return result;
    }
};
