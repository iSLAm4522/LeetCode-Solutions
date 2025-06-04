class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        bitset<10> mp;
        int min1 = INT_MAX, min2 = INT_MAX, leastCommon = INT_MAX;
        for (const auto& num : nums1){
            mp.set(num);
            min1 = min(min1, num);
        }
        for (const auto& num : nums2) {
            min2 = min(min2, num);
            if(mp.test(num) && leastCommon > num)   leastCommon = num;
        }
        if(leastCommon != INT_MAX)  return leastCommon;
        return min(min1, min2) * 10 + max(min1, min2);
    }
};


