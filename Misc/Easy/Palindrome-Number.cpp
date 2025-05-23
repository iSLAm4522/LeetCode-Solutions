class Solution {
public:
    bool isPalindrome(int num) {
        string str = to_string(num);
        int leftPtr = 0, rightPtr = str.length() - 1;
        while (leftPtr < rightPtr) {
            if(str[leftPtr] != str[rightPtr])
                return false;
            leftPtr++, rightPtr--;
        }
        return true;
    }
};
