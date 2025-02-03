#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
class Solution {
public:
    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
        std::stack<int> stk;
        std::vector<int> result;
        for (auto &asteroid : asteroids)
        {
            bool is_exloded = false;
            while(!stk.empty() && stk.top() > 0 && asteroid < 0){
               if(stk.top() < -asteroid){
                 stk.pop();
                 continue;
               }
               else if(stk.top() == -asteroid)
                 stk.pop();
               is_exloded = true;
               break;
            }
            if (!is_exloded)
              stk.push(asteroid);
        }
        while(!stk.empty()){
            result.push_back(stk.top());
            stk.pop();
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};