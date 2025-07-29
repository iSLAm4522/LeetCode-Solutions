class Solution {
    enum RuleKey{
        TYPE,
        COLOR,
        NAME
    };
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0;
        for (const auto& item: items)
        {
            if((ruleKey == "type" && item[RuleKey::TYPE] == ruleValue)||
                (ruleKey == "color" && item[RuleKey::COLOR] == ruleValue)||
                (ruleKey == "name" && item[RuleKey::NAME] == ruleValue)){
                    cnt++;
            }
        }
        return cnt;
    }
};
