class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long long i = 1; i * i < INT_MAX; i++) {
            if (num == i * i)
                return true;
        }
        return false;
    }
};
