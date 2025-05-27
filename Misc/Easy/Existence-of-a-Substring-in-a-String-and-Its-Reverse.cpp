class Solution {
public:
    bool isSubstringPresent(string str) {
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        int pos = 0;
        while(pos < str.length() - 1){
            string subStr = str.substr(pos++, 2);
            if(reversed.find(subStr) != string::npos)
                return true;
        }
        return false;
    }
};
