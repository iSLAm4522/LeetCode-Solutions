class Solution {
public:
    string addBinary(string str1, string str2) {
        string result;
        int i = str1.length() - 1;
        int j = str2.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) {
            int digit1 = (i >= 0) ? str1[i--] - '0' : 0;
            int digit2 = (j >= 0) ? str2[j--] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 2;
            result = char(sum % 2 + '0') + result;
        }
        
        return result;
    }
};
