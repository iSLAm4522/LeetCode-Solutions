class Solution {
private:
    int sumOfSquaredDigits(int n) {
        int total = 0;
        while (n > 0) {
            int digit = n % 10;
            total += digit * digit;
            n /= 10;
        }
        return total;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> haveSeen;
        while (n != 1) {
            if(haveSeen.count(n))
                return false;
            haveSeen.insert(n);
            n = sumOfSquaredDigits(n);
        }
        return true;
    }
};
