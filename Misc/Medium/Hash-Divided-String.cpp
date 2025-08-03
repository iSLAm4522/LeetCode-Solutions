class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.length();
        string result = "";
        for (int i = 0; i < n; i+= k) {
            int j = i, sum = 0;
            while (j < i + k) {
                sum += s[j] - 'a';
                j++;
            }
            sum %= 26;
            result += sum + 'a';
        }
        return result;
    }
};
