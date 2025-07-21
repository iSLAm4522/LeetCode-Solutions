
class Solution {
public:
    string makeFancyString(string str) {
        int n = str.size(), cnt = 1;
        string ans = "";
        char last = str[0];
        ans+= last;
        for (int i = 1; i < n; i++) {
            if(str[i] != last){
                cnt = 1;
                last = str[i];
                ans+= last;
            }
            else{
                cnt++;
                if(cnt == 3)
                    cnt--;
                else
                    ans+= str[i];
            }
        }
        return ans;
    }
};
