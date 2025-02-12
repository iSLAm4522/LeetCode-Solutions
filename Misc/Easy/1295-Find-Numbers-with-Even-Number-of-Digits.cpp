


#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isEvenNumberOfDigits(int num) {
        int cnt = 0;
        while (num > 0) {
            num /= 10;
            cnt++;
        }
        return cnt % 2 == 0;
    }
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (isEvenNumberOfDigits(nums[i]))
                cnt++;
        }
        return cnt;
    }
};
