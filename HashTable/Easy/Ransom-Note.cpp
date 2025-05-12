class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> letters;
        for (char& ch : ransomNote)
            letters[ch]++;
        for (char& ch : magazine)
            letters[ch]--;
        for (char& ch : ransomNote)
            if(letters[ch] > 0)
                return false;
        return true;
    }
};
