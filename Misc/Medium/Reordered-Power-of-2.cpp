class Solution {
public:
    bool reorderedPowerOf2(int num) {
        if((num & (num - 1)) == 0)
            return true;
        string numStr = to_string(num);
        sort(numStr.begin(), numStr.end());
        vector<string> permutations;
        do
        {
            permutations.push_back(numStr);
        } while (next_permutation(numStr.begin(), numStr.end()));
        
        for (const auto& str : permutations)
        {
            if(str[0] == '0')
                continue;
            int num = stoi(str);
            if((num & (num - 1)) == 0)
                return true;
        }
        return false;
    }
};
