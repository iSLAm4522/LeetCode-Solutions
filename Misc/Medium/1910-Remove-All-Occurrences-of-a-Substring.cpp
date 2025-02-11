#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    string removeOccurrences(string str, string part) {
        int n = str.length();
        int k = part.length();
        char lastCh = part[k - 1];
        string result = "";
        stack<char> stk1;
        for (const char &ch : str) {
            stk1.push(ch);
            if (stk1.top() == lastCh && stk1.size() >= k){
                bool flag = true;
                stack<int> stk2;
                for (int i = k - 1; i >= 0; i--) {
                    if (stk1.top() == part[i]) {
                        stk2.push(stk1.top());
                        stk1.pop();
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
                if (!flag) {
                    while (!stk2.empty()) {
                        stk1.push(stk2.top());
                        stk2.pop();
                    }
                }
            }
        }
        while (!stk1.empty()) {
            result = stk1.top() + result;
            stk1.pop();
        }
        return result;
    }
};