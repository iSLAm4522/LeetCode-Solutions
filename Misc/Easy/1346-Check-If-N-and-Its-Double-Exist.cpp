#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> uset;
        for (int &num : arr) {
            if (uset.count(num * 2) || (num % 2 == 0 && uset.count(num / 2)))
                return true;
            uset.insert(num);
        }
        return false;
    }
};
