



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for (auto it = nums.begin(); it != nums.end(); it++) {
            st.insert(*it);
        }
        int index = 0;
        for (auto it = st.begin(); it != st.end(); it++) {
            nums[index] = *it;
            index++;
        }
        return st.size();
    }
};