class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> ballCount;
        int maxCount = 0;
        int digitSum = 0;
        int temp = lowLimit;
        while (temp)
        {
            digitSum+= temp % 10;
            temp/= 10;
        }

        ballCount[digitSum]++;
        maxCount++;

        for (int i = lowLimit + 1; i <= highLimit; i++) {
            int num = i;
            while (num % 10 == 0 && num > 0)
            {
                digitSum-= 9;
                num/= 10;
            }

            digitSum+= 1;
            ballCount[digitSum]++;
            maxCount = max(maxCount, ballCount[digitSum]);
        }
        return maxCount;
    }
};
