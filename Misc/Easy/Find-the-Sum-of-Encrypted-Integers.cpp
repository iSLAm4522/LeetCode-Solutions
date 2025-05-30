
class Solution {
public:
    int encrypt(int& num){
        string str = to_string(num);
        char maxDigit = str[0];
        for (auto &ch : str)
            if(ch > maxDigit)
                maxDigit = ch;
        int n = str.length();
        string newStr = "";
        while (n--)
            newStr += maxDigit;
        return stoi(newStr);
    }
    
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (auto &num : nums)
        {
            if(num < 10)
                sum+= num;
            else
                sum+= encrypt(num);
        }
        return sum;
    }
};
