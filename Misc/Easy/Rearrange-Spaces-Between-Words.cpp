
class Solution {
public:
    int countChar(const std::string& str, char ch) {
        int count = 0;
        for (char c : str) {
            if (c == ch)
                count++;
        }
        return count;
    }

    std::vector<std::string> split(const std::string& str) {
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream ss(str);
        while (ss >> token)
            tokens.push_back(token);
        return tokens;
    }

    std::string join(const std::vector<std::string>& elements, const std::string& delimiter) {
        std::string result;
        for (size_t i = 0; i < elements.size(); ++i) {
            result += elements[i];
            if (i != elements.size() - 1)
                result += delimiter;
        }
        return result;
    }

    string reorderSpaces(string str) {
        const char ch = ' ';
        int spaceCount = countChar(str, ch);
        vector<std::string> words = split(str);

        if (words.size() == 1) {
            return words[0] + string(spaceCount, ' ');
        }

        int spacesBetween = spaceCount / (words.size() - 1);
        int extraSpaces = spaceCount % (words.size() - 1);

        std::string separator(spacesBetween, ' ');

        return join(words, separator) + string(extraSpaces, ' ');
    }
};