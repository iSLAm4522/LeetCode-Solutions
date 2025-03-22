class Solution {
public:
    inline int gcd(int b, int r){
        if (r==0)
            return b;
        return gcd(r, b%r);
    }
    int countBeautifulPairs(vector<int>& nums) {
        int size = nums.size();
        int cnt=0;
        for (int i = 0; i < size; i++)
        {
            int first_d = to_string(nums[i]).at(0) - '0';
            for (int j = i+1; j < size; j++)
            {
                int last_d = nums[j] % 10;
                if(gcd(min(first_d,last_d),max(first_d,last_d)%min(first_d,last_d)) == 1)
                    cnt++;
            }
        }
        return cnt;
    }
};