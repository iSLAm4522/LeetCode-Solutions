class Solution {
public:
    int reverseDegree(string str) {
        int index = 0, degree = 0;
        for (char ch : str)
            degree += (26 - (ch - 'a')) * ++index;
        return degree;
    }
};
