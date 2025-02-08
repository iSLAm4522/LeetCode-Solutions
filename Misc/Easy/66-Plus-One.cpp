
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int incValue = 1;
        int index = digits.size() - 1;
        while (incValue && index >= 0) {
            int sum = digits [index] + incValue;
            if(sum <= 9){
                digits[index] = sum;
                incValue = 0;
            }
            else
                digits[index] = 0;
            index--;
        }
        if(incValue){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
    