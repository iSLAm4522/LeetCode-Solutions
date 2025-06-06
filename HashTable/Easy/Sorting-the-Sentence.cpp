class Solution {
public:
    string sortSentence(string str) {
        int n = str.length();
        map<int, string> strMap;
        int currentIndex = 0;
        
        for (int i = 2; i < n; i++) {
            if(str[i] == ' '){
                int num = str[i-1] - '0';
                string word = str.substr(currentIndex, i-currentIndex-1);
                strMap[num] = word;
                currentIndex = i+1;
            }
        }
        
        int lastNum = str[n-1] - '0';
        string lastWord = str.substr(currentIndex, n-currentIndex-1);
        strMap[lastNum] = lastWord;

        string ans = "";
        for (const auto& pair : strMap) {
            ans += pair.second;
            ans += " ";
        }
        return ans.substr(0, ans.length() - 1);
    }
};
