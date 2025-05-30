class Solution {
public:
    int possibleStringCount(string word) {
        int cnt = 0;
        char ch = word[0];
        for (int i = 1; i < word.length(); i++)
        {
            if(ch != word[i])   ch = word[i];
            else cnt++;   
        }
        return cnt + 1;        
    }
};
