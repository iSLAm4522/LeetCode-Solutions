class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        bool containVowel = false, containConsonant = false;
        unordered_set<char> vowels{'a', 'e', 'u', 'o', 'i', 'A', 'E', 'U', 'O', 'I'};
        if(n < 3)
            return false;
        for (int i = 0; i < n; i++) {
            if(!isalnum(word[i]))
                return false;
            if(vowels.count(word[i]))
                containVowel = true;
            else if(isalpha(word[i])) containConsonant = true;
        }
        return containVowel && containConsonant;
    }
};
