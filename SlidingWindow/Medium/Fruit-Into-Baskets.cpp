class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if (n <= 2) return n;
        
        int left = 0, right = 0;
        int ele1 = fruits[0], ele2 = -1;
        int last_ele1 = 0, last_ele2 = -1;
        int result = 1;
        
        while (right < n) {
            if (ele2 == -1) {
                if (fruits[right] == ele1) {
                    last_ele1 = right;
                } else {
                    ele2 = fruits[right];
                    last_ele2 = right;
                }
                result = max(result, right - left + 1);
                right++;
            } else {
                if (fruits[right] == ele1) {
                    last_ele1 = right;
                    result = max(result, right - left + 1);
                    right++;
                } else if (fruits[right] == ele2) {
                    last_ele2 = right;
                    result = max(result, right - left + 1);
                    right++;
                } else {
                    if (last_ele1 < last_ele2) {
                        left = last_ele1 + 1;
                        ele1 = ele2;
                        last_ele1 = last_ele2;
                        ele2 = fruits[right];
                        last_ele2 = right;
                    } else {
                        left = last_ele2 + 1;
                        ele2 = fruits[right];
                        last_ele2 = right;
                    }
                    result = max(result, right - left + 1);
                    right++;
                }
            }
        }
        return result;
    }
};
