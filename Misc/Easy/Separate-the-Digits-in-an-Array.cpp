class Solution {
public:
    inline void separateDigitsHelper(vector<int>& vec, int num){
        if(num == 0) return;
        separateDigitsHelper(vec, num / 10);
        vec.push_back(num % 10);
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int num : nums)
            separateDigitsHelper(ans, num);
        return ans;
    }
};
