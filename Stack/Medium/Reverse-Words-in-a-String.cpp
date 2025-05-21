class Solution {
public:

    string reverseWords(string str) {
        stack<char> stk;
        string ans = "";
        int i = 0, j = str.length() - 1;
        while (str[i] == ' ')
            i++;
        while (str[j] == ' ')
            j--;
        str = str.substr(i, j - i + 1);
        for (const char& ch : str){
            if(ch == ' ' && stk.top() == ' ')
                continue;
            stk.push(ch);
        }

        while (!stk.empty()) {
            string subStr = "";
            while (!stk.empty() && stk.top() != ' ') {
                subStr = stk.top() + subStr;
                stk.pop();
            }
            ans += subStr;
            if(stk.size() > 1){
                stk.pop();
                ans+= " ";
            }
        }
        return ans;
    }
};
