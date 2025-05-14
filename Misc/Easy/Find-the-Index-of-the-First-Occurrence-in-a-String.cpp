class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i++) {
            if(haystack[i] == needle[0]){
                int j = 0;
                while (i + j < haystack.size() && haystack[i + j] == needle[j])
                    j++;
                if(j == needle.size())
                    return i;
            }
        }
        return -1;
    }
};