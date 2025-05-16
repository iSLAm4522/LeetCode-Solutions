class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int ptr1 = 0, ptr2 = numbers.size() - 1;
        while (ptr1 < ptr2) {
            if(numbers[ptr1] + numbers[ptr2] < target)
                ptr1++;
            else if (numbers[ptr1] + numbers[ptr2] > target)
                ptr2--;
            else{
                ans.push_back(ptr1 + 1), ans.push_back(ptr2 + 1);
                break;
            }
        }
        return ans;
    }
};