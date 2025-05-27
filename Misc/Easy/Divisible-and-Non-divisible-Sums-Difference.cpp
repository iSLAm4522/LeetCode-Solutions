class Solution {
public:
    int differenceOfSums(int n, int m) {
        if(n < m) return n*(n+1)/2;
        if (n == m) return n*(n - 1)/2 - n;
        if(n > 1 && m == 1) return -n*(n + 1)/2;
        int divisable = 0, notDivisable = 0;
        for (int i = 1; i <= n; i++) {
            if(i % m) notDivisable+= i;
            else divisable+= i;
        }
        return notDivisable - divisable;
    }
};
