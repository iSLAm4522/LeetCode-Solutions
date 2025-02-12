
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int maxSum = -1;
        unordered_map<int, int> mp;
        for (const int &num : nums) {
            int digitSum = sumOfDigits(num);
            if (mp.find(digitSum) != mp.end())
                maxSum = max(maxSum, num + mp[digitSum]);
            mp[digitSum] = max(mp[digitSum],num);
        }
        return maxSum;
    }
};