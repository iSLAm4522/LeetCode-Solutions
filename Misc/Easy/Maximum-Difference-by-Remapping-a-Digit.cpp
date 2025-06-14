class Solution {
public:
    int minMaxDifference(int num) {
        string str = to_string(num);
        int n = str.length();
        
        string maxStr = str;
        for (int i = 0; i < n; i++) {
            if (str[i] != '9') {
                char replace = str[i];
                for (int j = 0; j < n; j++) {
                    if (maxStr[j] == replace) {
                        maxStr[j] = '9';
                    }
                }
                break;
            }
        }
        
        string minStr = str;
        for (int i = 0; i < n; i++) {
            if (minStr[i] != '0') {
                char replace = minStr[i];
                for (int j = 0; j < n; j++) {
                    if (minStr[j] == replace) {
                        minStr[j] = '0';
                    }
                }
                break;
            }
        }
        
        return stoi(maxStr) - stoi(minStr);
    }
};
