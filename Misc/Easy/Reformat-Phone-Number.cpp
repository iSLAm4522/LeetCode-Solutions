class Solution {
public:
    string reformatNumber(string number) {
        string ans = "";
        int n = number.length(), last = 0;
        for (int i = 0; i < n; i++)
            if(isdigit(number[i]))
                number[last++] = number[i];
        number = number.substr(0, last);
        int len = number.length();
        int i = 0;
        while (len > 4) {
            ans += number.substr(i, 3) + "-";
            i += 3;
            len -= 3;
        }
        if (len == 4) {
            ans += number.substr(i, 2) + "-" + number.substr(i + 2, 2);
        } else {
            ans += number.substr(i, len);
        }
        return ans;
    }
};
