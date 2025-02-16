#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool hasSpecialSubstring(string str, int k) {
        stack<char> st;
        int n = str.length();
        char before_ch = '\0',after_ch;
        st.push(str[0]);
        for (int i = 1; i < n; i++) {
            after_ch = str[i];
            if (st.size() == k && before_ch != st.top() && st.top() != after_ch)
                return true;
            if (!st.empty() && st.top() == str[i]) {
                st.push(str[i]);
            } else {
                before_ch = st.top();
                while (!st.empty())
                    st.pop();
                st.push(str[i]);
            }
        }
        after_ch = '\0';
        if (st.size() == k && before_ch != st.top() && st.top() != after_ch)
            return true;
        return false;
    }
};
