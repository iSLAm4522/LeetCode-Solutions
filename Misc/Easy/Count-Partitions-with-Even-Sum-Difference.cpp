#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int size = nums.size(), count = 0;
        vector<int> prefix_sum(size);
        prefix_sum[0] = nums[0];
        for (int i = 1; i < size; i++)
            prefix_sum[i] = prefix_sum[i - 1] + nums[i];
        for (int i = 0; i < size - 1; i++) {
            int left_partition = prefix_sum[i],
            right_partition =  prefix_sum[size - 1] - prefix_sum[i];
            if(abs(right_partition - left_partition) % 2 == 0)
                count++;
        }
        return count;
    }
};
