class Solution {
public:
    string generateTag(string caption) {
        string str,subStr, result = "#";
        int n = caption.length();
        int i = 0, j = n - 1, cnt = 0;
        str = caption;
        for (const auto ch: str) {
            if(ch != ' ')
                subStr += tolower(ch);
            else if(subStr != ""){
                if(cnt != 0)
                    subStr[0] = toupper(subStr[0]);
                else subStr[0] = tolower(subStr[0]);
                result += subStr;
                subStr = "";
                cnt++;
            }
        }
        if(result != "#")
            subStr[0] = toupper(subStr[0]);
        else subStr[0] = tolower(subStr[0]);
        result += subStr;
        return result.substr(0, 100);
    }
};
