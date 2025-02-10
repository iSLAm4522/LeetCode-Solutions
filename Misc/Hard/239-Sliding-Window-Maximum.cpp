class Solution {
public:
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
  vector<int> result;
  multiset<int> ms;
  for (int i = 0; i < k; i++)
    ms.insert(-nums[i]);
  result.push_back(-*(ms.begin()));
  for (int i = k; i < nums.size(); i++)
  {
    ms.erase(ms.find(-nums[i-k]));
    ms.insert(-nums[i]);
    result.push_back(-*(ms.begin()));
  }
  return result;
}
};