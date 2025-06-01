class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";
        int n = number.length();
        int index = -1;
        for (int i = 0; i < n; i++) {
            if(number[i] == digit){
                if(i == n - 1 || number[i + 1] > digit){
                    index = i;
                    break;
                }
                index = i;
            }
        }
        ans = number.substr(0, index) + number.substr(index + 1);
        return ans;
    }
};
