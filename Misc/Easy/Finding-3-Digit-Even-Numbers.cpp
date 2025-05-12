
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        set<int> st;
        int size = digits.size();
        sort(digits.begin(), digits.end());
        int i = 0;
        while(digits[i] == 0)
            i++;
        for (; i < size; i++) {
            int num = digits[i];
            for (int j = 0; j < size; j++) {
                if(i == j && digits[i] == digits[j])
                    continue; 
                num = num * 10 + digits[j];
                for (int k = 0; k < size; k++) {
                    if((k == i && digits[i] == digits[k])||(k == j && digits[k] == digits[j]))
                        continue;
                    num = num * 10 + digits[k];
                    if(!(num % 2)){
                        st.insert(num);
                    }
                    num -= digits[k];
                    num /= 10;
                }
                num -= digits[j];
                num /= 10;
            }
        }
        for (int ele : st)
            ans.push_back(ele);
        return ans;
    }
};