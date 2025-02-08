
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0,prevIndex = -1;
        int size = nums.size();
        bool isFound = false;
        for (int i = 0; i < size; i++)
        {
            if(nums[i] == target){
                index = i;
                isFound = true;
                break;
            }
            else if(nums[i] < target){
                prevIndex = i;
            }
            else
                break;
        }
        if(isFound){
            return index;
        }
        else{
            return prevIndex + 1;
        }
    }
    
};