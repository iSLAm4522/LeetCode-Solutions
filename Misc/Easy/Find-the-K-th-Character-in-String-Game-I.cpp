class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        int currentSize = 1;
        while (true) {
            int i = 0;
            if(currentSize > k)
                return str[k - 1];
            while (i < currentSize)
                str += char((str[i++] - 'a' + 1) % 26 + 'a');
            currentSize *= 2;
        }
    }
};