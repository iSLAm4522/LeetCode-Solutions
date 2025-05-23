
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0, cnt = 0;
        for (int num : nums)
            if (!(num % 6))
                sum+= num, cnt++;
        if(!cnt)
            return sum;
        return sum / cnt;
    }
};
