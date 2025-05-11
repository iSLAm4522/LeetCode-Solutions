class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        stack<int> stk;
        for (int& ele : arr)
        {
            if(ele % 2 != 0){
                stk.push(ele);
                if(stk.size() == 3)
                    return true;
            }
            else
                while (!stk.empty())
                    stk.pop();
        }
        return false;
    }
};
