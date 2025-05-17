
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        int maxElement = arr[len - 1];
        for (int i = len - 2; i >= 0; i--) {
            int temp =  arr[i];
            arr[i] = maxElement;
            if(temp > maxElement)
                maxElement = temp;
        }
        arr[len - 1] = -1;
        return arr;
    }
};
