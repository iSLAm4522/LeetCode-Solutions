
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len = arr.size();
        int maxEle = arr[0], maxIndex = 0;
        for (int i = 1; i < len; i++) {
            if(arr[i] > maxEle){
                maxEle = arr[i];
                maxIndex = i;
            }
        }

        if(maxIndex == 0 || maxIndex == len - 1)
            return false;

        for(int i = 0; i < maxIndex; i++)
            if(arr[i] >= arr[i + 1])
                return false;

        for(int i = maxIndex; i < len - 1; i++)
            if(arr[i] <= arr[i + 1])
                return false;
        
        return true;
    }
};