class Solution {
public:
string removeDuplicates(string s)
{
  stack<char> st;
  for (int i = 0; i < s.length(); i++)
  {
    if (i == 0 || st.empty())
    {
      st.push(s[i]);
      continue;
    }
    if (s[i] != st.top())
      st.push(s[i]);
    else
      st.pop();
  }
  string res = "";
  while (!st.empty())
  {
    res += st.top();
    st.pop();
  }
  reverse(res.begin(), res.end());
  return res;
}
};