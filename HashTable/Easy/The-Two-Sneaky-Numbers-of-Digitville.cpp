class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> ans;
        for (int num : nums) {
            if(!seen.insert(num).second){
                ans.push_back(num);
                if(ans.size() == 2) break;
            }
        }
        return ans;
    }
};
