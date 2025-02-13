

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        stack<int> stk;
        int n = arr.size(), index = 0;
        while(stk.size() < n) {
            stk.push(arr[index++]);
            if(stk.top() == 0 && stk.size() < n) {
                stk.push(0);
            }
        }
        index = n;
        while(!stk.empty()) {
            arr[--index] = stk.top();
            stk.pop();
        }
    }
};