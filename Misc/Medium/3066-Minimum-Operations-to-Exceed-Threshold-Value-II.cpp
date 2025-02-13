

#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int minNumberOfOperations = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < nums.size(); i++)
            pq.push((long long)nums[i]);
        while (pq.top() < k) {
            long long topElement = pq.top();
            pq.pop();
            long long prevElement = pq.top();
            pq.pop();
            long long newElement = 2*min(topElement, prevElement) + max(topElement, prevElement);
            pq.push(newElement);
            minNumberOfOperations++;
        }
        return minNumberOfOperations;
    }
};
