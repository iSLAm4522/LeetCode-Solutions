class Solution {
public:
    inline int gcd(int b, int r){
        if (r==0)
            return b;
        return gcd(r, b%r);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.begin()+nums.size());
        return gcd(nums[0],nums[nums.size()-1]%nums[0]);
    }
};