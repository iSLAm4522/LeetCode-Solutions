
#include <stack>
using namespace std;
class Solution {
public:
    string clearDigits(string str) {
        stack<char> stk;
        for(char &ch : str){
            if(isdigit(ch)){
              stk.pop();
            }
            else{
              stk.push(ch);
            }
        }
        string result = "";
        while(!stk.empty()){
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};
