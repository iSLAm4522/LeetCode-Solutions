#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    bool canBePartitioned(const string& str, int target,int index, int currentSum) {
        if (index == str.length()) {
            return currentSum == target;
        }
        int num = 0;
        for (int i = index; i < str.length(); i++) {
            num = num * 10 + str[i] - '0';
            if (canBePartitioned(str, target, i + 1, currentSum + num))
                return true;
        }
        return false;
    }
    int punishmentNumber(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (canBePartitioned(to_string(i * i), i, 0, 0))
                sum += i * i;
        }
        return sum;
    }
};

