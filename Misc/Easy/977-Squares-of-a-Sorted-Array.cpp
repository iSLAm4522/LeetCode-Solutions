

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i] * nums[i]);
        }
        nums.clear();
        while (!pq.empty()) {
            nums.push_back(pq.top());
            pq.pop();
        }
        return nums;
    }
};