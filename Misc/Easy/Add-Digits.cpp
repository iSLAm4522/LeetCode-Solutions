class Solution {
public:
    int addDigits_helper(int num){
        if(num == 0)
            return 0;
        int result = num%10 + addDigits(num/10);
        return result;
    }
    int addDigits(int num) {
        int result = addDigits_helper(num);
        while (to_string(result).length() != 1)
            result = addDigits_helper(result);
        return result;
    }
};