class Solution {
public:
    bool isPalindrome(string str) {
        int i = 0, j = str.length() - 1;
        while (i < j) {
            while (i < j && !isalnum(str[i])) i++;
            while (i < j && !isalnum(str[j])) j--;
            if (tolower(str[i++]) != tolower(str[j--])) return false;
        }
        return true;
    }
};
